// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTEYESKINNINGDESCRIPTOR_H
#define AVTEYESKINNINGDESCRIPTOR_H

@class SCNNode;

#import <Foundation/Foundation.h>


@interface AVTEyeSkinningDescriptor : NSObject {
    SCNNode *_readMorpherNode;
    SCNNode *_leftEyeJoint;
    SCNNode *_rightEyeJoint;
    NSInteger _leftEyeLookDownTargetIndex;
    NSInteger _leftEyeLookInTargetIndex;
    NSInteger _leftEyeLookOutTargetIndex;
    NSInteger _leftEyeLookUpTargetIndex;
    NSInteger _rightEyeLookDownTargetIndex;
    NSInteger _rightEyeLookInTargetIndex;
    NSInteger _rightEyeLookOutTargetIndex;
    NSInteger _rightEyeLookUpTargetIndex;
}






@end


#endif