// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYOVERLAYCONTROLLER_H
#define PXSTORYOVERLAYCONTROLLER_H



#import "PXStoryController.h"
#import "PXNumberAnimator.h"
#import "PXStoryModel.h"
#import "PXStoryViewModel.h"

@interface PXStoryOverlayController : PXStoryController

@property (readonly, nonatomic) PXNumberAnimator *chromeVisibilityFractionAnimator; // ivar: _chromeVisibilityFractionAnimator
@property (readonly, nonatomic) PXNumberAnimator *fadeOutOverlayVisibilityFractionAnimator; // ivar: _fadeOutOverlayVisibilityFractionAnimator
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (nonatomic) BOOL preventAnimatingNextRelatedOverlayVisibilityFractionChange; // ivar: _preventAnimatingNextRelatedOverlayVisibilityFractionChange
@property (readonly, nonatomic) PXNumberAnimator *relatedOverlayVisibilityFractionAnimator; // ivar: _relatedOverlayVisibilityFractionAnimator
@property (readonly, nonatomic) PXNumberAnimator *scrubberVisibilityFractionAnimator; // ivar: _scrubberVisibilityFractionAnimator
@property (readonly, nonatomic) PXNumberAnimator *styleSwitcherVisibilityFractionAnimator; // ivar: _styleSwitcherVisibilityFractionAnimator
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_invalidateChromeItems;
-(void)_invalidateChromeVisibilityFraction;
-(void)_invalidateChromeVisibilityFractionAnimator;
-(void)_invalidateFadeOutOverlayVisibilityFraction;
-(void)_invalidateFadeOutOverlayVisibilityFractionAnimator;
-(void)_invalidateMainModel;
-(void)_invalidateRelatedOverlayVisibilityFraction;
-(void)_invalidateRelatedOverlayVisibilityFractionAnimator;
-(void)_invalidateRelatedOverlayVisible;
-(void)_invalidateScrubberVisibilityFraction;
-(void)_invalidateScrubberVisibilityFractionAnimator;
-(void)_invalidateStyleSwitcherVisibilityFraction;
-(void)_invalidateStyleSwitcherVisibilityFractionAnimator;
-(void)_updateAnimator:(id)arg0 endValue:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)_updateChromeItems;
-(void)_updateChromeVisibilityFraction;
-(void)_updateChromeVisibilityFractionAnimator;
-(void)_updateFadeOutOverlayVisibilityFraction;
-(void)_updateFadeOutOverlayVisibilityFractionAnimator;
-(void)_updateMainModel;
-(void)_updateRelatedOverlayVisibilityFraction;
-(void)_updateRelatedOverlayVisibilityFractionAnimator;
-(void)_updateRelatedOverlayVisible;
-(void)_updateScrubberVisibilityFraction;
-(void)_updateScrubberVisibilityFractionAnimator;
-(void)_updateStyleSwitcherVisibilityFraction;
-(void)_updateStyleSwitcherVisibilityFractionAnimator;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif