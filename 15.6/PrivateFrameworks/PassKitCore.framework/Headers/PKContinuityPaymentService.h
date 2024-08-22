// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCONTINUITYPAYMENTSERVICE_H
#define PKCONTINUITYPAYMENTSERVICE_H

@class NSArray;
@protocol PKContinuityPaymentServiceExportedInterface, OS_dispatch_queue, PKContinuityPaymentServiceDelegate;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface>

 {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    os_unfair_lock_s _remoteDeviceLock;
}


@property (weak, nonatomic) NSObject<PKContinuityPaymentServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *remoteDevices; // ivar: _remoteDevices


+(id)sharedService;
-(BOOL)canMakePaymentsWithRemoteDevices;
-(BOOL)hasRemoteDevices;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)cancelRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg0 ;
-(void)didReceivePayment:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)didReceivePaymentClientUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)didReceivePaymentHostUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)didReceivePaymentResult:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)didReceiveUpdatedPaymentDevices:(id)arg0 ;
-(void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)promptDetailsForVirtualCard:(id)arg0 showNotification:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestInstrumentThumbnail:(id)arg0 forRemoteDevice:(id)arg1 size:(struct CGSize )arg2 completion:(id)arg3 ;
-(void)sendPayment:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendPaymentClientUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendPaymentHostUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendPaymentResult:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendPaymentSetupRequest:(id)arg0 appDisplayName:(id)arg1 completion:(id)arg2 ;
-(void)sendPaymentStatus:(NSInteger)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)updatePaymentDevices;


@end


#endif