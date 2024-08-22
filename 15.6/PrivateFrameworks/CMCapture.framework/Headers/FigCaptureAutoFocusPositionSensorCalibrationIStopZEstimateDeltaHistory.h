// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREAUTOFOCUSPOSITIONSENSORCALIBRATIONISTOPZESTIMATEDELTAHISTORY_H
#define FIGCAPTUREAUTOFOCUSPOSITIONSENSORCALIBRATIONISTOPZESTIMATEDELTAHISTORY_H


#import <Foundation/Foundation.h>


@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject {
    int _previousIStopZEstimateDelta;
    int _currentIStopZEstimateDelta;
}


@property (nonatomic) int currentIStopZEstimateDelta; // ivar: _currentIStopZEstimate
@property (nonatomic) int lastPassingIStopZEstimateDelta; // ivar: _lastPassingIStopZEstimateDelta
@property (nonatomic) int previousIStopZEstimateDelta; // ivar: _previousIStopZEstimate




@end


#endif