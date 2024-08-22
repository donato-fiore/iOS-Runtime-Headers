// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERPOSTEREDITDEBUGVIEWCONTROLLER_H
#define PUWALLPAPERPOSTEREDITDEBUGVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, NSString, UIButton, UIScrollView, UIPageControl, UIAction;
@protocol PUWallpaperPosterEditToolbarDelegate, PUWallpaperEditor, PUWallpaperEditorLookViewProviding, UIScrollViewDelegate, UIColorPickerViewControllerDelegate, PUWallpaperEditingLook;


#import "PUWallpaperPosterDateView.h"
#import "_PUWallpaperPosterEditorDebugEnvironment.h"
#import "_PUWallpaperPosterEditorDebugPreferences.h"
#import "PUWallpaperPosterEditToolBar.h"
#import "PUWallpaperPosterEditorController.h"

@interface PUWallpaperPosterEditDebugViewController : UIViewController <PUWallpaperPosterEditToolbarDelegate, PUWallpaperEditor, PUWallpaperEditorLookViewProviding, UIScrollViewDelegate, UIColorPickerViewControllerDelegate>

 {
    BOOL _needsUpdateUserTransform;
}


@property (copy, nonatomic) NSArray *availableLooks; // ivar: _availableLooks
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *colorPickerChangeHandler; // ivar: _colorPickerChangeHandler
@property (retain, nonatomic) UIView *contentOverlayView; // ivar: _contentOverlayView
@property (nonatomic) NSInteger currentLookIndex; // ivar: _currentLookIndex
@property (retain, nonatomic) PUWallpaperPosterDateView *dateView; // ivar: _dateView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _PUWallpaperPosterEditorDebugEnvironment *editEnvironment; // ivar: _editEnvironment
@property (retain, nonatomic) _PUWallpaperPosterEditorDebugPreferences *editPreferences; // ivar: _editPreferences
@property (retain, nonatomic) PUWallpaperPosterEditToolBar *editToolBar; // ivar: _editToolBar
@property (retain, nonatomic) UIView *floatingView; // ivar: _floatingView
@property (retain, nonatomic) UIView *foregroundView; // ivar: _foregroundView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *lookLabelButton; // ivar: _lookLabelButton
@property (retain, nonatomic) UIScrollView *looksScrollView; // ivar: _looksScrollView
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (nonatomic, getter=isPerspectiveZoomEnabled) BOOL perspectiveZoomEnabled; // ivar: _perspectiveZoomEnabled
@property (retain, nonatomic) PUWallpaperPosterEditorController *posterEditorController; // ivar: _posterEditorController
@property (readonly, nonatomic) BOOL pu_canApplyParallaxToViews;
@property (readonly, copy, nonatomic) NSObject<PUWallpaperEditingLook> *pu_currentLook;
@property (readonly, nonatomic) BOOL pu_isDepthEffectDisallowed;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIAction *tapToRadarAction; // ivar: _tapToRadarAction


-(BOOL)prefersStatusBarHidden;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 posterType:(NSInteger)arg1 ;
-(id)initWithAssets:(id)arg0 posterType:(NSInteger)arg1 photoLibrary:(id)arg2 ;
-(id)initWithMigratorOfLegacyConfigurationType:(NSUInteger)arg0 photoLibrary:(id)arg1 ;
-(id)initWithPosterType:(NSInteger)arg0 photoLibrary:(id)arg1 ;
-(id)pu_beginBackgroundTaskForReason:(id)arg0 ;
-(void)_dismissAndCancel:(id)arg0 ;
-(void)_dismissAndSave:(id)arg0 ;
-(void)_handlePageControlSelectedPage:(id)arg0 ;
-(void)_setupEditorViews;
-(void)_setupPosterEditorController;
-(void)_setupSimulatedControls;
-(void)_updateLookControls;
-(void)_updateLookProperties;
-(void)_updateLooks;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)colorPickerViewControllerDidFinish:(id)arg0 ;
-(void)presentColorPickerWithConfiguration:(id)arg0 changeHandler:(id)arg1 ;
-(void)pu_endBackgroundTask:(id)arg0 completionStatus:(NSInteger)arg1 ;
-(void)pu_requestDismissalWithAction:(NSInteger)arg0 ;
-(void)pu_updateLookProperties;
-(void)pu_updateLooks;
-(void)pu_updateLuminanceValuesForLooks;
-(void)pu_updatePreferences:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateActions;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif