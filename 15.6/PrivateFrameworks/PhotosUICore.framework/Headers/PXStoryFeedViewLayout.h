// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDVIEWLAYOUT_H
#define PXSTORYFEEDVIEWLAYOUT_H

@class NSString;
@protocol PXGScrollLayoutDelegate;


#import "PXGScrollLayout.h"
#import "PXStoryFeedContentLayout.h"
#import "PXStoryFeedViewModel.h"

@interface PXStoryFeedViewLayout : PXGScrollLayout <PXGScrollLayoutDelegate>

 {
    ? _updateFlags;
    BOOL _isClearingLastVisibleAreaAnchoringInformation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryFeedContentLayout *feedContentLayout; // ivar: _feedContentLayout
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel; // ivar: _viewModel


-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSUInteger)contentChangeTrend;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(void)_invalidateAnchorForVisibleArea;
-(void)_invalidateContentSize;
-(void)_invalidateScrollParameters;
-(void)_updateAnchorForVisibleArea;
-(void)_updateContentSize;
-(void)_updateScrollParameters;
-(void)clearLastVisibleAreaAnchoringInformation;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)scrollLayoutWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)update;


@end


#endif