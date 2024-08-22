// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCVVV8STOREKIT7PRODUCT16SUBSCRIPTIONINFO6STATUS14STATUSRECEIVER_H
#define _TTCVVV8STOREKIT7PRODUCT16SUBSCRIPTIONINFO6STATUS14STATUSRECEIVER_H

@class SwiftNativeNSObject;
@protocol ASDStoreKitStatusReceiverProtocol;



@interface _TtCVVV8StoreKit7Product16SubscriptionInfo6Status14StatusReceiver : SwiftNativeNSObject <ASDStoreKitStatusReceiverProtocol>

 {
    ? $defaultActor;
    ? continuation;
    ? logKey;
    ? hasInvalidatedCache;
}




-(id)init;
-(void)receivedStatuses:(id)arg0 ;


@end


#endif