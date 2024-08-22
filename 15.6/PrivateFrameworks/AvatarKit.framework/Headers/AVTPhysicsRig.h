// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTPHYSICSRIG_H
#define AVTPHYSICSRIG_H

@class SCNNode, SCNPhysicsBody, SCNPhysicsConeTwistJoint;

#import <Foundation/Foundation.h>


@interface AVTPhysicsRig : NSObject {
    float _coneConstraintLength;
    float _coneConstraintSinusAngularLimit;
    SCNNode *_rig;
    SCNNode *_chainRoot;
    SCNPhysicsBody *_physicsBody;
    SCNPhysicsConeTwistJoint *_physicsBehavior;
    CGFloat _downForceFactor;
    ? _restPosition_chainRoot;
    ? _restGravityVector_chainRoot;
    ? _coneConstraintBasis_chainParent;
    ? _coneConstraintAnchorB;
}






@end


#endif