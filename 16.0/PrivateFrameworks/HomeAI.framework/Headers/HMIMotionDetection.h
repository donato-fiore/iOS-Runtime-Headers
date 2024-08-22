// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIMOTIONDETECTION_H
#define HMIMOTIONDETECTION_H

@class HMFObject, NSArray;



@interface HMIMotionDetection : HMFObject

@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) NSUInteger motionMode; // ivar: _motionMode
@property (readonly) float motionScore; // ivar: _motionScore
@property (readonly) NSArray *motionVectors; // ivar: _motionVectors
@property (readonly) CGSize size; // ivar: _size


+(id)firstMotionDetectionInArray:(id)arg0 withMode:(NSUInteger)arg1 ;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect )arg0 eventClass:(Class)arg1 confidence:(float)arg2 ;
-(float)scoreForSubBoundingBox:(struct CGRect )arg0 eventClass:(Class)arg1 confidence:(float)arg2 ;
-(id)classMotionScoreMap;
-(id)classPaddingMap;
-(id)initWithBoundingBox:(struct CGRect )arg0 size:(struct CGSize )arg1 motionVectors:(id)arg2 motionScore:(float)arg3 motionMode:(NSUInteger)arg4 ;


@end


#endif