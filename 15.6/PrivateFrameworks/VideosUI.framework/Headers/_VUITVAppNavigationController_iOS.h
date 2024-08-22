// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VUITVAPPNAVIGATIONCONTROLLER_IOS_H
#define _VUITVAPPNAVIGATIONCONTROLLER_IOS_H

@class VUITVAppNavigationController;



@interface _VUITVAppNavigationController_iOS : VUITVAppNavigationController

@property (nonatomic) BOOL originalValueForNavigationBarForceFullHeightInLandscape; // ivar: _originalValueForNavigationBarForceFullHeightInLandscape
@property (nonatomic) BOOL shouldFakeStatusBarVisible; // ivar: _shouldFakeStatusBarVisible
@property (nonatomic) BOOL shouldPreventContentFromShiftingVertically; // ivar: _shouldPreventContentFromShiftingVertically


-(NSInteger)preferredStatusBarStyle;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)didPresentTraitsOverridingViewController;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willPresentTraitsOverridingViewController;


@end


#endif