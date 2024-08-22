// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOREKIT19TRANSACTIONRECEIVER_H
#define _TTC8STOREKIT19TRANSACTIONRECEIVER_H

@class SwiftNativeNSObject;
@protocol SKTransactionReceiverProtocol;



@interface _TtC8StoreKit19TransactionReceiver : SwiftNativeNSObject <SKTransactionReceiverProtocol>

 {
    ? $defaultActor;
    ? continuation;
    ? logKey;
}




-(id)init;
-(void)receivedTransactions:(id)arg0 ;


@end


#endif