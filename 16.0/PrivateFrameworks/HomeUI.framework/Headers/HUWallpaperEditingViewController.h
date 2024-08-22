// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWALLPAPEREDITINGVIEWCONTROLLER_H
#define HUWALLPAPEREDITINGVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIView, UIButton, NSString, UIImage, UIImageView, NSArray, UIScrollView, HFWallpaper;
@protocol UIScrollViewDelegate, HUWallpaperEditingViewControllerDelegate;


#import "_TtC6HomeUI12HUBlurButton.h"

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate>



@property (retain, nonatomic) _TtC6HomeUI12HUBlurButton *blurButton; // ivar: _blurButton
@property (retain, nonatomic) UIVisualEffectView *buttonBackgroundView; // ivar: _buttonBackgroundView
@property (retain, nonatomic) UIView *buttonContainerView; // ivar: _buttonContainerView
@property (retain, nonatomic) UIView *buttonSeparatorView; // ivar: _buttonSeparatorView
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUWallpaperEditingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSArray *layerFilters; // ivar: _layerFilters
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL scrollViewHasBeenLoaded; // ivar: _scrollViewHasBeenLoaded
@property (retain, nonatomic) UIButton *setButton; // ivar: _setButton
@property (nonatomic) BOOL statusBarHidden; // ivar: _statusBarHidden
@property (readonly) Class superclass;
@property (retain, nonatomic) HFWallpaper *wallpaper; // ivar: _wallpaper


-(BOOL)prefersStatusBarHidden;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(id)_convertDefaultBlurImage:(id)arg0 toScale:(CGFloat)arg1 ;
-(id)_createButtonConstraints;
-(id)_createButtonViews;
-(id)_croppedWallpaperInfo;
-(id)_screenScaleAdjustedImage:(id)arg0 ;
-(id)initWithWallpaper:(id)arg0 image:(id)arg1 delegate:(id)arg2 ;
-(id)transparentButtonWithTitle:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_refreshBlurButton;
-(void)blurButtonPressed:(id)arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)buttonTouchFinished:(id)arg0 ;
-(void)buttonTouchStarted:(id)arg0 ;
-(void)updateScrollViewScale;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif