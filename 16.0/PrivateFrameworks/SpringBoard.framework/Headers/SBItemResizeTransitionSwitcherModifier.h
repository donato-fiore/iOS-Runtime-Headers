// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBITEMRESIZETRANSITIONSWITCHERMODIFIER_H
#define SBITEMRESIZETRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBItemResizeTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
}




-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 selectedAppLayout:(id)arg1 ;
-(id)keyboardSuppressionMode;


@end


#endif