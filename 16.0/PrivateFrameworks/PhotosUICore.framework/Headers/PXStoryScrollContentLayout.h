// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYSCROLLCONTENTLAYOUT_H
#define PXSTORYSCROLLCONTENTLAYOUT_H

@protocol PXStoryScrollContentLayoutDelegate;


#import "PXGLayout.h"

@interface PXStoryScrollContentLayout : PXGLayout {
    ? _updateFlags;
    ? _delegateRespondsTo;
}


@property (weak, nonatomic) NSObject<PXStoryScrollContentLayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGPoint scrollOffset; // ivar: _scrollOffset
@property (nonatomic) UIEdgeInsets scrollableOutsets; // ivar: _scrollableOutsets


-(id)init;
-(struct CGPoint )_scrollOffsetForVisibleRectOrigin:(struct CGPoint )arg0 ;
-(struct CGPoint )_visibleRectOriginForScrollOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )scrollOffsetForScrollViewContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )scrollViewContentOffsetForScrollOffset:(struct CGPoint )arg0 ;
-(void)_invalidateContentSize;
-(void)_updateContentSize;
-(void)referenceSizeDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif