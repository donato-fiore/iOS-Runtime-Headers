// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYBLOODPRESSUREVALUE_H
#define HKCODABLESUMMARYBLOODPRESSUREVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableSummaryBloodPressureValue : PBCodable <NSCopying>

 {
    APPLE_158 _has;
}


@property (retain, nonatomic) HKCodableQuantity *diastolicValue; // ivar: _diastolicValue
@property (readonly, nonatomic) BOOL hasDiastolicValue;
@property (readonly, nonatomic) BOOL hasSystolicValue;
@property (nonatomic) BOOL hasTimestampData;
@property (retain, nonatomic) HKCodableQuantity *systolicValue; // ivar: _systolicValue
@property (nonatomic) CGFloat timestampData; // ivar: _timestampData


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