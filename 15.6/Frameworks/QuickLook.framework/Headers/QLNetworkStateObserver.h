// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLNETWORKSTATEOBSERVER_H
#define QLNETWORKSTATEOBSERVER_H

@class RadiosPreferences, NSMutableArray, NSString;
@protocol RadiosPreferencesDelegate, QLNetworkStateListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLNetworkStateObserver : NSObject <RadiosPreferencesDelegate, QLNetworkStateListener>

 {
    NSUInteger _stack;
    NSObject<OS_dispatch_queue> *_queue;
    ? _networkReachabilityContext;
    *__SCNetworkReachability _reachability;
    int _iCloudDriveReachabilityToken;
    unsigned int _reachabilityFlags;
    RadiosPreferences *_radiosPreferences;
    NSMutableArray *_completionBlocks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger networkState; // ivar: _networkState
@property (retain, nonatomic) NSObject<QLNetworkStateListener> *remoteObserver; // ivar: _remoteObserver
@property (readonly) Class superclass;


+(BOOL)networkAccessShouldGoThroughCloudDocsDaemon;
+(BOOL)usingRemoteNetworkObserver;
+(id)sharedInstance;
-(BOOL)isConnected;
-(BOOL)isWifiCapable;
-(id)init;
-(void)_commonInit;
-(void)_unregisterReachability;
-(void)_update;
-(void)_updateCompletionBlocks;
-(void)_updateNetworkActivityIndicator;
-(void)_updateNetworkStateWithFlags:(unsigned int)arg0 ;
-(void)_updateNetworkStateWithNotifyToken:(int)arg0 ;
-(void)_updateRemoteObserver;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)networkStateWithCompletionBlock:(id)arg0 ;
-(void)popOperation;
-(void)pushOperation;
-(void)startObserving;
-(void)stopObserving;
-(void)updateState:(NSUInteger)arg0 ;


@end


#endif