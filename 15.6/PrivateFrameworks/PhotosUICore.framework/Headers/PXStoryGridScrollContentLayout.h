// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYGRIDSCROLLCONTENTLAYOUT_H
#define PXSTORYGRIDSCROLLCONTENTLAYOUT_H

@class NSString;
@protocol PXChangeObserver, PXStoryGridScrollContentLayoutDelegate, PXStoryTimeline;


#import "PXGLayout.h"
#import "PXStoryModel.h"

@interface PXStoryGridScrollContentLayout : PXGLayout <PXChangeObserver>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
    ? _delegateRespondsTo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXStoryGridScrollContentLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PXStoryTimeline> *displayedTimeline; // ivar: _displayedTimeline
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (nonatomic) CGPoint presentedScrollPosition; // ivar: _presentedScrollPosition
@property (readonly) Class superclass;


-(id)_createAnchorForScrollingWithOffsetProvider:(id)arg0 ;
-(id)createAnchorForScrollingToClipWithIdentifier:(NSInteger)arg0 ;
-(id)createAnchorForScrollingToPosition:(struct ? )arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(struct CGPoint )_offsetFromFirstPageForScrollingToClipWithIdentifier:(NSInteger)arg0 visibleRect:(struct CGRect )arg1 ;
-(struct CGPoint )_offsetFromFirstPageForScrollingToPosition:(struct ? )arg0 visibleRect:(struct CGRect )arg1 ;
-(void)_invalidateContent;
-(void)_invalidateDisplayedTimeline;
-(void)_invalidatePresentedScrollPosition;
-(void)_updateContent;
-(void)_updateDisplayedTimeline;
-(void)_updatePresentedScrollPosition;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif