// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTSERVICEPROVIDERXPCPROXY_H
#define GTSERVICEPROVIDERXPCPROXY_H

@class NSSet, NSUUID;
@protocol GTServiceProvider;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider>

 {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSUUID *_deviceUUID;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)allServices;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)dealloc;
-(void)registerService:(id)arg0 forProcess:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)waitForService:(id)arg0 ;


@end


#endif