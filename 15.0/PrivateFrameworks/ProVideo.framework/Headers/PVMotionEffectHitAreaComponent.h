// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVMOTIONEFFECTHITAREACOMPONENT_H
#define PVMOTIONEFFECTHITAREACOMPONENT_H

@protocol PVEffectHitArea;


#import "PVMotionEffectComponent.h"

@interface PVMotionEffectHitAreaComponent : PVMotionEffectComponent <PVEffectHitArea>





+(id)motionEffectPropertyKeyToPublishedParameterNameMap;
-(id)hitAreaPointsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 viewSize:(struct CGSize )arg4 viewOrigin:(int)arg5 ;


@end


#endif