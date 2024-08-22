// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPURCHASER_H
#define VUIPURCHASER_H

@class NSString, SSEventMonitor, AMSPurchaseQueue, NSMutableSet;
@protocol AMSPurchaseResponseProtocol, SSEventMonitorDelegate;

#import <Foundation/Foundation.h>

#import "VUIPurchaseRequest.h"

@interface VUIPurchaser : NSObject <AMSPurchaseResponseProtocol, SSEventMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SSEventMonitor *eventMonitor; // ivar: _eventMonitor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIPurchaseRequest *interruptedPurchaseRequest; // ivar: _interruptedPurchaseRequest
@property (retain, nonatomic) AMSPurchaseQueue *purchaseQueue; // ivar: _purchaseQueue
@property (retain, nonatomic) NSMutableSet *purchasingParamsSet; // ivar: _purchasingParamsSet
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isInterruptedPurchaseFulfilledBySSPurchaseResponse:(id)arg0 ;
-(BOOL)isPurchasing:(id)arg0 ;
-(id)_getAdamIdFromBuyParams:(id)arg0 ;
-(id)init;
-(void)didCompleteInterruptedBuyWithResponse:(id)arg0 error:(id)arg1 ;
-(void)enqueuePurchase:(id)arg0 withCompletion:(id)arg1 ;
-(void)eventMonitor:(id)arg0 receivedEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)forgetPurchasing:(id)arg0 ;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleEngagementRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)postCrossProcessNotificationWithBuyParams:(id)arg0 error:(id)arg1 ;
-(void)rememberPurchasing:(id)arg0 ;


@end


#endif