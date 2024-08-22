// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAMENSTRUALALGORITHMSDAYINPUT_H
#define HAMENSTRUALALGORITHMSDAYINPUT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "HAMenstrualAlgorithmsHeartRateStatistics.h"

@interface HAMenstrualAlgorithmsDayInput : NSObject

@property (nonatomic) unsigned char cervicalMucusQuality; // ivar: _cervicalMucusQuality
@property (nonatomic) unsigned char flow; // ivar: _flow
@property (retain, nonatomic) NSNumber *flowUpdatedJulianDay; // ivar: _flowUpdatedJulianDay
@property (nonatomic) unsigned int julianDay; // ivar: _julianDay
@property (nonatomic) unsigned char ovulationTestResult; // ivar: _ovulationTestResult
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sedentaryHeartRateStatistics; // ivar: _sedentaryHeartRateStatistics
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sleepHeartRateStatistics; // ivar: _sleepHeartRateStatistics
@property (nonatomic) BOOL spotting; // ivar: _spotting




@end


#endif