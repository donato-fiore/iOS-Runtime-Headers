// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOFRAMETRACKER_H
#define HMIVIDEOFRAMETRACKER_H

@class NSString, NSMutableArray;
@protocol HMFLogging, HMIVideoFrameTrackerDelegate;


#import "HMIVideoAnalyzerProcessingNode.h"
#import "HMIBackgroundEstimator.h"
#import "HMIVideoFrameTrackerFrameCandidate.h"
#import "HMIMotionDetector.h"
#import "HMIHTMLReport.h"

@interface HMIVideoFrameTracker : HMIVideoAnalyzerProcessingNode <HMFLogging>



@property (readonly) ? approximationInterval; // ivar: _approximationInterval
@property *opaqueCMSampleBuffer background; // ivar: _background
@property (retain) HMIBackgroundEstimator *backgroundEstimator; // ivar: _backgroundEstimator
@property (retain) HMIVideoFrameTrackerFrameCandidate *candidate; // ivar: _candidate
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoFrameTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) ? expirationInterval; // ivar: _expirationInterval
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger maxCandidates; // ivar: _maxCandidates
@property (readonly) HMIMotionDetector *motionDetector; // ivar: _motionDetector
@property NSUInteger numCandidates; // ivar: _numCandidates
@property (readonly) HMIHTMLReport *report; // ivar: _report
@property (readonly) NSMutableArray *reportBuffer; // ivar: _reportBuffer
@property (readonly) *__CFArray resizedSampleBuffers; // ivar: _resizedSampleBuffers
@property (readonly) Class superclass;
@property ? trackAnalysisPTS; // ivar: _trackAnalysisPTS
@property (readonly) ? trackInterval; // ivar: _trackInterval


+(id)logCategory;
+(struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)_motionDetectionsFromTarget:(struct opaqueCMSampleBuffer *)arg0 reference:(struct opaqueCMSampleBuffer *)arg1 dynamicConfiguration:(id)arg2 motionScore:(*float)arg3 ;
-(id)_tracksFromTarget:(struct opaqueCMSampleBuffer *)arg0 reference:(struct opaqueCMSampleBuffer *)arg1 background:(struct opaqueCMSampleBuffer *)arg2 dynamicConfiguration:(id)arg3 motionDetections:(id)arg4 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)_backgroundAtTimeStamp:(struct ? )arg0 ;
-(struct opaqueCMSampleBuffer *)prepareSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_addCandidateForTarget:(struct opaqueCMSampleBuffer *)arg0 motionScore:(float)arg1 motionDetections:(id)arg2 tracks:(id)arg3 ;
-(void)_appendTarget:(struct opaqueCMSampleBuffer *)arg0 timeStamp:(struct ? )arg1 motionDetections:(id)arg2 ;
-(void)_drainCandidateThatExpiredBefore:(struct ? )arg0 ;
-(void)_drainResizedBuffersThatExpiredBefore:(struct ? )arg0 ;
-(void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_visualizeFrames:(id)arg0 targetEvents:(id)arg1 backgroundEvents:(id)arg2 regionOfInterest:(struct CGRect )arg3 ;
-(void)_visualizeTargetEvents:(id)arg0 backgroundEvents:(id)arg1 regionOfInterest:(struct CGRect )arg2 targetTimeStamp:(struct ? )arg3 ;
-(void)_visualizeTargetsThatExpiredBefore:(struct ? )arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleFrameAnalyzerResult:(id)arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 reference:(struct opaqueCMSampleBuffer *)arg1 ;


@end


#endif