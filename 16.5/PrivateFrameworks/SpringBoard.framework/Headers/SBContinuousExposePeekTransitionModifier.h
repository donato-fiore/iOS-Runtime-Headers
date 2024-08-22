// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEPEEKTRANSITIONMODIFIER_H
#define SBCONTINUOUSEXPOSEPEEKTRANSITIONMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBFullScreenContinuousExposeSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposePeekTransitionModifier : SBTransitionSwitcherModifier {
    SBFullScreenContinuousExposeSwitcherModifier *_fromFullScreenContinuousExposeModifier;
    SBFullScreenContinuousExposeSwitcherModifier *_toFullScreenContinuousExposeModifier;
}


@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout


-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 direction:(NSUInteger)arg3 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;


@end


#endif