// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCHROMEHELPER_H
#define SSCHROMEHELPER_H


#import <Foundation/Foundation.h>


@interface SSChromeHelper : NSObject



+(CGFloat)barButtonItemsLeftOfOpacitySlider;
+(CGFloat)barSeparatorSize;
+(CGFloat)contentSwitcherPadding;
+(CGFloat)countIndicatorOffset;
+(CGFloat)cropsCornerLength;
+(CGFloat)cropsCornerWidth;
+(CGFloat)cropsHandleOutset;
+(CGFloat)defaultBarButtonSpacing;
+(CGFloat)defaultBarButtonWidth;
+(CGFloat)screenshotTopBottomMargin:(NSInteger)arg0 ;
+(CGFloat)screenshotTopBottomMarginPad;
+(CGFloat)screenshotTopBottomMarginPhone;
+(CGFloat)widthForContentSwitcher:(id)arg0 forView:(id)arg1 ;
+(CGFloat)widthForOpacityControlInView:(id)arg0 withContentSwitcher:(id)arg1 ;
+(NSInteger)backgroundBlurEffectStyle;
+(NSInteger)statusBarStyle;
+(id)barSeparatorColor;
+(id)createFixedSpaceBarButtonItemWithWidth:(CGFloat)arg0 ;
+(id)separatorView;
+(int)statusBarVisibilityForTraitCollection:(id)arg0 isPortrait:(BOOL)arg1 ;
+(struct CGRect )availableRectForFullscreenContent:(struct CGRect )arg0 layoutBounds:(struct CGRect )arg1 bleedToBottom:(BOOL)arg2 topBarHeight:(CGFloat)arg3 bottomBarHeight:(CGFloat)arg4 userInterfaceIdiom:(NSInteger)arg5 multipleScreenshots:(BOOL)arg6 ;
+(void)configureNavigationBarAppearance:(id)arg0 ;


@end


#endif