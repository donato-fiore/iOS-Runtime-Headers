// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYSCRUBBERCONTENTLAYOUT_H
#define PXSTORYSCRUBBERCONTENTLAYOUT_H

@class NSIndexSet, NSMutableIndexSet, NSString;
@protocol PXGSolidColorSource, PXChangeObserver, PXGAXResponder;


#import "PXStoryModelTimelineLayout.h"
#import "PXStoryModel.h"
#import "PXStoryPagedTimelineSpec.h"
#import "PXNumberAnimator.h"
#import "PXStoryViewModel.h"

@interface PXStoryScrubberContentLayout : PXStoryModelTimelineLayout <PXGSolidColorSource, PXChangeObserver, PXGAXResponder>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned int _currentSegmentCursorSpriteIndex;
    unsigned int _currentTimeCursorSpriteIndex;
    unsigned int _scrollPositionCursorSpriteIndex;
    NSIndexSet *_supportedResourceKindsForClipLayouts;
    BOOL _didUpdateTimelineTranslationAnimatorOnce;
    NSMutableIndexSet *_axSpriteIndexes;
}


@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: axNextResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryPagedTimelineSpec *pagedTimelineSpec; // ivar: _pagedTimelineSpec
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXNumberAnimator *timelineTranslationAnimator; // ivar: _timelineTranslationAnimator
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)_handleScrollTimeline:(id)arg0 inGroup:(id)arg1 ;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(NSInteger)_axScrubberFractionNumerator;
-(NSUInteger)_axScrubberFractionDenominator;
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
-(id)supportedResourceKindsForClipLayouts;
-(id)viewLayoutSpec;
-(struct CGRect )_frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGRect )axFrame;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_fadeClipLayoutIfNeeded:(id)arg0 layoutFrame:(struct CGRect )arg1 ;
-(void)_invalidateAXSpriteIndexes;
-(void)_invalidateCursors;
-(void)_invalidateMainModel;
-(void)_invalidatePagedTimelineSpec;
-(void)_invalidateTimelineTranslationAnimator;
-(void)_updateAXSpriteIndexes;
-(void)_updateCursors;
-(void)_updateMainModel;
-(void)_updatePagedTimelineSpec;
-(void)_updateTimelineTranslationAnimator;
-(void)alphaDidChange;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)configureClipLayout:(id)arg0 ;
-(void)didUpdate;
-(void)didUpdateClipLayout:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)update;
-(void)updateClipsCornerRadius;
-(void)updateDisplayedTimeRange;
-(void)updateDisplayedTimeline;
-(void)updateDisplayedTimelineRect;
-(void)willUpdate;


@end


#endif