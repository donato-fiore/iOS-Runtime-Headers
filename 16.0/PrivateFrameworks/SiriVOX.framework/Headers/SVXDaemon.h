// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXDAEMON_H
#define SVXDAEMON_H

@class NSXPCListener, AFSiriActivationListener, NSArray, NSString;
@protocol NSXPCListenerDelegate, AFSiriActivationListenerDelegate, SVXClientServiceServerConnectionDelegate;

#import <Foundation/Foundation.h>

#import "SVXQueuePerformer.h"
#import "SVXVirtualDevice.h"
#import "SVXUnderstandingOnDeviceAssetsStateObserver.h"

@interface SVXDaemon : NSObject <NSXPCListenerDelegate, AFSiriActivationListenerDelegate, SVXClientServiceServerConnectionDelegate>

 {
    BOOL _isRunning;
    SVXQueuePerformer *_clientServiceQueuePerformer;
    NSXPCListener *_clientServiceListener;
    AFSiriActivationListener *_siriActivationListener;
    NSArray *_platformDependencies;
    SVXVirtualDevice *_hostVirtualDevice;
    SVXUnderstandingOnDeviceAssetsStateObserver *_uodAssetsState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)handleClientServiceXPCConnection:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_enumerateVirtualDevicesUsingBlock:(id)arg0 ;
-(void)_getVirtualDeviceForActivationContext:(id)arg0 completion:(id)arg1 ;
-(void)_getVirtualDeviceForInstanceInfo:(id)arg0 completion:(id)arg1 ;
-(void)clientServiceServerConnectionDidInvalidate:(id)arg0 ;
-(void)siriActivationListener:(id)arg0 activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)siriActivationListener:(id)arg0 deactivateForReason:(NSInteger)arg1 options:(NSUInteger)arg2 context:(id)arg3 completion:(id)arg4 ;
-(void)siriActivationListener:(id)arg0 myriadEventWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)siriActivationListener:(id)arg0 prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)startWithPlatformDependencies:(id)arg0 ;
-(void)stop;


@end


#endif