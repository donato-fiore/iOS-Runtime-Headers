// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROTOBUFPAYMENTTOKENCONTEXT_H
#define PKPROTOBUFPAYMENTTOKENCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PKProtobufCustomPrecisionAmount.h"

@interface PKProtobufPaymentTokenContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger amount; // ivar: _amount
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount; // ivar: _customPrecisionAmount
@property (retain, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (readonly, nonatomic) BOOL hasExternalIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantDomain;
@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantName;
@property (retain, nonatomic) NSString *merchantDomain; // ivar: _merchantDomain
@property (retain, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) NSString *merchantName; // ivar: _merchantName


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