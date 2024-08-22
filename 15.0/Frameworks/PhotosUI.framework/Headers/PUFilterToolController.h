// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFILTERTOOLCONTROLLER_H
#define PUFILTERTOOLCONTROLLER_H

@class CEKBadgeTextView, CEKWheelScrubberView, CEKSlider, CIImage, NSMutableDictionary, NSMutableArray, NSLayoutConstraint, NSNumberFormatter, CIContext, NSString;
@protocol CEKWheelScrubberViewDelegate, CEKSliderDelegate;


#import "PUPhotoEditToolController.h"

@interface PUFilterToolController : PUPhotoEditToolController <CEKWheelScrubberViewDelegate, CEKSliderDelegate>

 {
    CEKBadgeTextView *_filterBadgeView;
    CEKWheelScrubberView *_scrubberView;
    CEKSlider *_slider;
    BOOL _isSliderTouchDown;
    CIImage *_inputImage;
    BOOL _monitorAdjustmentsForCache;
    NSMutableDictionary *_filterThumbnailCache;
    NSMutableDictionary *_filterIntensityCache;
    NSMutableArray *_toolConstraints;
    NSMutableArray *_scrubberViewConstraints;
    NSMutableArray *_filterBadgeViewConstraints;
    NSLayoutConstraint *_filterBadgeWidthConstraint;
    NSLayoutConstraint *_filterBadgeHeightConstraint;
    NSNumberFormatter *_formatter;
    CIContext *_context;
    ? _thumbnailTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFinishLoadingFilterThumbnails; // ivar: _didFinishLoadingFilterThumbnails
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *willLoadFilterThumbnails; // ivar: _willLoadFilterThumbnails


-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg0 ;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg0 ;
-(BOOL)wantsScrubberKeyControl;
-(BOOL)wantsSliderKeyControl;
-(BOOL)wantsZoomAndPanEnabled;
-(CGFloat)_adjustedFilterIntensity;
-(NSInteger)_adjustedFilterIndex;
-(NSInteger)_indexForFilterId:(id)arg0 ;
-(NSInteger)toolControllerTag;
-(id)_adjustedFilterName;
-(id)_effectAdjustment;
-(id)_effectForIndex:(NSInteger)arg0 ;
-(id)centerToolbarView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedName;
-(id)toolbarIcon;
-(void)_prepareThumbnailImagesIfNeeded;
-(void)_setShowSlider:(BOOL)arg0 animate:(BOOL)arg1 ;
-(void)_setThumbnail:(id)arg0 forKey:(id)arg1 ;
-(void)_setupFilters;
-(void)_setupScrubber;
-(void)_setupSlider;
-(void)_sliderDidEndScrolling;
-(void)_updateBadgeAndSliderWithEffect:(id)arg0 ;
-(void)_updateBadgeConstraints;
-(void)_updateCacheWithCIImage:(id)arg0 ;
-(void)_updateFilterIntensityCache;
-(void)_updateIntensityForEffect:(id)arg0 ;
-(void)_updateScrubberLayout;
-(void)_updateSelectionTextAnimate:(BOOL)arg0 ;
-(void)_updateToolConstraints;
-(void)_updateWithCompositionController:(id)arg0 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)decreaseScrubberValue:(BOOL)arg0 ;
-(void)decreaseSliderValue:(BOOL)arg0 ;
-(void)didResignActiveTool;
-(void)increaseScrubberValue:(BOOL)arg0 ;
-(void)increaseSliderValue:(BOOL)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)sliderDidEndScrolling:(id)arg0 ;
-(void)sliderDidScroll:(id)arg0 ;
-(void)sliderWillBeginScrolling:(id)arg0 ;
-(void)sliderWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)wheelScrubberView:(id)arg0 updateCell:(id)arg1 forItemAtIndex:(NSUInteger)arg2 ;
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg0 ;
-(void)wheelScrubberViewDidEndScrolling:(id)arg0 ;
-(void)wheelScrubberViewWillBeginScrolling:(id)arg0 ;
-(void)willBecomeActiveTool;


@end


#endif