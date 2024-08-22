// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKDIAGNOSTICSCOLLECTOR_H
#define EKDIAGNOSTICSCOLLECTOR_H

@class NSMutableDictionary, NSString, NSArray;
@protocol EKCancellableRemoteOperation, EKDiagnosticsCollectionDelegate;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKDiagnosticsCollector : NSObject <EKCancellableRemoteOperation>

 {
    EKEventStore *_store;
    int _token;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_files;
    BOOL _determinedOutputFiles;
    BOOL _finished;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<EKDiagnosticsCollectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *files;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL redactLogs; // ivar: _redactLogs
@property (readonly) Class superclass;


-(id)initWithEventStore:(id)arg0 delegate:(id)arg1 ;
-(void)cancel;
-(void)cancelDiagnosticsCollection;
-(void)collectDiagnostics;
-(void)disconnected;
-(void)receivedBatchResultsFromServer:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif