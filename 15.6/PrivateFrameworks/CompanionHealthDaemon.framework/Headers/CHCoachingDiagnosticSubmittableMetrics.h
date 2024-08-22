// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCOACHINGDIAGNOSTICSUBMITTABLEMETRICS_H
#define CHCOACHINGDIAGNOSTICSUBMITTABLEMETRICS_H

@class HKActivitySummary, NSNumber, NSDateComponents, NSArray, HKQuantitySample, NSDate;

#import <Foundation/Foundation.h>


@interface CHCoachingDiagnosticSubmittableMetrics : NSObject

@property (retain, nonatomic) HKActivitySummary *activitySummary; // ivar: _activitySummary
@property (retain, nonatomic) NSNumber *biologicalSex; // ivar: _biologicalSex
@property (retain, nonatomic) NSDateComponents *dateOfBirth; // ivar: _dateOfBirth
@property (readonly, nonatomic) NSArray *diagnosticData; // ivar: _diagnosticData
@property (retain, nonatomic) HKQuantitySample *heightSample; // ivar: _heightSample
@property (retain, nonatomic) NSDate *startOfDay; // ivar: _startOfDay
@property (retain, nonatomic) HKQuantitySample *weightSample; // ivar: _weightSample


-(id)init;
-(void)addDiagnosticDataObject:(id)arg0 ;


@end


#endif