// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGFACESELECTIONSTATE_H
#define VGFACESELECTIONSTATE_H

@class NSDictionary, NSArray;


#import "VGSelectionState.h"
#import "VGCapturedPose.h"

@interface VGFaceSelectionState : VGSelectionState

@property (retain, nonatomic) VGCapturedPose *capturedFrontPose; // ivar: _capturedFrontPose
@property (readonly, nonatomic) NSDictionary *expressionCaptured;
@property (retain, nonatomic) NSDictionary *expressionCapturedPoses; // ivar: _expressionCapturedPoses
@property (retain, nonatomic) NSArray *hairPoses; // ivar: _hairPoses
@property (nonatomic) float pitchAngle; // ivar: _pitchAngle
@property (readonly, nonatomic) NSDictionary *pitchAngleCaptured;
@property (retain, nonatomic) NSDictionary *pitchAngleCapturedPoses; // ivar: _pitchAngleCapturedPoses
@property (readonly, nonatomic) NSDictionary *posesForHairCaptured;
@property (retain, nonatomic) NSDictionary *posesForHairCapturedPoses; // ivar: _posesForHairCapturedPoses
@property (retain, nonatomic) NSArray *tronPoses; // ivar: _tronPoses
@property (nonatomic) float yawAngle; // ivar: _yawAngle
@property (readonly, nonatomic) NSDictionary *yawAngleCaptured;
@property (retain, nonatomic) NSDictionary *yawAngleCapturedPoses; // ivar: _yawAngleCapturedPoses


-(id)description;


@end


#endif