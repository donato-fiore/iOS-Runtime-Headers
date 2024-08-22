// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPAMENTDELEGATE_H
#define SKPAMENTDELEGATE_H

@class NSString;
@protocol NSSecureCoding, ASDStoreKitPaymentProtocol;

#import <Foundation/Foundation.h>

#import "SKPaymentQueue.h"

@interface SKPamentDelegate : NSObject <NSSecureCoding, ASDStoreKitPaymentProtocol>

 {
    NSString *_transactionUUID;
    SKPaymentQueue *_paymentQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 transactionUUID:(id)arg1 ;
-(void)shouldContinueTransactionWithNewStorefront:(id)arg0 replyBlock:(id)arg1 ;


@end


#endif