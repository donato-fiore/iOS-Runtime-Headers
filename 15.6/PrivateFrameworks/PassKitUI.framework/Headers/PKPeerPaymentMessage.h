// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTMESSAGE_H
#define PKPEERPAYMENTMESSAGE_H

@class PKProtobufPeerPaymentMessage, NSDecimalNumber, NSString, PKCurrencyAmount, NSUUID, PKPeerPaymentRequestToken, MSMessage;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentMessage : NSObject {
    PKProtobufPeerPaymentMessage *_protoMessage;
}


@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) BOOL hasBeenSent;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *memo;
@property (copy, nonatomic) NSString *paymentIdentifier;
@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (nonatomic) NSUInteger type;
@property (readonly, nonatomic) MSMessage *underlyingMessage; // ivar: _underlyingMessage


-(id)_requestDeviceScoreIdentifier;
-(id)description;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 session:(id)arg1 ;
-(id)initWithUnderlyingMessage:(id)arg0 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;
-(void)_updateSummaryText;
-(void)updateWithPeerPaymentPerformResponse:(id)arg0 ;


@end


#endif