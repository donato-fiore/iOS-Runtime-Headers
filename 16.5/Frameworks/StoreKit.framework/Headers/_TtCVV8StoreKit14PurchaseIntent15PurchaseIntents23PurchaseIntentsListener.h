// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCVV8STOREKIT14PURCHASEINTENT15PURCHASEINTENTS23PURCHASEINTENTSLISTENER_H
#define _TTCVV8STOREKIT14PURCHASEINTENT15PURCHASEINTENTS23PURCHASEINTENTSLISTENER_H

@class SwiftNativeNSObject;
@protocol SKPurchaseIntentListenerProtocol;



@interface _TtCVV8StoreKit14PurchaseIntent15PurchaseIntents23PurchaseIntentsListener : SwiftNativeNSObject <SKPurchaseIntentListenerProtocol>

 {
    ? $defaultActor;
    ? continuation;
    ? logKey;
}




-(id)init;
-(void)receivedPurchaseIntentsForProductIdentifiers:(id)arg0 ;


@end


#endif