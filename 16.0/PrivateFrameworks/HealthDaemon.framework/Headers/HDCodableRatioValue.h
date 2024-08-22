// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLERATIOVALUE_H
#define HDCODABLERATIOVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HDCodableCodedQuantity.h"

@interface HDCodableRatioValue : PBCodable <NSCopying>



@property (retain, nonatomic) HDCodableCodedQuantity *denominator; // ivar: _denominator
@property (readonly, nonatomic) BOOL hasDenominator;
@property (readonly, nonatomic) BOOL hasNumerator;
@property (retain, nonatomic) HDCodableCodedQuantity *numerator; // ivar: _numerator


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