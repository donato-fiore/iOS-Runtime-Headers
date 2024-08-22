// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYSCRUBBERCONTENTLAYOUT_H
#define PXSTORYSCRUBBERCONTENTLAYOUT_H

@class NSIndexSet, NSMutableIndexSet, NSMutableDictionary, NSString;
@protocol PXGSolidColorSource, PXGViewSource, PXChangeObserver, PXGAXResponder, PXGFocusableViewDelegate;


#import "PXStoryModelTimelineLayout.h"
#import "PXStoryModel.h"
#import "PXStoryPagedTimelineSpec.h"
#import "PXNumberAnimator.h"
#import "PXStoryViewModel.h"

@interface PXStoryScrubberContentLayout : PXStoryModelTimelineLayout <PXGSolidColorSource, PXGViewSource, PXChangeObserver, PXGAXResponder, PXGFocusableViewDelegate>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned int _backgroundSpriteIndex;
    unsigned int _currentSegmentCursorSpriteIndex;
    unsigned int _currentTimeCursorSpriteIndex;
    unsigned int _scrollPositionCursorSpriteIndex;
    unsigned int _wholeScrubberFocusSpriteIndex;
    NSIndexSet *_supportedResourceKindsForClipLayouts;
    BOOL _didUpdateTimelineTranslationXAnimatorOnce;
    BOOL _isWaitingForFocusableViewUserDataUpdate;
    NSMutableIndexSet *_axSpriteIndexes;
    unsigned short _backgroundMediaVersion;
    unsigned short _hostingSpritesMediaVersion;
    NSMutableDictionary *_segmentIdentifiersToHostingSpriteIndexes;
    _PXGSpriteIndexRange _hostingSpritesIndexRange;
}


@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: axNextResponder
@property (nonatomic) BOOL containsFocus; // ivar: _containsFocus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat focusHintTranslationY; // ivar: _focusHintTranslationY
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryPagedTimelineSpec *pagedTimelineSpec; // ivar: _pagedTimelineSpec
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXNumberAnimator *timelineTranslationXAnimator; // ivar: _timelineTranslationXAnimator
@property (readonly, nonatomic) PXNumberAnimator *timelineTranslationYAnimator; // ivar: _timelineTranslationYAnimator
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)_handleScrollTimeline:(id)arg0 inGroup:(id)arg1 ;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)shouldSetContentSizeToReferenceSize;
-(CGFloat)_displayedContentWidth;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)_axScrubberFractionNumerator;
-(NSInteger)_currentFocusMode;
-(NSInteger)_segmentIdentifierForHostingSpriteIndex:(unsigned int)arg0 ;
-(NSUInteger)_axScrubberFractionDenominator;
-(NSUInteger)axFocusabilityForSpriteAtIndex:(unsigned int)arg0 ;
-(id)_assetFetchResultForTimelineIndex:(NSInteger)arg0 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)mainLayoutSpec;
-(id)preferredFocusLayouts;
-(id)preferredFocusSpriteIndexes;
-(id)supportedResourceKindsForClipLayouts;
-(id)viewLayoutSpec;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGRect )_frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGRect )axFrame;
-(unsigned int)_hostingSpriteIndexForSegmentIdentifier:(NSInteger)arg0 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_fadeClipLayoutIfNeeded:(id)arg0 layoutFrame:(struct CGRect )arg1 ;
-(void)_invalidateAXSpriteIndexes;
-(void)_invalidateBackground;
-(void)_invalidateContentSize;
-(void)_invalidateCursors;
-(void)_invalidateHostingSpritesFocus;
-(void)_invalidateHostingSpritesLayout;
-(void)_invalidateMainModel;
-(void)_invalidatePagedTimelineSpec;
-(void)_invalidateScrollViewProperties;
-(void)_invalidateTimelineTranslationXAnimator;
-(void)_invalidateTimelineTranslationYAnimator;
-(void)_updateAXSpriteIndexes;
-(void)_updateBackground;
-(void)_updateContentSize;
-(void)_updateCursors;
-(void)_updateHostingSpritesFocus;
-(void)_updateHostingSpritesLayout;
-(void)_updateMainModel;
-(void)_updatePagedTimelineSpec;
-(void)_updateScrollViewProperties;
-(void)_updateTimelineTranslationXAnimator;
-(void)_updateTimelineTranslationYAnimator;
-(void)alphaDidChange;
-(void)axDidUpdateFocusInContext:(id)arg0 ;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)configureClipLayout:(id)arg0 ;
-(void)didUpdate;
-(void)didUpdateClipLayout:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)didUpdateTimelineContent;
-(void)focusableView:(id)arg0 didHintFocusMovement:(id)arg1 ;
-(void)focusableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)focusableViewDidUpdateUserInfo:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)update;
-(void)updateClipsCornerRadius;
-(void)updateDisplayedTimeRange;
-(void)updateDisplayedTimeline;
-(void)updateDisplayedTimelineRect;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif