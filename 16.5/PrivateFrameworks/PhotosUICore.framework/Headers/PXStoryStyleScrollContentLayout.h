// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSTYLESCROLLCONTENTLAYOUT_H
#define PXSTORYSTYLESCROLLCONTENTLAYOUT_H

@class NSString;
@protocol PXChangeObserver;


#import "PXGLayout.h"
#import "PXStoryModel.h"

@interface PXStoryStyleScrollContentLayout : PXGLayout <PXChangeObserver>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat focusOffset; // ivar: _focusOffset
@property (readonly, nonatomic) NSInteger focusedStyleIndex; // ivar: _focusedStyleIndex
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly) Class superclass;


-(id)createAnchorForScrollingToStyleFocus:(CGFloat)arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)_invalidateContent;
-(void)_invalidateFocusedStyle;
-(void)_updateContent;
-(void)_updateFocusedStyle;
-(void)adjustScrollTargetContentOffset:(struct CGPoint *)arg0 withVelocity:(struct CGPoint )arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif