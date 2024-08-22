// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMETADATADETECTORGATINGOUTPUTCONTROLLER_H
#define BWMETADATADETECTORGATINGOUTPUTCONTROLLER_H

@class NSString, NSArray;
@protocol BWMetadataDetectedResultsObserver, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BWSceneStabilityMonitor.h"
#import "FigCaptureLogSmartCameraGating.h"
#import "BWNodeOutput.h"

@interface BWMetadataDetectorGatingOutputController : NSObject <BWMetadataDetectedResultsObserver>

 {
    NSString *_name;
    ? _currentPTS;
    NSArray *_detectionFrameRateRamp;
    char _detectionFrameRateRampStartIndex;
    BWSceneStabilityMonitor *_sceneStabilityMonitor;
    BOOL _firstBufferAfterSceneChangeHasCodes;
    NSObject<OS_dispatch_group> *_detectorAvailableGroup;
    BOOL _emittedFirstBufferAfterSceneChange;
    BOOL _isSmartCameraSceneConfident;
    ? _detectedCodesLastSeenPTS;
    char _detectionFrameRateRampIndex;
    BOOL _forceSynchronizedControllersToRunDetectionImmediately;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceSynchronizedControllersToRunDetectionImmediately;
@property (readonly, nonatomic, getter=isHandlingFirstBufferAfterSceneChange) BOOL handlingFirstBufferAfterSceneChange; // ivar: _isHandlingFirstBufferAfterSceneChange
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastDetectedCodesCount; // ivar: _lastDetectedCodesCount
@property (nonatomic) ? lastDetectionPTS; // ivar: _lastDetectionPTS
@property (retain, nonatomic) FigCaptureLogSmartCameraGating *logger; // ivar: _logger
@property (nonatomic) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (readonly, nonatomic) BWNodeOutput *nodeOutput; // ivar: _nodeOutput
@property (readonly, nonatomic) BOOL sceneLikelyToHaveCodes; // ivar: _sceneLikelyToHaveCodes
@property (nonatomic) BOOL sceneMotionEstimatesSupported; // ivar: _sceneMotionEstimatesSupported
@property (readonly, nonatomic) BOOL shouldApplySceneMotion; // ivar: _shouldApplySceneMotion
@property (readonly, nonatomic) BOOL shouldEmitBuffer;
@property (nonatomic) BOOL shouldEmitFirstBufferAfterSceneChange; // ivar: _shouldEmitFirstBufferAfterSceneChange
@property (readonly, nonatomic) BOOL shouldRunDetection; // ivar: _shouldRunDetection
@property (nonatomic, getter=isSmartCameraSceneConfident) BOOL smartCameraSceneConfident;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronizeWithOtherControllers; // ivar: _synchronizeWithOtherControllers
@property (nonatomic) BOOL usesSceneClassifierToGateDetection; // ivar: _usesSceneClassifierToGateDetection


-(id)initWithOutput:(id)arg0 name:(id)arg1 sceneStabilityMonitor:(id)arg2 detectorAvailableGroup:(id)arg3 ;
-(void)dealloc;
-(void)emitPixelBuffer:(struct __CVBuffer *)arg0 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 appliedPrimaryCaptureRect:(BOOL)arg2 ;
-(void)enableDetectionFrameRateControllingWithRamp:(id)arg0 startIndex:(char)arg1 ;
-(void)node:(id)arg0 didEmitCodesCount:(NSInteger)arg1 emittedIdentifiers:(id)arg2 originalPTS:(struct ? )arg3 ;
-(void)prepareToEmitBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif