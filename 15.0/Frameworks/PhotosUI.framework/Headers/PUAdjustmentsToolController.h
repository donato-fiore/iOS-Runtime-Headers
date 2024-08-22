// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUADJUSTMENTSTOOLCONTROLLER_H
#define PUADJUSTMENTSTOOLCONTROLLER_H

@class UIView, _UIBackdropView, PXUISnappingController, CEKBadgeTextView, NSString;
@protocol UIGestureRecognizerDelegate, PUAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUAdjustmentsToolControllerPPT;


#import "PUPhotoEditToolController.h"
#import "PUAdjustmentsViewController.h"
#import "PUAutoAdjustmentController.h"
#import "PUAdjustmentsDataSource.h"
#import "PUAdjustmentsToolControllerSpec.h"

@interface PUAdjustmentsToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUAdjustmentsToolControllerPPT>

 {
    PUAdjustmentsViewController *_adjustmentsViewController;
    UIView *_adjustmentPickerView;
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    BOOL _useTranslucentBackground;
    BOOL _ppt_EverAdjusted;
    CGFloat _ppt_scrollDelta;
    NSInteger _viewLoadingStartTime;
}


@property (retain, nonatomic, setter=_setSnappingController:) PXUISnappingController *_snappingController; // ivar: __snappingController
@property (retain, nonatomic) PUAutoAdjustmentController *autoAdjustmentController; // ivar: _autoAdjustmentController
@property (retain, nonatomic) CEKBadgeTextView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) PUAdjustmentsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initialAction; // ivar: _initialAction
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUAdjustmentsToolControllerSpec *toolControllerSpec;


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResetToDefaultValue;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg0 ;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg0 ;
-(BOOL)wantsSliderKeyControl;
-(BOOL)wantsZoomAndPanEnabled;
-(CGFloat)_sliderLength;
-(NSInteger)toolControllerTag;
-(id)adjustmentsRenderer:(id)arg0 ;
-(id)centerToolbarView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedName;
-(id)localizedResetToolActionTitle;
-(id)toolbarIcon;
-(void)_performInitialAction;
-(void)_ppt_scrollAfterDelay:(id)arg0 ;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)_updateBadgeTextWithInfo:(id)arg0 ;
-(void)adjustmentsDataChanged:(id)arg0 ;
-(void)adjustmentsViewControllerDidAppear:(id)arg0 ;
-(void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg0 ;
-(void)autoEnhanceActionStateChanged;
-(void)autoEnhanceAssets:(id)arg0 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)decreaseSliderValue:(BOOL)arg0 ;
-(void)didBecomeActiveTool;
-(void)increaseSliderValue:(BOOL)arg0 ;
-(void)mediaViewIsReady;
-(void)ppt_scrollSelectedSliderByDelta;
-(void)ppt_selectBWSlider:(id)arg0 ;
-(void)ppt_selectColorSlider:(id)arg0 ;
-(void)ppt_selectLightSlider:(id)arg0 ;
-(void)ppt_setSteps:(NSInteger)arg0 ;
-(void)resetToDefaultValueAnimated:(BOOL)arg0 ;
-(void)setBackdropViewGroupName:(id)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setUseGradientBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)specDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAdjustmentControls;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBecomeActiveTool;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif