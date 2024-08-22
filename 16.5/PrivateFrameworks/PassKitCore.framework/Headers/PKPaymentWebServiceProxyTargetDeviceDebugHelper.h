// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTWEBSERVICEPROXYTARGETDEVICEDEBUGHELPER_H
#define PKPAYMENTWEBSERVICEPROXYTARGETDEVICEDEBUGHELPER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"
#import "PKPaymentWebServiceLocalProxyTargetDevice.h"
#import "PKPaymentWebServiceRemoteProxyTargetDevice.h"

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate>

 {
    PKPaymentWebService *_webService;
    NSXPCListener *_remoteListener;
    PKPaymentWebServiceLocalProxyTargetDevice *_localTarget;
    PKPaymentWebServiceRemoteProxyTargetDevice *_remoteTarget;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)webServiceWithProxiedTargetDevice:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithWebService:(id)arg0 ;
-(id)localProxyTargetDevice;
-(void)dealloc;


@end


#endif