// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPCALIBRATION_H
#define UPCALIBRATION_H


#import <Foundation/Foundation.h>


@interface UPCalibration : NSObject



+(id)calibrateCandidate:(id)arg0 withCalibrationScore:(CGFloat)arg1 ;
+(id)calibrateResult:(id)arg0 withCalibrationScore:(CGFloat)arg1 ;
-(id)calibrateParserResults:(id)arg0 withCalibrationScores:(id)arg1 error:(*id)arg2 ;


@end


#endif