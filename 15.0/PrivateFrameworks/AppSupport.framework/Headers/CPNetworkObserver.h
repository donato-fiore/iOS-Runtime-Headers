// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPNETWORKOBSERVER_H
#define CPNETWORKOBSERVER_H

@class NSLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CPNetworkObserver : NSObject {
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    *__SCNetworkReachability _networkReach;
    *__CFDictionary _networkObservers;
    *__SCPreferences _wifiPreferences;
    *__CFDictionary _wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}




+(id)sharedNetworkObserver;
-(BOOL)isNetworkReachable;
-(BOOL)isWiFiEnabled;
-(id)init;
-(void)_networkObserversInitialize;
-(void)_networkReachableCallBack:(unsigned int)arg0 ;
-(void)_networkReachableFirstCallBack:(id)arg0 ;
-(void)_wifiCallBack:(unsigned int)arg0 ;
-(void)_wifiFirstCallBack:(id)arg0 ;
-(void)_wifiObserversInitialize;
-(void)addNetworkReachableObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 forHostname:(id)arg2 ;
-(void)addWiFiObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forHostname:(id)arg1 ;
-(void)removeWiFiObserver:(id)arg0 ;


@end


#endif