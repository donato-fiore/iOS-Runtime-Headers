// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10REALITYKIT23__RKENTITYANIMATEACTION_H
#define _TTC10REALITYKIT23__RKENTITYANIMATEACTION_H

@class RKEntityAction;



@interface _TtC10RealityKit23__RKEntityAnimateAction : RKEntityAction {
    ? loopCount;
    ? clipStart;
    ? clipDuration;
    ? loopBehavior;
    ? clipReversed;
    ? animationSpeed;
    ? wasHidden;
    ? muteAudio;
    ? audioGain;
    ? targetAnimationEntity;
    ? currentAnimation;
    ? finishedSubscription;
    ? terminatedSubscription;
}




-(id)copyWithZone:(*void)arg0 ;


@end


#endif