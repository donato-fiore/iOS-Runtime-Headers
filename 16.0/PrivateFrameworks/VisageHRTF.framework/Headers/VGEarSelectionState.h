// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGEARSELECTIONSTATE_H
#define VGEARSELECTIONSTATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VGEarSelectionState : NSObject {
    VGEarPose _pose;
}


@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) int detectionError; // ivar: _detectionError
@property (nonatomic) BOOL failed; // ivar: _failed
@property (readonly, nonatomic) NSDictionary *leftEarRollAngleCaptured;
@property (retain, nonatomic) NSDictionary *leftEarRollAngleCapturedPoses; // ivar: _leftEarRollAngleCapturedPoses
@property (readonly, nonatomic) NSDictionary *leftEarYawAngleCaptured;
@property (retain, nonatomic) NSDictionary *leftEarYawAngleCapturedPoses; // ivar: _leftEarYawAngleCapturedPoses
@property ? pose;
@property (nonatomic) float progress; // ivar: _progress
@property (readonly, nonatomic) NSDictionary *rightEarRollAngleCaptured;
@property (retain, nonatomic) NSDictionary *rightEarRollAngleCapturedPoses; // ivar: _rightEarRollAngleCapturedPoses
@property (readonly, nonatomic) NSDictionary *rightEarYawAngleCaptured;
@property (retain, nonatomic) NSDictionary *rightEarYawAngleCapturedPoses; // ivar: _rightEarYawAngleCapturedPoses


+(id)capturedStatesFromCapturedPoses:(id)arg0 ;


@end


#endif