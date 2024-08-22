// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAMENSTRUALALGORITHMSPREDICTION_H
#define HAMENSTRUALALGORITHMSPREDICTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsPrediction : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger daysOffsetFromCalendarMethod; // ivar: _daysOffsetFromCalendarMethod
@property (nonatomic) CGFloat endProbabilityMean; // ivar: _endProbabilityMean
@property (nonatomic) CGFloat endProbabilityStdDev; // ivar: _endProbabilityStdDev
@property (nonatomic) BOOL isOngoingMenstruation; // ivar: _isOngoingMenstruation
@property (nonatomic) unsigned int julianDayOfWindowStart; // ivar: _julianDayOfWindowStart
@property (nonatomic) _NSRange lowRange; // ivar: _lowRange
@property (nonatomic) unsigned char predictionPrimarySource; // ivar: _predictionPrimarySource
@property (nonatomic) CGFloat startProbabilityMean; // ivar: _startProbabilityMean
@property (nonatomic) CGFloat startProbabilityStdDev; // ivar: _startProbabilityStdDev


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif