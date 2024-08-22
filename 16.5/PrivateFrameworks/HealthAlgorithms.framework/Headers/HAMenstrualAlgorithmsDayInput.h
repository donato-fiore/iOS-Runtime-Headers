// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSDAYINPUT_H
#define HAMENSTRUALALGORITHMSDAYINPUT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HAMenstrualAlgorithmsHeartRateStatistics.h"
#import "HAMenstrualAlgorithmsWristTemperature.h"

@interface HAMenstrualAlgorithmsDayInput : NSObject <NSSecureCoding>



@property (nonatomic) unsigned char flow; // ivar: _flow
@property (nonatomic) unsigned int julianDay; // ivar: _julianDay
@property (nonatomic) unsigned char ovulationTestResult; // ivar: _ovulationTestResult
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sedentaryHeartRateStatistics; // ivar: _sedentaryHeartRateStatistics
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sleepHeartRateStatistics; // ivar: _sleepHeartRateStatistics
@property (nonatomic) BOOL spotting; // ivar: _spotting
@property (retain, nonatomic) HAMenstrualAlgorithmsWristTemperature *wristTemperature; // ivar: _wristTemperature


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif