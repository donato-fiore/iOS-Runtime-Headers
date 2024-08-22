// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFDEVICECONTEXTCONNECTION_H
#define AFDEVICECONTEXTCONNECTION_H

@class NSXPCConnection, NSString;
@protocol AFInvalidating, OS_dispatch_queue, AFDeviceContextConnectionDelegate;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "_AFDeviceContextServiceDelegateProxy.h"
#import "AFDeviceContext.h"

@interface AFDeviceContextConnection : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    _AFDeviceContextServiceDelegateProxy *_serviceDelegateProxy;
    id<AFDeviceContextConnectionDelegate> *_delegate;
    NSXPCConnection *_xpcConnection;
    BOOL _isInvalid;
    BOOL _isUpdatingLocalDeviceContext;
    AFDeviceContext *_localDeviceContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_remoteServiceWithErrorHandler:(id)arg0 ;
-(id)_xpcConnection;
-(id)initWithQueue:(id)arg0 instanceContext:(id)arg1 delegate:(id)arg2 ;
-(void)_beginUpdateLocalDeviceContext;
-(void)_clearXPCConnection;
-(void)_endUpdateLocalDeviceContext;
-(void)_fetchLocalDeviceContextWithCompletion:(id)arg0 ;
-(void)_handleXPCConnectionInterruption;
-(void)_handleXPCConnectionInvalidation;
-(void)_invalidate;
-(void)_updateLocalDeviceContext:(id)arg0 ;
-(void)beginUpdateLocalDeviceContext;
-(void)dealloc;
-(void)donateSerializedContextMapByPrivacyClass:(id)arg0 withMetadataMap:(id)arg1 forType:(id)arg2 pushToRemote:(BOOL)arg3 completion:(id)arg4 ;
-(void)endUpdateLocalDeviceContext;
-(void)getLocalDeviceContextWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif