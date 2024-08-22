// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICEPROVIDER_H
#define GTSERVICEPROVIDER_H

@class NSMutableDictionary;
@protocol GTServiceProvider, GTServiceProviderObserver, OS_os_log;

#import <Foundation/Foundation.h>


@interface GTServiceProvider : NSObject <GTServiceProvider, GTServiceProviderObserver>

 {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_services;
    NSUInteger _nextServiceID;
    NSMutableDictionary *_waiting;
    NSMutableDictionary *_observerIdToObserver;
    NSUInteger _nextObserverId;
}




-(BOOL)waitForService:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)registerObserver:(id)arg0 ;
-(id)allServices;
-(id)init;
-(void)_registerService:(id)arg0 forProcess:(id)arg1 forPort:(NSUInteger)arg2 ;
-(void)deregisterObserver:(NSUInteger)arg0 ;
-(void)deregisterService:(NSUInteger)arg0 ;
-(void)disconnectServicePorts:(id)arg0 ;
-(void)notifyServiceListChanged:(id)arg0 ;
-(void)registerDefaultServiceProvider:(id)arg0 forProcess:(id)arg1 ;
-(void)registerService:(id)arg0 forProcess:(id)arg1 ;
-(void)waitForService:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif