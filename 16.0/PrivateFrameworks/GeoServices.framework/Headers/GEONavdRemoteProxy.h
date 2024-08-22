// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVDREMOTEPROXY_H
#define GEONAVDREMOTEPROXY_H

@class NSXPCConnection, NSMutableArray, NSMutableDictionary;
@protocol GEONavdProxyObserver, OS_dispatch_queue, GEONavdXPCInterface;


#import "GEONavdServerProxy.h"

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver>

 {
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSObject<GEONavdXPCInterface> *remoteObjectProxyThreadUnsafe;


-(id)init;
-(void)_connectToDaemonIfNeededThreadUnsafe;
-(void)close;
-(void)dealloc;
-(void)didPostUINotification:(NSUInteger)arg0 forDestination:(id)arg1 fromClient:(id)arg2 ;
-(void)forceCacheRefresh;
-(void)navdProxyReceivedData:(id)arg0 ofType:(id)arg1 ;
-(void)navdProxyReceivedHypothesis:(id)arg0 forClient:(id)arg1 ;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg0 client:(id)arg1 ;
-(void)open;
-(void)registerObserver:(id)arg0 ;
-(void)requestRefreshForPlannedDestination:(id)arg0 client:(id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg0 ;
-(void)startMonitoringDestination:(id)arg0 forClient:(id)arg1 uuid:(id)arg2 handler:(id)arg3 ;
-(void)statusWithCallback:(id)arg0 ;
-(void)stopMonitoringDestination:(id)arg0 forClient:(id)arg1 uuid:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif