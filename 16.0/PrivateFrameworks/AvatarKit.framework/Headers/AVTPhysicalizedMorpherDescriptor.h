// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPHYSICALIZEDMORPHERDESCRIPTOR_H
#define AVTPHYSICALIZEDMORPHERDESCRIPTOR_H

@class SCNNode, SCNMorpher;

#import <Foundation/Foundation.h>


@interface AVTPhysicalizedMorpherDescriptor : NSObject {
    BOOL _mirrored;
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNMorpher *_writeMorpher;
    NSUInteger _forwardMorphTargetIndex;
    NSUInteger _backwardMorphTargetIndex;
    NSUInteger _leftwardMorphTargetIndex;
    NSUInteger _rightwardMorphTargetIndex;
    NSUInteger _upwardMorphTargetIndex;
    NSUInteger _downwardMorphTargetIndex;
    SCNNode *_extraSimulationFactorReadMorpherNode;
    NSUInteger _extraSimulationFactorTargetIndex;
}






@end


#endif