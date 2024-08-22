// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCROPOVERLAY_H
#define PLCROPOVERLAY_H

@class UIView, UIImageView, UIToolbar, UILabel, UIButton, NSString;
@protocol PLCropOverlayDelegate;


#import "PLCropOverlayCropView.h"
#import "PLProgressHUD.h"
#import "PLCropOverlayBottomBar.h"
#import "PLContactPhotoOverlay.h"
#import "PLCropOverlayWallpaperBottomBar.h"

@interface PLCropOverlay : UIView {
    PLCropOverlayCropView *_cropView;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    CGRect _cropRect;
    UIToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    PLProgressHUD *_hud;
    float _statusBarHeight;
    int _mode;
    BOOL _previewMode;
    BOOL _cropRectIsVisible;
    BOOL _offsetStatusBar;
    BOOL _tookPhoto;
    BOOL _showsCropRegion;
    BOOL _controlsAreVisible;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
}


@property (readonly, nonatomic) PLCropOverlayBottomBar *_bottomBar; // ivar: __bottomBar
@property (readonly, nonatomic) UIButton *_cameraCancelButton; // ivar: __cameraCancelButton
@property (retain, nonatomic) UIView *cameraBottomBar;
@property (readonly, nonatomic) PLContactPhotoOverlay *contactPhotoOverlay; // ivar: _contactPhotoOverlay
@property (copy, nonatomic) NSString *defaultCancelButtonTitle; // ivar: _defaultCancelButtonTitle
@property (copy, nonatomic) NSString *defaultOKButtonTitle; // ivar: _defaultOKButtonTitle
@property (weak, nonatomic) NSObject<PLCropOverlayDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDisplayedInPopover) BOOL displayedInPopover; // ivar: _displayedInPopover
@property (nonatomic) BOOL isEditingHomeScreen; // ivar: _isEditingHomeScreen
@property (nonatomic) BOOL isEditingLockScreen; // ivar: _isEditingLockScreen
@property (nonatomic) BOOL motionToggleHidden;
@property (nonatomic) BOOL motionToggleIsOn; // ivar: _motionToggleIsOn
@property (nonatomic) BOOL previewMode;
@property (readonly, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;


-(BOOL)controlsAreVisible;
-(BOOL)isTelephonyUIMode:(int)arg0 ;
-(BOOL)isWallpaperUIMode:(int)arg0 ;
-(id)_fileResizingButton;
-(id)_newOverlayViewWithFrame:(struct CGRect )arg0 lighterEdgeOnTop:(BOOL)arg1 ;
-(id)bottomBar;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 mode:(int)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 mode:(int)arg1 offsettingStatusBar:(BOOL)arg2 ;
-(id)overlayContainerView;
-(int)mode;
-(struct CGRect )bottomBarFrame;
-(struct CGRect )cropRect;
-(struct CGRect )titleRect;
-(void)_backgroundSavePhoto:(id)arg0 cropRect:(struct CGRect )arg1 minimalCropDimension:(CGFloat)arg2 ;
-(void)_createCropView;
-(void)_fadeOutCompleted:(id)arg0 ;
-(void)_pauseButtonPressed:(id)arg0 ;
-(void)_playButtonPressed:(id)arg0 ;
-(void)_savePhotoFinished:(id)arg0 ;
-(void)_setMode:(int)arg0 ;
-(void)_tappedBottomBarCancelButton:(id)arg0 ;
-(void)_tappedBottomBarDoneButton:(id)arg0 ;
-(void)_tappedBottomBarMotionToggle;
-(void)_tappedBottomBarPlaybackButton:(id)arg0 ;
-(void)_tappedBottomBarSetBothButton;
-(void)_tappedBottomBarSetHomeButton;
-(void)_tappedBottomBarSetLockButton;
-(void)_updateCropRectInRect:(struct CGRect )arg0 ;
-(void)_updateEditImageCancelButtonTitle;
-(void)_updateEditImageDoneButtonTitle;
-(void)_updateMotionToggle;
-(void)_updateTitle;
-(void)_updateToolbarItems:(BOOL)arg0 ;
-(void)_updateWallpaperBottomBarSettingButtons;
-(void)beginBackgroundSaveWithTile:(id)arg0 progressTitle:(id)arg1 completionCallbackTarget:(id)arg2 options:(int)arg3 ;
-(void)cancelButtonClicked:(id)arg0 ;
-(void)cropOverlayBottomBarPauseButtonClicked:(id)arg0 ;
-(void)cropOverlayBottomBarPlayButtonClicked:(id)arg0 ;
-(void)dealloc;
-(void)didCapturePhoto;
-(void)didCaptureVideo;
-(void)didPauseVideo;
-(void)didPlayVideo;
-(void)dismiss;
-(void)insertIrisView:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeProgress;
-(void)setCancelButtonTitle:(id)arg0 ;
-(void)setControlsAreVisible:(BOOL)arg0 ;
-(void)setCropRectVisible:(BOOL)arg0 duration:(float)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFileResizingHidden:(BOOL)arg0 ;
-(void)setFileResizingTitle:(id)arg0 ;
-(void)setOKButtonShowsCamera:(BOOL)arg0 ;
-(void)setOKButtonTitle:(id)arg0 ;
-(void)setOverlayContainerView:(id)arg0 ;
-(void)setProgressDone;
-(void)setShowProgress:(BOOL)arg0 title:(id)arg1 ;
-(void)setShowsCropRegion:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitle:(id)arg0 okButtonTitle:(id)arg1 ;
-(void)setTitleHidden:(BOOL)arg0 animationDuration:(CGFloat)arg1 ;
-(void)statusBarHeightDidChange:(id)arg0 ;


@end


#endif