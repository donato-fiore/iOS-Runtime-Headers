// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWIMAGECONTROLMODETRANSITIONMONITOR_H
#define BWIMAGECONTROLMODETRANSITIONMONITOR_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface BWImageControlModeTransitionMonitor : NSObject {
    NSMutableDictionary *_currentSphereModesByPortType;
    NSMutableDictionary *_currentFrameRatesByPortType;
    NSMutableDictionary *_currentLTMCurvesByPortType;
    int _ltmCurvesTransitionFrameWaitCount;
    ? _firstFramePTS;
    int _frameWaitCount;
    BOOL _coarseFocusHasSettled;
}


@property (nonatomic) CGFloat coarseFocusCheckTimeout; // ivar: _coarseFocusCheckTimeout
@property (copy, nonatomic) NSDictionary *expectedLTMCurvesByPortType; // ivar: _expectedLTMCurvesByPortType
@property (copy, nonatomic) NSDictionary *expectedMinimumFrameRatesByPortType; // ivar: _expectedMinimumFrameRatesByPortType
@property (copy, nonatomic) NSDictionary *expectedSphereModesByPortType; // ivar: _expectedSphereModesByPortType
@property (nonatomic) int ltmCurvesTransitionFrameCount; // ivar: _ltmCurvesTransitionFrameCount
@property (nonatomic) BOOL waitForTorchToRampUp; // ivar: _waitForTorchToRampUp


+(void)initialize;
-(BOOL)isTransitionCompleteWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 masterCaptureStreamPortType:(id)arg1 activeSlaveStreamPortType:(id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif