// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8STOREKIT23STOREKITPAYMENTDELEGATE_H
#define _TTC8STOREKIT23STOREKITPAYMENTDELEGATE_H

@class SwiftNativeNSObject;
@protocol ASDStoreKitPaymentProtocol;



@interface _TtC8StoreKit23StoreKitPaymentDelegate : SwiftNativeNSObject <ASDStoreKitPaymentProtocol>

 {
    ? $defaultActor;
    ? handler;
}




-(id)init;
-(void)shouldContinueTransactionWithNewStorefront:(id)arg0 replyBlock:(id)arg1 ;


@end


#endif