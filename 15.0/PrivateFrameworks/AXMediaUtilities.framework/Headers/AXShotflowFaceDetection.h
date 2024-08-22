// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSHOTFLOWFACEDETECTION_H
#define AXSHOTFLOWFACEDETECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXShotflowFaceDetection : NSObject {
    float _area;
}


@property (nonatomic) CGRect box; // ivar: _box
@property (readonly, nonatomic) CGPoint boxCenter;
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) CGRect defaultBox; // ivar: _defaultBox
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (nonatomic) BOOL hasLabel; // ivar: _hasLabel
@property (nonatomic) BOOL hasPose; // ivar: _hasPose
@property (nonatomic) int label; // ivar: _label
@property (retain, nonatomic) NSString *labelName; // ivar: _labelName
@property (nonatomic) int mergesCount; // ivar: _mergesCount
@property (nonatomic) float rotationAngle; // ivar: _rotationAngle
@property (nonatomic) int scale; // ivar: _scale
@property (readonly, nonatomic) float smartDistance;
@property (nonatomic) float yawAngle; // ivar: _yawAngle


-(BOOL)isOverlappingLowMergeDet:(id)arg0 withOverlapThreshold:(float)arg1 withMergeCountDelta:(int)arg2 ;
-(BOOL)isOverlappingSmallFace:(id)arg0 withOverlapThreshold:(float)arg1 withSizeRatio:(float)arg2 ;
-(float)iOa:(id)arg0 ;
-(float)overlap:(id)arg0 ;
-(id)description;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 hasPose:(BOOL)arg6 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 hasPose:(BOOL)arg6 hasLabel:(BOOL)arg7 label:(int)arg8 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 hasPose:(BOOL)arg6 hasLabel:(BOOL)arg7 label:(int)arg8 labelName:(id)arg9 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 mergesCount:(int)arg6 hasPose:(BOOL)arg7 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 mergesCount:(int)arg6 hasPose:(BOOL)arg7 hasLabel:(BOOL)arg8 label:(int)arg9 ;
-(id)initWithBox:(struct CGRect )arg0 defaultBox:(struct CGRect )arg1 confidence:(float)arg2 scale:(int)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 mergesCount:(int)arg6 hasPose:(BOOL)arg7 hasLabel:(BOOL)arg8 label:(int)arg9 labelName:(id)arg10 ;


@end


#endif