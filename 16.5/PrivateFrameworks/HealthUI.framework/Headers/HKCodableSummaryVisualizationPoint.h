// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYVISUALIZATIONPOINT_H
#define HKCODABLESUMMARYVISUALIZATIONPOINT_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableDateInterval.h"
#import "HKCodableQuantity.h"

@interface HKCodableSummaryVisualizationPoint : PBCodable <NSCopying>



@property (retain, nonatomic) HKCodableDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) BOOL hasDateInterval;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasValue2;
@property (retain, nonatomic) HKCodableQuantity *value; // ivar: _value
@property (retain, nonatomic) HKCodableQuantity *value2; // ivar: _value2


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