// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEAFIBBURDENVALUE_H
#define HKCODABLEAFIBBURDENVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableDayIndexRange.h"
#import "HKCodableQuantity.h"

@interface HKCodableAFibBurdenValue : PBCodable <NSCopying>

 {
    APPLE_115 _has;
}


@property (retain, nonatomic) HKCodableDayIndexRange *dayIndexRange; // ivar: _dayIndexRange
@property (readonly, nonatomic) BOOL hasDayIndexRange;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) BOOL hasValueClamped;
@property (retain, nonatomic) HKCodableQuantity *value; // ivar: _value
@property (nonatomic) BOOL valueClamped; // ivar: _valueClamped


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