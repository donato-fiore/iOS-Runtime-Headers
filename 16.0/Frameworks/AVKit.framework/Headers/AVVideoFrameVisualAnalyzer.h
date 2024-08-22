// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVVIDEOFRAMEVISUALANALYZER_H
#define AVVIDEOFRAMEVISUALANALYZER_H

@class NSTimer, VKCImageAnalysis, VKCImageAnalyzer, AVPlayerLayer;
@protocol AVVideoFrameVisualAnalyzerDelegate;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVPlayerController.h"

@interface AVVideoFrameVisualAnalyzer : NSObject {
    AVObservationController *_playerObservationController;
    int _currentAnalysisRequestID;
    CGFloat _lastCurrentTimeChangeTime;
    NSTimer *_timeObservingTimer;
    ? _lastAnalysisTime;
    VKCImageAnalysis *_lastAnalysis;
}


@property (nonatomic) BOOL actuallyEnabled; // ivar: _actuallyEnabled
@property (weak, nonatomic) NSObject<AVVideoFrameVisualAnalyzerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) VKCImageAnalyzer *imageAnalyzer; // ivar: _imageAnalyzer
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer


-(BOOL)_canPerformAnalysisOnCurrentAsset;
-(BOOL)_canStartAnalysis;
-(NSInteger)_videoFrameOrientation;
-(NSInteger)_vkImageOrientationFromTransform:(struct CGAffineTransform )arg0 ;
-(NSUInteger)_analysisTypes;
-(id)_imageAnalysisQueue;
-(id)initWithPlayerController:(id)arg0 playerLayer:(id)arg1 ;
-(void)_cancelAllVideoFrameAnalysis;
-(void)_handleVideoFrameAnalysis:(id)arg0 error:(id)arg1 ;
-(void)_resetAnalysis;
-(void)_setupTimeObservingTimerIfNeeded;
-(void)_startVideoFrameAnalysis;
-(void)_startVideoFrameAnalysisAfterDelayIfNeeded;
-(void)_updateActualEnabledStateIfNeeded;
-(void)_updateAnalysisIfNeeded;
-(void)_updateObserversIfNeeded;
-(void)dealloc;


@end


#endif