// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAMENSTRUALALGORITHMSDAYSTREAMPROCESSORCONFIG_H
#define HAMENSTRUALALGORITHMSDAYSTREAMPROCESSORCONFIG_H

@class NSDateComponents, NSNumber;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject

@property (retain, nonatomic) NSDateComponents *birthDateComponents; // ivar: _birthDateComponents
@property (nonatomic) float fertilityEndCoefficient; // ivar: _fertilityEndCoefficient
@property (nonatomic) float fertilityStartCoefficient; // ivar: _fertilityStartCoefficient
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedCycleLength; // ivar: _julianDayOfUserReportedCycleLength
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedMenstruationLength; // ivar: _julianDayOfUserReportedMenstruationLength
@property (nonatomic) float menstruationEndCoefficient; // ivar: _menstruationEndCoefficient
@property (nonatomic) float menstruationStartCoefficient; // ivar: _menstruationStartCoefficient
@property (nonatomic) float projectionOffCoefficient; // ivar: _projectionOffCoefficient
@property (nonatomic) unsigned int todayAsJulianDay; // ivar: _todayAsJulianDay
@property (retain, nonatomic) NSNumber *userReportedCycleLength; // ivar: _userReportedCycleLength
@property (retain, nonatomic) NSNumber *userReportedMenstruationLength; // ivar: _userReportedMenstruationLength




@end


#endif