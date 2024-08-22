// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMISPARSEOPTICALFLOWMOTIONDETECTION_H
#define HMISPARSEOPTICALFLOWMOTIONDETECTION_H

@class NSArray;


#import "HMIMotionDetection.h"

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection

@property (readonly) NSUInteger motionMode; // ivar: _motionMode
@property (readonly) float motionScore; // ivar: _motionScore
@property (readonly) NSArray *motionVectors; // ivar: _motionVectors
@property (readonly) CGSize size; // ivar: _size


+(id)firstMotionDetectionInArray:(id)arg0 withMode:(NSUInteger)arg1 ;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect )arg0 forMetric:(NSInteger)arg1 eventClass:(Class)arg2 confidence:(float)arg3 ;
-(float)scoreForSubBoundingBox:(struct CGRect )arg0 forMetric:(NSInteger)arg1 eventClass:(Class)arg2 confidence:(float)arg3 ;
-(id)classMotionScoreMap;
-(id)classPaddingMap;
-(id)initWithBoundingBox:(struct CGRect )arg0 size:(struct CGSize )arg1 motionVectors:(id)arg2 motionScore:(float)arg3 motionMode:(NSUInteger)arg4 ;


@end


#endif