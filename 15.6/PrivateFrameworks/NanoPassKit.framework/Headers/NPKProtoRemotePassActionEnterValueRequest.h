// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOREMOTEPASSACTIONENTERVALUEREQUEST_H
#define NPKPROTOREMOTEPASSACTIONENTERVALUEREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *balanceIdentifier; // ivar: _balanceIdentifier
@property (retain, nonatomic) NSString *balanceLabel; // ivar: _balanceLabel
@property (nonatomic) NSInteger currentBalanceAmount; // ivar: _currentBalanceAmount
@property (retain, nonatomic) NSString *currentBalanceCurrency; // ivar: _currentBalanceCurrency
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (retain, nonatomic) NSData *paymentPassActionData; // ivar: _paymentPassActionData
@property (retain, nonatomic) NSString *requestUniqueID; // ivar: _requestUniqueID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif