// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSDAYSTREAMPROCESSORCONFIG_H
#define HAMENSTRUALALGORITHMSDAYSTREAMPROCESSORCONFIG_H

@class NSDateComponents, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HAMenstrualAlgorithmsDeviationInput.h"

@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDateComponents *birthDateComponents; // ivar: _birthDateComponents
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviationInput *deviationInput; // ivar: _deviationInput
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedCycleLength; // ivar: _julianDayOfUserReportedCycleLength
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedMenstruationLength; // ivar: _julianDayOfUserReportedMenstruationLength
@property (nonatomic) unsigned int todayAsJulianDay; // ivar: _todayAsJulianDay
@property (retain, nonatomic) NSNumber *userReportedCycleLength; // ivar: _userReportedCycleLength
@property (retain, nonatomic) NSNumber *userReportedMenstruationLength; // ivar: _userReportedMenstruationLength


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif