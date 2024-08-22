// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONCOORDINATOR_H
#define PKPAYMENTAUTHORIZATIONCOORDINATOR_H

@class NSXPCConnection, NSString, NSXPCListener, NSTimer;
@protocol NSXPCListenerDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationHostProtocol, OS_dispatch_queue, PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationCoordinatorExportedObject.h"
#import "PKInAppPaymentService.h"
#import "PKPaymentRequest.h"

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate>



@property (weak, nonatomic, setter=_setPrivateDelegate:) NSObject<PKPaymentAuthorizationCoordinatorPrivateDelegate> *_privateDelegate;
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) CGFloat connectionTimeout; // ivar: _connectionTimeout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPresent; // ivar: _didPresent
@property (retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<PKPaymentAuthorizationHostProtocol> *hostDelegate;
@property (retain, nonatomic) NSString *hostIdentifier; // ivar: _hostIdentifier
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // ivar: _inAppPaymentService
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) PKPaymentRequest *paymentRequest; // ivar: _paymentRequest
@property (copy, nonatomic) id *presentationCompletionBlock; // ivar: _presentationCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationServiceProtocol> *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(BOOL)canMakePayments;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg0 capabilities:(NSUInteger)arg1 webDomain:(id)arg2 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg0 webDomain:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)init;
-(id)initWithPaymentRequest:(id)arg0 ;
-(void)_invokeCallbackWithSuccess:(BOOL)arg0 ;
-(void)_viewServiceTimerFired:(id)arg0 ;
-(void)dealloc;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)presentWithCompletion:(id)arg0 ;
-(void)presentWithOrientation:(id)arg0 completion:(id)arg1 ;


@end


#endif