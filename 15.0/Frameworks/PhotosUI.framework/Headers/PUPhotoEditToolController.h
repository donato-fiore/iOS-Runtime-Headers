// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITTOOLCONTROLLER_H
#define PUPHOTOEDITTOOLCONTROLLER_H

@class UIViewController, CEKEdgeGradientView, NSString, UIView, PICompositionController, NSArray, PLEditSource, NURenderPipelineFilter, NSMutableArray, UIButton, UIColor, UIImage, PFSlowMotionTimeRangeMapper;
@protocol PUViewControllerSpecChangeObserver, PUPhotoEditLayoutDynamicAdaptable, PUEditableAsset, PUPhotoEditToolControllerDelegate;


#import "_PUPhotoEditToolGradientView.h"
#import "PUPhotoEditAggregateSession.h"
#import "PUPhotoEditViewControllerSpec.h"
#import "PUPhotoEditToolControllerSpec.h"
#import "PUPhotoEditValuesCalculator.h"

@interface PUPhotoEditToolController : UIViewController <PUViewControllerSpecChangeObserver, PUPhotoEditLayoutDynamicAdaptable>

 {
    CEKEdgeGradientView *_gradientMask;
    _PUPhotoEditToolGradientView *_gradientView;
}


@property (retain, nonatomic) PUPhotoEditAggregateSession *aggregateSession; // ivar: _aggregateSession
@property (readonly, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (readonly, nonatomic) BOOL canResetToDefaultValue;
@property (readonly, nonatomic) UIView *centerToolbarView;
@property (readonly, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoEditToolControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *editActionActivities;
@property (readonly, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (readonly, copy, nonatomic) NURenderPipelineFilter *filter;
@property (readonly, nonatomic) BOOL handlesMediaViewInsets;
@property (readonly, nonatomic) BOOL handlesVideoPlaying;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (readonly, nonatomic) UIView *leftToolbarView; // ivar: _leftToolbarView
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *localizedResetToolActionTitle;
@property (retain, nonatomic) NSMutableArray *mutableEditActionActivites; // ivar: _mutableEditActionActivites
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (nonatomic, getter=isPerformingLiveInteraction) BOOL performingLiveInteraction; // ivar: _performingLiveInteraction
@property (retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // ivar: _photoEditSpec
@property (copy, nonatomic) id *ppt_didBecomeActiveToolBlock; // ivar: _ppt_didBecomeActiveToolBlock
@property (retain, nonatomic) UIButton *preferredAlternateToolbarButton; // ivar: _preferredAlternateToolbarButton
@property (readonly, copy, nonatomic) UIColor *preferredPreviewBackgroundColor;
@property (readonly, nonatomic) UIEdgeInsets preferredPreviewViewInsets;
@property (readonly, nonatomic) NSInteger scrubberOrientation;
@property (readonly, nonatomic) UIImage *selectedToolbarIcon; // ivar: _selectedToolbarIcon
@property (retain, nonatomic) PFSlowMotionTimeRangeMapper *slowMotionTimeMapper; // ivar: _slowMotionTimeMapper
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPreviewingOriginal;
@property (readonly, nonatomic) BOOL suppressesEditUpdates;
@property (readonly, nonatomic) UIView *toolContainerView; // ivar: _toolContainerView
@property (retain, nonatomic) PUPhotoEditToolControllerSpec *toolControllerSpec; // ivar: _toolControllerSpec
@property (readonly, nonatomic) NSInteger toolControllerTag;
@property (nonatomic) CGFloat toolGradientDistance; // ivar: _toolGradientDistance
@property (readonly, nonatomic) UIImage *toolbarIcon; // ivar: _toolbarIcon
@property (readonly, nonatomic) NSString *toolbarIconAccessibilityLabel; // ivar: _toolbarIconAccessibilityLabel
@property (readonly, nonatomic) PICompositionController *uneditedCompositionController;
@property (readonly, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // ivar: _valuesCalculator
@property (readonly, nonatomic) BOOL wantsDefaultPreviewView;
@property (readonly, nonatomic) BOOL wantsScrubberKeyControl; // ivar: _wantsScrubberKeyControl
@property (readonly, nonatomic) BOOL wantsSecondaryToolbarVisible;
@property (readonly, nonatomic) BOOL wantsSliderKeyControl; // ivar: _wantsSliderKeyControl
@property (readonly, nonatomic) BOOL wantsZoomAndPanEnabled;


-(BOOL)canBecomeActiveTool;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canShowCommonTools;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg0 ;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg0 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(id)_newTimeMapper;
-(id)accessibilityHUDItemForButton:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)leadingToolbarViews;
-(id)trailingToolbarViews;
-(struct ? )displayedTimeForOriginalAssetTime:(struct ? )arg0 ;
-(struct ? )originalAssetTimeForDisplayedTime:(struct ? )arg0 ;
-(struct CGRect )contentRectInCoordinateSpace:(id)arg0 ;
-(void)_layoutToolGradient;
-(void)_updateTraitCollectionAndLayoutReferenceSize;
-(void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize )arg0 ;
-(void)addEditActionActivity:(id)arg0 ;
-(void)baseLivePhotoInvalidated;
-(void)basePhotoInvalidated;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)dealloc;
-(void)decreaseScrubberValue:(BOOL)arg0 ;
-(void)decreaseSliderValue:(BOOL)arg0 ;
-(void)didBecomeActiveTool;
-(void)didResignActiveTool;
-(void)increaseScrubberValue:(BOOL)arg0 ;
-(void)increaseSliderValue:(BOOL)arg0 ;
-(void)leavingEditWithCancel;
-(void)loadView;
-(void)mediaView:(id)arg0 didZoom:(CGFloat)arg1 ;
-(void)mediaViewDidEndZooming:(id)arg0 ;
-(void)mediaViewDidScroll:(id)arg0 ;
-(void)mediaViewIsReady;
-(void)mediaViewWillBeginZooming:(id)arg0 ;
-(void)photoEditLivePhotoModelUpdated;
-(void)prepareForSave:(BOOL)arg0 ;
-(void)prepareForToolTransitionWithCompletion:(id)arg0 ;
-(void)reloadToolbarButtons:(BOOL)arg0 ;
-(void)removeEditActionActivity:(id)arg0 ;
-(void)resetToDefaultValueAnimated:(BOOL)arg0 ;
-(void)setOriginalStillImageTime:(struct ? )arg0 ;
-(void)setPlaceholderImage:(id)arg0 ;
-(void)setUseGradientBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)specDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForIncomingAnimation;
-(void)updateToolbarButtonsAnimated:(BOOL)arg0 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBecomeActiveTool;
-(void)willResignActiveTool;


@end


#endif