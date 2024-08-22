// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATAFACEOBJECTINTERNAL_H
#define AVMETADATAFACEOBJECTINTERNAL_H


#import <Foundation/Foundation.h>


@interface AVMetadataFaceObjectInternal : NSObject

@property (nonatomic) NSInteger faceID; // ivar: _faceID
@property (nonatomic) BOOL hasLeftEyeBounds; // ivar: _hasLeftEyeBounds
@property (nonatomic) BOOL hasLeftEyeClosedConfidence; // ivar: _hasLeftEyeClosedConfidence
@property (nonatomic) BOOL hasRightEyeBounds; // ivar: _hasRightEyeBounds
@property (nonatomic) BOOL hasRightEyeClosedConfidence; // ivar: _hasRightEyeClosedConfidence
@property (nonatomic) BOOL hasRollAngle; // ivar: _hasRollAngle
@property (nonatomic) BOOL hasSmileConfidence; // ivar: _hasSmileConfidence
@property (nonatomic) BOOL hasYawAngle; // ivar: _hasYawAngle
@property (nonatomic) CGRect leftEyeBounds; // ivar: _leftEyeBounds
@property (nonatomic) int leftEyeClosedConfidence; // ivar: _leftEyeClosedConfidence
@property (nonatomic) CGRect rightEyeBounds; // ivar: _rightEyeBounds
@property (nonatomic) int rightEyeClosedConfidence; // ivar: _rightEyeClosedConfidence
@property (nonatomic) CGFloat rollAngle; // ivar: _rollAngle
@property (nonatomic) int smileConfidence; // ivar: _smileConfidence
@property (nonatomic) CGFloat yawAngle; // ivar: _yawAngle




@end


#endif