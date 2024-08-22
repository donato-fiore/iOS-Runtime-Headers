// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYSCROLLLAYOUT_H
#define PXSTORYSCROLLLAYOUT_H

@class NSString;
@protocol PXGScrollLayoutDelegate, PXChangeObserver, PXStoryScrollLayoutTargetContentOffsetAdjuster;


#import "PXGScrollLayout.h"
#import "PXStoryModel.h"
#import "PXStoryPagedScrollContentLayout.h"
#import "PXStoryStyleScrollContentLayout.h"

@interface PXStoryScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate, PXChangeObserver>

 {
    BOOL _isUpdating;
    ? _updateFlags;
    ? _postUpdateFlags;
    NSUInteger _scrollPositionUpdateReason;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) id *modelChangeOrigin; // ivar: _modelChangeOrigin
@property (readonly, nonatomic) PXStoryPagedScrollContentLayout *pagedScrollContentLayout; // ivar: _pagedScrollContentLayout
@property (nonatomic) BOOL scrollBeganAtTimelineEnd; // ivar: _scrollBeganAtTimelineEnd
@property (readonly, nonatomic) NSInteger scrollPositionComparedToEnd;
@property (readonly, nonatomic) PXStoryStyleScrollContentLayout *styleScrollContentLayout; // ivar: _styleScrollContentLayout
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PXStoryScrollLayoutTargetContentOffsetAdjuster> *targetContentOffsetAdjuster; // ivar: _targetContentOffsetAdjuster


-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)_invalidateContentScrollPositionWithReason:(NSUInteger)arg0 ;
-(void)_invalidateContentView;
-(void)_invalidateModelIsScrolling;
-(void)_invalidateModelScrollPosition;
-(void)_invalidatePostUpdateEntities:(NSUInteger)arg0 ;
-(void)_invalidateScrollDecelerationRate;
-(void)_invalidateScrollViewZPosition;
-(void)_invalidateWantsScrollView;
-(void)_updateContentScrollPosition;
-(void)_updateContentView;
-(void)_updateModelIsScrolling;
-(void)_updateModelScrollPosition;
-(void)_updateScrollDecelerationRate;
-(void)_updateScrollViewZPosition;
-(void)_updateWantsScrollView;
-(void)contentLayoutDidChange;
-(void)didUpdate;
-(void)isScrollingDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)scrollLayoutDidScroll:(id)arg0 ;
-(void)scrollLayoutWillBeginScrolling:(id)arg0 ;
-(void)scrollLayoutWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)update;
-(void)willUpdate;


@end


#endif