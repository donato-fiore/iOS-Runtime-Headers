// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENPREVIEWVIEW_H
#define SBLOCKSCREENPREVIEWVIEW_H

@class UIView, SBFLockScreenDateView, _UILegibilityLabel, UIStatusBar, _UILegibilitySettings, SBUILegibilityView, UILabel, CSPageControl, SBUICallToActionLabel, SBUIProudLockIconView, CSQuickActionsView;


#import "SBWallpaperController.h"
#import "SBHomeGrabberView.h"

@interface SBLockScreenPreviewView : UIView {
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    UIStatusBar *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperController *_wallpaperController;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    CSPageControl *_dashBoardPageControl;
    SBUICallToActionLabel *_callToActionLabel;
    SBUIProudLockIconView *_proudLockIconView;
    CSQuickActionsView *_quickActionsView;
    SBHomeGrabberView *_homeGrabberView;
}




-(id)initWithFrame:(struct CGRect )arg0 wallpaperController:(id)arg1 options:(NSUInteger)arg2 wallpaperImage:(id)arg3 ;
-(void)_layoutCallToActionLabel;
-(void)_layoutDateView;
-(void)_layoutHomeGrabberView;
-(void)_layoutPageControl;
-(void)_layoutProudLockIconView;
-(void)_layoutQuickActionsView;
-(void)_layoutStatusBar;
-(void)_layoutWallpaperView;
-(void)_setupCallToActionLabel;
-(void)_setupDateViewWithOptions:(NSUInteger)arg0 ;
-(void)_setupHomeGrabberView;
-(void)_setupPageControl;
-(void)_setupProudLockIconView;
-(void)_setupQuickActionView;
-(void)_setupStatusBar;
-(void)_setupWallpaperViewWithImage:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif