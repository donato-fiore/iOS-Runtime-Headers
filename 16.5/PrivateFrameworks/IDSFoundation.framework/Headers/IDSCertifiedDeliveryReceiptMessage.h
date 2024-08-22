// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCERTIFIEDDELIVERYRECEIPTMESSAGE_H
#define IDSCERTIFIEDDELIVERYRECEIPTMESSAGE_H

@class NSData, NSNumber, NSString, NSDictionary;


#import "IDSMessage.h"

@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage

@property (retain, nonatomic) NSData *certifiedDeliveryRTS; // ivar: _certifiedDeliveryRTS
@property (nonatomic) NSInteger certifiedDeliveryVersion; // ivar: _certifiedDeliveryVersion
@property (retain, nonatomic) NSNumber *failureReason; // ivar: _failureReason
@property (retain, nonatomic) NSString *failureReasonMessage; // ivar: _failureReasonMessage
@property (nonatomic) BOOL generateDeliveryReceipt; // ivar: _generateDeliveryReceipt
@property (retain, nonatomic) NSDictionary *generatedDeliveryStatusContext; // ivar: _generatedDeliveryStatusContext
@property (retain, nonatomic) NSString *localURI; // ivar: _localURI
@property (retain, nonatomic) NSString *originalGUID; // ivar: _originalGUID
@property (retain, nonatomic) NSData *queryHash; // ivar: _queryHash
@property (retain, nonatomic) NSString *remoteURI; // ivar: _remoteURI
@property (retain, nonatomic) NSData *senderToken; // ivar: _senderToken


-(BOOL)wantsResponse;
-(NSInteger)command;
-(NSInteger)responseCommand;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCertifiedDeliveryContext:(id)arg0 ;
-(id)messageBody;
-(id)requiredKeys;


@end


#endif