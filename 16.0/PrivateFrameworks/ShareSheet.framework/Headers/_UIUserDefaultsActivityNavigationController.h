// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIUSERDEFAULTSACTIVITYNAVIGATIONCONTROLLER_H
#define _UIUSERDEFAULTSACTIVITYNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol _UIAppearanceRestriction;



@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
-(BOOL)_viewControllerUnderlapsStatusBar;
-(CGFloat)_statusBarHeightAdjustmentForCurrentOrientation;
-(struct CGSize )preferredContentSize;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;


@end


#endif