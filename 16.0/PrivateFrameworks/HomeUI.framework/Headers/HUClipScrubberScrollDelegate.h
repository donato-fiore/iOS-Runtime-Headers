// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCLIPSCRUBBERSCROLLDELEGATE_H
#define HUCLIPSCRUBBERSCROLLDELEGATE_H

@class UICollectionView, NSString, HFCameraPlaybackEngine;
@protocol UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, HFCameraRecordingEvent;

#import <Foundation/Foundation.h>

#import "HUClipScrubberDataSource.h"

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>



@property (weak, nonatomic) UICollectionView *clipCollectionView; // ivar: _clipCollectionView
@property (retain, nonatomic) NSObject<HFCameraRecordingEvent> *currentEvent; // ivar: _currentEvent
@property (weak, nonatomic) HUClipScrubberDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) BOOL hasUserInteractedWithScrubber; // ivar: _hasUserInteractedWithScrubber
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastContentOffset; // ivar: _lastContentOffset
@property (nonatomic) CGFloat lastContentWidth; // ivar: _lastContentWidth
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (nonatomic, getter=isScrollingForward) BOOL scrollingForward; // ivar: _scrollingForward
@property (nonatomic) BOOL shouldIgnoreScrolling; // ivar: _shouldIgnoreScrolling
@property (readonly) Class superclass;
@property (nonatomic) CGFloat targetScrollOffset; // ivar: _targetScrollOffset
@property (nonatomic, getter=isUserScrubbing) BOOL userScrubbing; // ivar: _userScrubbing


-(BOOL)_doesPrecedingSpacerSpanMultipleDaysForEvent:(id)arg0 ;
-(BOOL)_shouldScrollBypassPlaybackEngineUpdate;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(float)playheadPosition;
-(id)_interpolatedDateFromEvent:(id)arg0 toEvent:(id)arg1 insideRect:(struct CGRect )arg2 atTimelinePosition:(float)arg3 ;
-(id)_selectedDateForAreaOfNoActivityAtPoint:(struct CGPoint )arg0 inScrollView:(id)arg1 ;
-(id)_selectedDateForEventInRect:(struct CGRect )arg0 ;
-(id)_selectedDateForTodayFromEvent:(id)arg0 percentDuration:(float)arg1 ;
-(id)_selectedDateForYesterdayFromPreviousEvent:(id)arg0 percentDuration:(float)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_handleOutOfBoundsTimelinePosition:(float)arg0 ;
-(void)_updateFamiliarFaceCell;
-(void)beginEditing;
-(void)dealloc;
-(void)finishEditing;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateCollectionView:(id)arg0 ;
-(void)updatePlaybackEngineDate:(id)arg0 ;


@end


#endif