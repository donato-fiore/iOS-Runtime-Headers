// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVARIABLEFRAMERATESELECTOR_H
#define BWVARIABLEFRAMERATESELECTOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BWInferenceResult.h"

@interface BWVariableFrameRateSelector : NSObject {
    float _suggestedFrameRate;
    int _mode;
    float _integrationTimeFrom60To30;
    float _integrationTimeFrom30To24;
    float _integrationTimeFrom30BackTo60;
    NSMutableDictionary *_vfrAEMaxGainsByPortType;
    NSMutableDictionary *_variableFrameRateInfo;
    ? _lastPTSForVariableFrameRateInfo;
    os_unfair_lock_s _variableFrameRateInfoLock;
    int _frameRateConversionStatus;
    BOOL _lastStabilityFlag;
    BOOL _deviceMotionEnabled;
    BOOL _sceneMotionEnabled;
    BOOL _zoomInProgress;
    BWSmartCameraScene _sceneMotionAEInLowLight;
    BWSmartCameraScene _sceneMotionAEInHighLight;
    BWSmartCameraScene _deviceMotionInLowLight;
    BWSmartCameraScene _deviceMotionInHighLight;
    BWSmartCameraScene _aeLimits;
    BWSmartCameraScene _zoomRequest;
    BWSmartCameraScene _flickerDetected;
    BWSmartCameraScene _waterSceneDetected;
    float _previousEITForAELimitsReached;
    int _globalMotionAE;
    NSMutableDictionary *_highLightSceneMotionThresholdsByPortType;
    NSMutableDictionary *_lowLightSceneMotionThresholdsByPortType;
    ? _lastQuaternion;
    ? _lastQuaternionDiff;
    BOOL _testRun;
    BOOL _frameRateConversionInVISNodeEnabled;
    BWInferenceResult *_mostRecentInferenceResult;
    os_unfair_lock_s _smartCameraLock;
    ? _state;
}


@property (readonly, nonatomic) float suggestedFrameRate;


+(void)initialize;
-(float)getAEMaxGainForPortType:(id)arg0 suggestedFrameRate:(CGFloat)arg1 ;
-(id)initWithPortTypes:(id)arg0 forParameters:(id)arg1 ;
-(void)dealloc;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 frameStatistics:(id)arg1 currentFrameRate:(float)arg2 aeMaxGain:(float)arg3 zoomInProgress:(BOOL)arg4 mostRecentInferenceResult:(id)arg5 ;


@end


#endif