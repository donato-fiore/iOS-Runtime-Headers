// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONAVDMANAGER_H
#define GEONAVDMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "GEONavdServerProxy.h"

@interface GEONavdManager : NSObject {
    GEONavdServerProxy *_proxy;
    NSMutableArray *_openers;
    os_unfair_lock_s _openersLock;
}




+(id)navdManager;
+(id)navdManagerClientIdentifier:(id)arg0 ;
+(void)setProxyClass:(Class)arg0 ;
-(id)init;
-(void)closeForClient:(id)arg0 ;
-(void)didPostUINotification:(NSUInteger)arg0 forDestination:(id)arg1 fromClient:(id)arg2 ;
-(void)forceCacheRefresh;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg0 client:(id)arg1 ;
-(void)openForClient:(id)arg0 ;
-(void)requestRefreshForPlannedDestination:(id)arg0 client:(id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg0 ;
-(void)startMonitoringDestination:(id)arg0 forClient:(id)arg1 uuid:(id)arg2 handler:(id)arg3 ;
-(void)statusWithCallback:(id)arg0 ;
-(void)stopMonitoringDestination:(id)arg0 forClient:(id)arg1 uuid:(id)arg2 ;


@end


#endif