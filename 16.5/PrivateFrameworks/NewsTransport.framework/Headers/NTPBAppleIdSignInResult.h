// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBAPPLEIDSIGNINRESULT_H
#define NTPBAPPLEIDSIGNINRESULT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBAppleIdSignInResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) BOOL hasSignInResult;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (nonatomic) int signInResult; // ivar: _signInResult
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId; // ivar: _subscriptionPurchaseSessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif