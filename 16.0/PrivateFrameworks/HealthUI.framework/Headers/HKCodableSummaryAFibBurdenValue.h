// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLESUMMARYAFIBBURDENVALUE_H
#define HKCODABLESUMMARYAFIBBURDENVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableAFibBurdenValue.h"
#import "HKCodableDayIndexRange.h"

@interface HKCodableSummaryAFibBurdenValue : PBCodable <NSCopying>



@property (retain, nonatomic) HKCodableAFibBurdenValue *burdenValue; // ivar: _burdenValue
@property (readonly, nonatomic) BOOL hasBurdenValue;
@property (readonly, nonatomic) BOOL hasLastAnalysisDayIndexRange;
@property (retain, nonatomic) HKCodableDayIndexRange *lastAnalysisDayIndexRange; // ivar: _lastAnalysisDayIndexRange


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