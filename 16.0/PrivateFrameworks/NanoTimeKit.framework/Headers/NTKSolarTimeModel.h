// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSOLARTIMEMODEL_H
#define NTKSOLARTIMEMODEL_H

@class NSDate, CLLocation;

#import <Foundation/Foundation.h>


@interface NTKSolarTimeModel : NSObject

@property (nonatomic) BOOL dependentValuesNeedUpdate; // ivar: _dependentValuesNeedUpdate
@property (nonatomic) CGFloat effectiveSolarDayLength; // ivar: _effectiveSolarDayLength
@property (retain, nonatomic) NSDate *endDateForReferenceDate; // ivar: _endDateForReferenceDate
@property (retain, nonatomic) NSDate *localDawnDate; // ivar: _localDawnDate
@property (retain, nonatomic) NSDate *localDuskDate; // ivar: _localDuskDate
@property (retain, nonatomic) NSDate *localSolarMidnightDate; // ivar: _localSolarMidnightDate
@property (retain, nonatomic) NSDate *localSolarNoonDate; // ivar: _localSolarNoonDate
@property (retain, nonatomic) NSDate *localSunriseDate; // ivar: _localSunriseDate
@property (retain, nonatomic) NSDate *localSunsetDate; // ivar: _localSunsetDate
@property (retain, nonatomic) NSDate *referenceDate; // ivar: _referenceDate
@property (retain, nonatomic) CLLocation *referenceLocation; // ivar: _referenceLocation
@property (retain, nonatomic) NSDate *startDateForReferenceDate; // ivar: _startDateForReferenceDate
@property (nonatomic) BOOL usePlaceholderData; // ivar: _usePlaceholderData


-(BOOL)includesDate:(id)arg0 ;
-(CGFloat)percentageThroughPeriodForDate:(id)arg0 ;
-(CGFloat)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
-(CGFloat)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg0 ;
-(id)_nextEvent:(id)arg0 ofType:(unsigned int)arg1 ;
-(id)dateForPercentageThroughPeriod:(CGFloat)arg0 ;
-(id)init;
-(id)initWithReferenceDate:(id)arg0 referenceLocation:(id)arg1 ;
-(id)normalizeDateIntervalForDate:(id)arg0 ;
-(id)ntkCacheableKey;
-(void)_updateDependentValues;
-(void)updateForTimeZoneChange;
-(void)updateModelWithDate:(id)arg0 ;


@end


#endif