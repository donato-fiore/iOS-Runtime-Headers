// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEMENSTRUALCYCLESPROJECTION_H
#define HKCODABLEMENSTRUALCYCLESPROJECTION_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableDayIndexRange.h"

@interface HKCodableMenstrualCyclesProjection : PBCodable <NSCopying>

 {
    APPLE_180 _has;
}


@property (retain, nonatomic) HKCodableDayIndexRange *allDays; // ivar: _allDays
@property (nonatomic) NSInteger daysOffsetFromCalendarMethod; // ivar: _daysOffsetFromCalendarMethod
@property (nonatomic) CGFloat endMean; // ivar: _endMean
@property (nonatomic) CGFloat endStandardDeviation; // ivar: _endStandardDeviation
@property (readonly, nonatomic) BOOL hasAllDays;
@property (nonatomic) BOOL hasDaysOffsetFromCalendarMethod;
@property (nonatomic) BOOL hasEndMean;
@property (nonatomic) BOOL hasEndStandardDeviation;
@property (nonatomic) BOOL hasIsPartiallyLogged;
@property (nonatomic) BOOL hasPredictionPrimarySource;
@property (nonatomic) BOOL hasStartMean;
@property (nonatomic) BOOL hasStartStandardDeviation;
@property (nonatomic) BOOL isPartiallyLogged; // ivar: _isPartiallyLogged
@property (nonatomic) NSInteger predictionPrimarySource; // ivar: _predictionPrimarySource
@property (nonatomic) CGFloat startMean; // ivar: _startMean
@property (nonatomic) CGFloat startStandardDeviation; // ivar: _startStandardDeviation


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