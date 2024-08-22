// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICEPROVIDERXPCPROXY_H
#define GTSERVICEPROVIDERXPCPROXY_H

@class NSSet, NSUUID, NSMutableDictionary;
@protocol GTServiceProvider, OS_os_log;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider>

 {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSUUID *_deviceUUID;
    NSMutableDictionary *_observerIdToPort;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)waitForService:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)registerObserver:(id)arg0 ;
-(id)allServices;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)deregisterObserver:(NSUInteger)arg0 ;
-(void)deregisterService:(NSUInteger)arg0 ;
-(void)registerService:(id)arg0 forProcess:(id)arg1 ;
-(void)waitForService:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif