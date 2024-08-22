// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBENTITYREMOVALDELETEFLOATINGSWITCHERMODIFIER_H
#define SBENTITYREMOVALDELETEFLOATINGSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBEntityRemovalDeleteFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    NSInteger _floatingConfiguration;
}


@property (nonatomic) BOOL blursFromAppLayout; // ivar: _blursFromAppLayout


-(BOOL)_isIndexFromAppLayout:(NSUInteger)arg0 ;
-(BOOL)_isIndexToAppLayout:(NSUInteger)arg0 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_layoutSettings;
-(id)_opacitySettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 floatingConfiguration:(NSInteger)arg3 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )containerViewBounds;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif