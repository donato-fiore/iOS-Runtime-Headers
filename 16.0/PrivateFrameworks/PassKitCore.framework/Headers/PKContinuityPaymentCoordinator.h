// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTINUITYPAYMENTCOORDINATOR_H
#define PKCONTINUITYPAYMENTCOORDINATOR_H

@class NSString;
@protocol PKContinuityPaymentServiceDelegate, OS_dispatch_queue, OS_dispatch_source, PKContinuityPaymentCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PKContinuityPaymentService.h"
#import "PKRemotePaymentRequest.h"

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate>

 {
    PKContinuityPaymentService *_continuityPaymentService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_deviceUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_deviceTotalUpdateTimeoutTimer;
    BOOL _isUpdatingDevices;
    PKRemotePaymentRequest *_currentRemotePaymentRequest;
    NSInteger _messageSendCount;
    NSInteger _messageSendCompleteCount;
}


@property (readonly, nonatomic, getter=isAwaitingReply) BOOL awaitingReply;
@property (readonly, nonatomic) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKContinuityPaymentCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat updatePaymentDeviceTimeout; // ivar: _updatePaymentDeviceTimeout


-(id)initWithContinuityPaymentService:(id)arg0 ;
-(void)_deviceUpdateTimerDidTimeout;
-(void)_deviceUpdateTotalTimerDidTimeout;
-(void)_queue_sendPaymentResult:(id)arg0 completion:(id)arg1 ;
-(void)_resetRequest;
-(void)_send_didReceiveCancellation;
-(void)_send_didReceivePayment:(id)arg0 ;
-(void)_send_didReceiveUpdatedPaymentDevice:(id)arg0 ;
-(void)_send_didTimeoutTotalUpdatePaymentDevices;
-(void)_send_didTimeoutUpdatePaymentDevices;
-(void)cancelRemotePaymentRequestWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg0 ;
-(void)didReceivePayment:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(void)didReceiveUpdatedPaymentDevices:(id)arg0 ;
-(void)sendPaymentClientUpdate:(id)arg0 completion:(id)arg1 ;
-(void)sendPaymentResult:(id)arg0 completion:(id)arg1 ;
-(void)sendRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)updatePaymentDevices;


@end


#endif