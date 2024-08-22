// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPHYSICALIZEDSKELETONDESCRIPTOR_H
#define AVTPHYSICALIZEDSKELETONDESCRIPTOR_H

@class SCNNode, NSArray;

#import <Foundation/Foundation.h>


@interface AVTPhysicalizedSkeletonDescriptor : NSObject {
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNNode *_rootJoint;
    NSArray *_targetNodes;
    NSUInteger _side;
    ? _upDownRotation;
    ? _leftRightRotation;
    ? _forwardBackRotation;
}






@end


#endif