// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHOTFLOWDETECTION_H
#define SHOTFLOWDETECTION_H


#import <Foundation/Foundation.h>


@interface ShotflowDetection : NSObject {
    float _area;
}


@property (nonatomic) CGRect box; // ivar: _box
@property (readonly, nonatomic) CGPoint boxCenter;
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) CGRect defaultBox; // ivar: _defaultBox
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (nonatomic) BOOL hasLabel; // ivar: _hasLabel
@property (nonatomic) int label; // ivar: _label
@property (nonatomic) int mergesCount; // ivar: _mergesCount
@property (nonatomic) float pitchAngle; // ivar: _pitchAngle
@property (nonatomic) float rotationAngle; // ivar: _rotationAngle
@property (nonatomic) int scale; // ivar: _scale
@property (readonly, nonatomic) float smartDistance;
@property (nonatomic) float yawAngle; // ivar: _yawAngle


-(BOOL)isOverlappingLowMergeDet:(id)arg0 withOverlapThreshold:(float)arg1 withMergeCountDelta:(int)arg2 ;
-(BOOL)isOverlappingSmallFace:(id)arg0 withOverlapThreshold:(float)arg1 withSizeRatio:(float)arg2 ;
-(float)intersectionOverArea:(id)arg0 ;
-(float)intersectionOverMinArea:(id)arg0 ;
-(float)overlap:(id)arg0 ;
-(id)description;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 hasLabel:(BOOL)arg6 label:(int)arg7 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 mergesCount:(int)arg6 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 mergesCount:(int)arg6 hasLabel:(BOOL)arg7 label:(int)arg8 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 pitchAngle:(float)arg6 hasLabel:(BOOL)arg7 label:(int)arg8 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 pitchAngle:(float)arg6 mergesCount:(int)arg7 hasLabel:(BOOL)arg8 label:(int)arg9 ;


@end


#endif