// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERPLAYGROUNDVIEWCONTROLLER_H
#define PUWALLPAPERPLAYGROUNDVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, NSString, UIButton;
@protocol PUWallpaperRenderer;


#import "PUWallpaperPosterDateView.h"
#import "_PUWallpaperDebugRenderingEnvironment.h"
#import "PUWallpaperPosterController.h"
#import "_PUWallpaperDebugMutablePreferences.h"

@interface PUWallpaperPlaygroundViewController : UIViewController <PUWallpaperRenderer>



@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) PUWallpaperPosterDateView *dateView; // ivar: _dateView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) _PUWallpaperDebugRenderingEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) UIView *floatingView; // ivar: _floatingView
@property (readonly, nonatomic) UIView *foregroundView; // ivar: _foregroundView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hostingView; // ivar: _hostingView
@property (retain, nonatomic) NSString *lowLuminanceFilterInputAmountKeyPath; // ivar: _lowLuminanceFilterInputAmountKeyPath
@property (retain, nonatomic) NSString *lowLuminanceFilterInputScaleKeyPath; // ivar: _lowLuminanceFilterInputScaleKeyPath
@property (retain, nonatomic) PUWallpaperPosterController *posterController; // ivar: _posterController
@property (readonly, nonatomic) _PUWallpaperDebugMutablePreferences *preferences; // ivar: _preferences
@property (readonly, nonatomic) CGFloat pu_backlightTransformAnimationDuration;
@property (readonly, nonatomic) CGFloat pu_lowLuminanceAlphaAnimationDuration;
@property (readonly, nonatomic) CGFloat pu_shuffleSleepFadeInAnimationDuration;
@property (readonly, nonatomic) CGFloat pu_shuffleSleepFadeOutAnimationDuration;
@property (readonly, nonatomic) CGFloat pu_shuffleSleepTransformOutAnimationDuration;
@property (retain, nonatomic) UIButton *settingsButton; // ivar: _settingsButton
@property (nonatomic) BOOL showsControls; // ivar: _showsControls
@property (readonly, nonatomic) id *shuffleTriggerObserver; // ivar: _shuffleTriggerObserver
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLowLuminance; // ivar: _useLowLuminance


-(BOOL)prefersStatusBarHidden;
-(NSInteger)preferredStatusBarStyle;
-(id)_renderingEnvironmentForAssets:(id)arg0 ;
-(id)initWithAssets:(id)arg0 ;
-(void)_dismiss;
-(void)_handleShuffleTrigger;
-(void)_handleTap:(id)arg0 ;
-(void)_handleTwoFingerTap:(id)arg0 ;
-(void)_setupControls;
-(void)_setupLowLuminanceFilter;
-(void)_setupPosterController;
-(void)_setupRendererViews;
-(void)_updateLowLuminanceState;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentPlaygroundWithPresentingViewController:(id)arg0 ;
-(void)pu_updatePreferences:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif