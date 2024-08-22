// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAMENSTRUALALGORITHMSPREDICTION_H
#define HAMENSTRUALALGORITHMSPREDICTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsPrediction : NSObject

@property (retain, nonatomic) NSArray *convolvedProbability; // ivar: _convolvedProbability
@property (nonatomic) CGFloat convolvedProbabilityMean; // ivar: _convolvedProbabilityMean
@property (nonatomic) CGFloat convolvedProbabilityStdDev; // ivar: _convolvedProbabilityStdDev
@property (nonatomic) NSInteger daysOffsetFromCalendarMethod; // ivar: _daysOffsetFromCalendarMethod
@property (retain, nonatomic) NSArray *endProbability; // ivar: _endProbability
@property (nonatomic) CGFloat endProbabilityMean; // ivar: _endProbabilityMean
@property (nonatomic) CGFloat endProbabilityStdDev; // ivar: _endProbabilityStdDev
@property (nonatomic) BOOL isOngoingMenstruation; // ivar: _isOngoingMenstruation
@property (nonatomic) unsigned int julianDayOfWindowStart; // ivar: _julianDayOfWindowStart
@property (nonatomic) _NSRange lowRange; // ivar: _lowRange
@property (retain, nonatomic) NSArray *startProbability; // ivar: _startProbability
@property (nonatomic) CGFloat startProbabilityMean; // ivar: _startProbabilityMean
@property (nonatomic) CGFloat startProbabilityStdDev; // ivar: _startProbabilityStdDev
@property (nonatomic) unsigned char whichSubsystemsRan; // ivar: _whichSubsystemsRan




@end


#endif