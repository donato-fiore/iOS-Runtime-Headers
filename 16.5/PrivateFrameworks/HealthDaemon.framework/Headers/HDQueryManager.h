// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUERYMANAGER_H
#define HDQUERYMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol HDProcessStateObserver, HDDiagnosticObject, HDQueryManagerUnitTestDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryCollectionsByProcessBundleIdentifier;
    NSMutableArray *_pendingDatabaseAccessBlocks;
    NSMutableArray *_executingDatabaseAccessBlocks;
    NSInteger _countOfExecutingThrottledDatabaseAccessBlocks;
    NSInteger _unitTest_suspendCount;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) NSObject<HDQueryManagerUnitTestDelegate> *unitTest_delegate; // ivar: _unitTest_delegate
@property (retain) NSObject<OS_dispatch_queue> *unitTest_delegateQueue; // ivar: _unitTest_delegateQueue


-(id)diagnosticDescription;
-(id)initWithDaemon:(id)arg0 ;
-(void)dealloc;
-(void)logDiagnostics;
-(void)processWithBundleIdentifier:(id)arg0 didTransitionFromState:(unsigned int)arg1 toState:(unsigned int)arg2 ;
-(void)scheduleDatabaseAccessForQueryServer:(id)arg0 block:(id)arg1 ;
-(void)startQueryServer:(id)arg0 completion:(id)arg1 ;
-(void)unitTest_suspendWithCount:(NSUInteger)arg0 ;


@end


#endif