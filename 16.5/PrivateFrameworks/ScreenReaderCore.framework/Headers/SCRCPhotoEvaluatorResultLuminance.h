// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCPHOTOEVALUATORRESULTLUMINANCE_H
#define SCRCPHOTOEVALUATORRESULTLUMINANCE_H



#import "SCRCPhotoEvaluatorResult.h"

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) CGFloat averageLevel; // ivar: _averageLevel
@property (readonly, nonatomic) CGFloat brightnessLevel; // ivar: _brightnessLevel
@property (readonly, nonatomic) CGFloat darknessLevel; // ivar: _darknessLevel


-(id)humanReadableResult;
-(id)initWithDarknessLevel:(CGFloat)arg0 brightnessLevel:(CGFloat)arg1 averageLevel:(CGFloat)arg2 ;


@end


#endif