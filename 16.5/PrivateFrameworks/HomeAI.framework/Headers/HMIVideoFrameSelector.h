// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOFRAMESELECTOR_H
#define HMIVIDEOFRAMESELECTOR_H

@class NSString;
@protocol HMFLogging, HMIVideoFrameSelectorDelegate;


#import "HMIVideoAnalyzerProcessingNode.h"

@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoFrameSelectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property NSUInteger maxReferences; // ivar: _maxReferences
@property ? referenceInterval; // ivar: _referenceInterval
@property (readonly) *__CFArray references; // ivar: _references
@property BOOL resetReferences; // ivar: _resetReferences
@property (readonly) Class superclass;
@property (readonly) ? targetInterval; // ivar: _targetInterval


+(id)logCategory;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)setSampleRate:(CGFloat)arg0 ;


@end


#endif