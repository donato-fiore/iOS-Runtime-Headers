// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8STOREKIT23STOREKITPAYMENTDELEGATE_H
#define _TTC8STOREKIT23STOREKITPAYMENTDELEGATE_H

@class SwiftNativeNSObject;
@protocol SKPaymentDelegateProtocol;



@interface _TtC8StoreKit23StoreKitPaymentDelegate : SwiftNativeNSObject <SKPaymentDelegateProtocol>

 {
    ? $defaultActor;
    ? handler;
}




-(id)init;
-(void)handleEngagementRequest:(id)arg0 replyBlock:(id)arg1 ;
-(void)shouldContinueTransactionWithNewStorefront:(id)arg0 replyBlock:(id)arg1 ;


@end


#endif