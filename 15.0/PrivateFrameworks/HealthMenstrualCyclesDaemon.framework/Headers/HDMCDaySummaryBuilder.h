// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMCDAYSUMMARYBUILDER_H
#define HDMCDAYSUMMARYBUILDER_H

@class HKCalendarCache, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HDMCDaySummaryBuilder : NSObject {
    HKCalendarCache *_calendarCache;
    NSMutableArray *_menstrualFlowSamples;
    NSMutableArray *_intermenstrualBleedingSamples;
    NSMutableArray *_symptomsSamples;
    NSMutableArray *_sexualActivitySamples;
    NSMutableArray *_ovulationTestResultSamples;
    NSMutableArray *_pregnancyTestResultSamples;
    NSMutableArray *_progesteroneTestResultSamples;
    NSMutableArray *_cervicalMucusQualitySamples;
    NSMutableArray *_basalBodyTemperatureSamples;
    NSMutableArray *_startedCycleFactors;
    NSMutableArray *_endedCycleFactors;
    NSMutableDictionary *_sampleCountByType;
}


@property (readonly, nonatomic) NSInteger dayIndex; // ivar: _dayIndex


-(BOOL)_intermenstrualBleeding;
-(NSInteger)_cervicalMucusQuality;
-(NSInteger)_menstrualFlowWithModificationDay:(*NSInteger)arg0 startOfCycleFromCycleTracking:(*id)arg1 ;
-(NSInteger)_ovulationTestResult;
-(NSInteger)_pregnancyTestResult;
-(NSInteger)_progesteroneTestResult;
-(NSInteger)_sexualActivity;
-(NSUInteger)_symptoms;
-(id)_basalBodyTemperature;
-(id)_endedCycleFactors;
-(id)_startedCycleFactors;
-(id)createDaySummaryWithDevice:(id)arg0 ;
-(id)initWithDayIndex:(NSInteger)arg0 calendarCache:(id)arg1 ;
-(void)addCycleTrackingSample:(id)arg0 ;


@end


#endif