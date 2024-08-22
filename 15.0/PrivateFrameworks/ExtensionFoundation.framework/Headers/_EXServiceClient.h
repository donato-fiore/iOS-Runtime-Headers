// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXSERVICECLIENT_H
#define _EXSERVICECLIENT_H

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _EXServiceClient : NSObject {
    os_unfair_lock_s _connectionLock;
    os_unfair_lock_s _activeQueriesLock;
}


@property (retain, nonatomic) NSMutableSet *activeQueries; // ivar: _activeQueries
@property (nonatomic) *os_unfair_lock_s activeQueriesLock;
@property (nonatomic) *os_unfair_lock_s connectionLock;
@property (retain, nonatomic) NSXPCConnection *discoveryConnection; // ivar: _discoveryConnection
@property (retain, nonatomic) NSXPCConnection *launchConnection; // ivar: _launchConnection
@property (readonly) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue


+(id)sharedInstance;
-(id)_activeQueryForQuery:(id)arg0 ;
-(id)_init;
-(id)extensionsWithQueries:(id)arg0 ;
-(id)prepareConnectionForExtension:(id)arg0 error:(*id)arg1 ;
-(void)_beginActiveQuery:(id)arg0 ;
-(void)addQueryObserver:(id)arg0 ;
-(void)fetchExtensionsWithQueries:(id)arg0 completionHandler:(id)arg1 ;
-(void)reconnectActiveQueries;
-(void)removeQueryObserver:(id)arg0 ;


@end


#endif