// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPEEKHOMESCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBPEEKHOMESCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBDefaultImplementationsSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBPeekHomeScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBDefaultImplementationsSwitcherModifier *_defaultImplementationsModifier;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger configuration; // ivar: _configuration


-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)wallpaperScale;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)initWithAppLayout:(id)arg0 configuration:(NSInteger)arg1 ;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif