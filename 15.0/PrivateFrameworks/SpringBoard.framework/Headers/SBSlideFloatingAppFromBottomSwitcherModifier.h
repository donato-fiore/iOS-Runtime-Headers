// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSLIDEFLOATINGAPPFROMBOTTOMSWITCHERMODIFIER_H
#define SBSLIDEFLOATINGAPPFROMBOTTOMSWITCHERMODIFIER_H

@class NSString;
@protocol BSDescriptionProviding;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSlideFloatingAppFromBottomSwitcherModifier : SBTransitionSwitcherModifier <BSDescriptionProviding>

 {
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromFloatingAppLayout:(id)arg1 toFloatingAppLayout:(id)arg2 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif