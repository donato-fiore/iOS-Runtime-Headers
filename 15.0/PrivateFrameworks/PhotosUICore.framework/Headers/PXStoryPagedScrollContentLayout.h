// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPAGEDSCROLLCONTENTLAYOUT_H
#define PXSTORYPAGEDSCROLLCONTENTLAYOUT_H

@class NSString;
@protocol PXGSolidColorSource, PXChangeObserver, PXStoryTimeline;


#import "PXGLayout.h"
#import "PXStoryModel.h"

@interface PXStoryPagedScrollContentLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PXStoryTimeline> *displayedTimeline; // ivar: _displayedTimeline
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interpageSpacing; // ivar: _interpageSpacing
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (nonatomic) NSInteger numberOfPages; // ivar: _numberOfPages
@property (nonatomic) CGFloat presentedPageWidth; // ivar: _presentedPageWidth
@property (nonatomic) ? presentedScrollPosition; // ivar: _presentedScrollPosition
@property (readonly) Class superclass;


-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)createAnchorForScrollingToPosition:(struct ? )arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(struct CGPoint )_offsetFromFirstPageForScrollingToPosition:(struct ? )arg0 visibleRect:(struct CGRect )arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_invalidateContent;
-(void)_invalidateDisplayedTimeline;
-(void)_invalidatePages;
-(void)_invalidatePresentedScrollPosition;
-(void)_updateContent;
-(void)_updateDisplayedTimeline;
-(void)_updatePages;
-(void)_updatePresentedScrollPosition;
-(void)adjustScrollTargetContentOffset:(struct CGPoint *)arg0 withVelocity:(struct CGPoint )arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif