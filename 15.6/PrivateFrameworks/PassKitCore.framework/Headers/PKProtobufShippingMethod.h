// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFSHIPPINGMETHOD_H
#define PKPROTOBUFSHIPPINGMETHOD_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PKProtobufCustomPrecisionAmount.h"

@interface PKProtobufShippingMethod : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger amount; // ivar: _amount
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount; // ivar: _customPrecisionAmount
@property (retain, nonatomic) NSString *detail; // ivar: _detail
@property (nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (readonly, nonatomic) BOOL hasDetail;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int type; // ivar: _type


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