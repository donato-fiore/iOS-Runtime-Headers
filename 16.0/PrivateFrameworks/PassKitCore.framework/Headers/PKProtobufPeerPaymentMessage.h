// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFPEERPAYMENTMESSAGE_H
#define PKPROTOBUFPEERPAYMENTMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger amount; // ivar: _amount
@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCurrency;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMemo;
@property (readonly, nonatomic) BOOL hasPaymentIdentifier;
@property (readonly, nonatomic) BOOL hasRecipientAddress;
@property (readonly, nonatomic) BOOL hasRequestDeviceScoreIdentifier;
@property (readonly, nonatomic) BOOL hasRequestToken;
@property (readonly, nonatomic) BOOL hasSenderAddress;
@property (readonly, nonatomic) BOOL hasTransactionIdentifier;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *memo; // ivar: _memo
@property (retain, nonatomic) NSString *paymentIdentifier; // ivar: _paymentIdentifier
@property (retain, nonatomic) NSString *recipientAddress; // ivar: _recipientAddress
@property (retain, nonatomic) NSString *requestDeviceScoreIdentifier; // ivar: _requestDeviceScoreIdentifier
@property (retain, nonatomic) NSString *requestToken; // ivar: _requestToken
@property (retain, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (retain, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif