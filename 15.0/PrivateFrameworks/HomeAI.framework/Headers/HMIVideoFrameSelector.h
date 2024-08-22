// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOFRAMESELECTOR_H
#define HMIVIDEOFRAMESELECTOR_H

@class NSMutableArray, NSString;
@protocol HMFLogging, HMIMotionDetector, HMIVideoFrameSelectorDelegate;


#import "HMIVideoAnalyzerProcessingNode.h"

@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging>

 {
    id<HMIMotionDetector> *_detector;
    NSMutableArray *_candidates;
    BOOL _enabled;
    ? _referenceInterval;
    ? _targetInterval;
    ? _expirationInterval;
    *opaqueCMSampleBuffer _reference;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoFrameSelectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger maxCandidates; // ivar: _maxCandidates
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_drainCandidatesThatExpiredBefore:(struct ? )arg0 ;
-(void)_ensureDetectorForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_handleReference:(struct opaqueCMSampleBuffer *)arg0 target:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setSampleRate:(CGFloat)arg0 ;


@end


#endif