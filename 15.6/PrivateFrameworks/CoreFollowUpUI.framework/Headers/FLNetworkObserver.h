// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLNETWORKOBSERVER_H
#define FLNETWORKOBSERVER_H

@class NSMutableDictionary;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FLNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
    BOOL _isNetworkReachable;
    BOOL _isWiFiEnabled;
}


@property (readonly) BOOL isAirplaneModeActiveWithoutWiFi;
@property (readonly) BOOL isNetworkReachable;


+(id)sharedNetworkObserver;
-(BOOL)_isWiFiEnabled;
-(id)_init;
-(id)addNetworkReachableBlock:(id)arg0 ;
-(id)init;
-(void)_networkReachabilityDidChange;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)addNetworkReachableObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)disableAirplaneMode;
-(void)removeNetworkReachableObserver:(id)arg0 ;


@end


#endif