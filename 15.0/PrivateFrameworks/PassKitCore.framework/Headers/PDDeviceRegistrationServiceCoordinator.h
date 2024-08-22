// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDDEVICEREGISTRATIONSERVICECOORDINATOR_H
#define PDDEVICEREGISTRATIONSERVICECOORDINATOR_H

@class NSMutableArray, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDDeviceRegistrationServiceCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
}


@property (readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // ivar: _paymentWebServiceCoordinator
@property (readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // ivar: _peerPaymentWebServiceCoordinator


-(BOOL)_shouldAttemptPeerPaymentRegistrationForce:(BOOL)arg0 ;
-(id)init;
-(id)initWithPaymentWebServiceCoordinator:(id)arg0 peerPaymentWebServiceCoordinator:(id)arg1 ;
-(void)_canAutomaticallyRegisterWithWebService:(id)arg0 completion:(id)arg1 ;
-(void)_createTransactionAndPerformDeviceRegistrationWithRegistrationTask:(id)arg0 ;
-(void)_handleDeviceRegistrationCompletedWithResult:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_handlePaymentWebServiceContextChanged:(id)arg0 ;
-(void)_peerPaymentRegisterWithURL:(id)arg0 paymentWebService:(id)arg1 forceRegister:(BOOL)arg2 completion:(id)arg3 ;
-(void)_performDeviceRegistrationWithRegistrationTask:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)notePasscodeChanged;
-(void)performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 action:(NSInteger)arg2 forceApplePayRegister:(BOOL)arg3 forcePeerPaymentRegister:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif