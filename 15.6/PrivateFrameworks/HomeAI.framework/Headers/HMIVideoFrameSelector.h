// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMESELECTOR_H
#define HMIVIDEOFRAMESELECTOR_H

@class NSMutableArray, NSString;
@protocol HMFLogging, HMIVideoFrameSelectorDelegate, HMIMotionDetector;


#import "HMIVideoAnalyzerProcessingNode.h"

@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging>

 {
    NSMutableArray *_candidates;
    BOOL _enabled;
    ? _referenceInterval;
    ? _targetInterval;
    ? _expirationInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoFrameSelectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMIMotionDetector> *detector; // ivar: _detector
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) NSUInteger maxCandidates; // ivar: _maxCandidates
@property NSUInteger maxReferences; // ivar: _maxReferences
@property (readonly) *__CFArray references; // ivar: _references
@property BOOL resetReferences; // ivar: _resetReferences
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithConfiguration:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)prepareFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_drainCandidatesThatExpiredBefore:(struct ? )arg0 ;
-(void)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 reference:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setSampleRate:(CGFloat)arg0 ;


@end


#endif