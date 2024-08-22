// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYSCRUBBERSCROLLLAYOUT_H
#define PXSTORYSCRUBBERSCROLLLAYOUT_H

@class NSString;
@protocol PXGSolidColorSource, PXChangeObserver, PXGScrollLayoutDelegate, PXStoryTimeline;


#import "PXGLayout.h"
#import "PXStoryModel.h"
#import "PXStoryViewModel.h"

@interface PXStoryScrubberScrollLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver, PXGScrollLayoutDelegate>

 {
    BOOL _isUpdating;
    ? _updateFlags;
    unsigned int _firstPageSpriteIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PXStoryTimeline> *displayedTimeline; // ivar: _displayedTimeline
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) id *modelChangeOrigin; // ivar: _modelChangeOrigin
@property (nonatomic) NSInteger numberOfPages; // ivar: _numberOfPages
@property (nonatomic) ? presentedScrubberPosition; // ivar: _presentedScrubberPosition
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)createAnchorForScrollingToPosition:(struct ? )arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 model:(id)arg1 ;
-(struct CGPoint )_offsetFromFirstPageForScrollingToPosition:(struct ? )arg0 visibleRect:(struct CGRect )arg1 ;
-(void)_invalidateContent;
-(void)_invalidateCurrentScrollPosition;
-(void)_invalidateDisplayedTimeline;
-(void)_invalidateModelScrubberPosition;
-(void)_invalidatePages;
-(void)_invalidatePresentedScrubberPosition;
-(void)_updateContent;
-(void)_updateCurrentScrollPosition;
-(void)_updateDisplayedTimeline;
-(void)_updateModelScrubberPosition;
-(void)_updatePages;
-(void)_updatePresentedScrubberPosition;
-(void)adjustScrollTargetContentOffset:(struct CGPoint *)arg0 withVelocity:(struct CGPoint )arg1 ;
-(void)didUpdate;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)scrollLayoutDidEndScrolling:(id)arg0 ;
-(void)scrollLayoutDidScroll:(id)arg0 ;
-(void)scrollLayoutWillBeginScrolling:(id)arg0 ;
-(void)scrollLayoutWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)update;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif