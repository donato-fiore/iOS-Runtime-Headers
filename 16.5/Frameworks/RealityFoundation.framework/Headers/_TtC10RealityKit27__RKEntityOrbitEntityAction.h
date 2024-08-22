// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10REALITYKIT27__RKENTITYORBITENTITYACTION_H
#define _TTC10REALITYKIT27__RKENTITYORBITENTITYACTION_H

@class RKEntityAction;



@interface _TtC10RealityKit27__RKEntityOrbitEntityAction : RKEntityAction {
    ? pivotEntity;
    ? duration;
    ? rotations;
    ? orbitalAxis;
    ? orientToPath;
    ? spinDirection;
    ? respectPhysics;
    ? physicsAngularCoefficient;
    ? physicsLinearCoefficient;
    ? updateSubscription;
    ? finishedSubscription;
    ? terminatedSubscription;
    ? currentAnimation;
    ? targetEntityParent;
    ? ghostPivotEntity;
    ? originalPose;
    ? baseInitialized;
    ? looping;
}




-(id)copyWithZone:(*void)arg0 ;


@end


#endif