// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPULSETRANSITIONSWITCHERMODIFIER_H
#define SBPULSETRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBPulseTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    BOOL _shouldScaleIn;
}




-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 ;
-(id)topMostLayoutElements;
-(id)transitionWillUpdate;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif