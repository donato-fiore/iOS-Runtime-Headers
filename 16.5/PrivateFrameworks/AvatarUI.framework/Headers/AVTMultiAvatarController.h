// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTMULTIAVATARCONTROLLER_H
#define AVTMULTIAVATARCONTROLLER_H

@class NSNumber, UICollectionView, NSString, NSArray, UIView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarRecordDataSourceObserver, AVTNotifyingContainerViewDelegate, AVTAvatarDisplayingController, AVTAvatarListItem, AVTViewCarouselLayout, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTUILogger, AVTPresenterDelegate;

#import <Foundation/Foundation.h>

#import "AVTCarouselPlusButtonView.h"
#import "AVTViewSession.h"
#import "AVTCenteringCollectionViewDelegate.h"
#import "AVTZIndexEngagementListCollectionViewLayout.h"
#import "AVTAvatarRecordDataSource.h"
#import "AVTUIEnvironment.h"
#import "AVTAvatarListCell.h"
#import "AVTRenderingScope.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTTransitionCoordinator.h"

@interface AVTMultiAvatarController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarRecordDataSourceObserver, AVTNotifyingContainerViewDelegate, AVTAvatarDisplayingController>



@property (retain, nonatomic) AVTCarouselPlusButtonView *addItemView; // ivar: _addItemView
@property (retain, nonatomic) NSObject<AVTAvatarListItem> *addListItem; // ivar: _addListItem
@property (nonatomic) BOOL allowsCreate; // ivar: _allowsCreate
@property (retain, nonatomic) NSObject<AVTViewCarouselLayout> *avtViewLayout; // ivar: _avtViewLayout
@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (nonatomic) NSNumber *cachedCanCreateValue; // ivar: _cachedCanCreateValue
@property (retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // ivar: _centeringDelegate
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat decelerationRate; // ivar: _decelerationRate
@property (weak, nonatomic) NSObject<AVTAvatarDisplayingControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *displayedRecord; // ivar: _displayedRecord
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideImageForDisplayedRecord; // ivar: _hideImageForDisplayedRecord
@property (nonatomic) CGPoint lastContentOffset; // ivar: _lastContentOffset
@property (retain, nonatomic) AVTAvatarListCell *liveCell; // ivar: _liveCell
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (retain, nonatomic) NSArray *recordListItems; // ivar: _recordListItems
@property (readonly, nonatomic) AVTRenderingScope *renderingScope; // ivar: _renderingScope
@property (readonly) Class superclass;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // ivar: _thumbnailRenderer
@property (readonly, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // ivar: _transitionCoordinator
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)listItemsForAvatarRecords:(id)arg0 ;
+(id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize )arg0 boundsSize:(struct CGSize )arg1 environment:(id)arg2 ;
+(id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg0 size:(struct CGSize )arg1 avtViewAspectRatio:(struct CGSize )arg2 dataSource:(id)arg3 environment:(id)arg4 ;
-(BOOL)isViewLoaded;
-(BOOL)shouldCurrentlyDisplayedRecordTransitionToLive;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)listItemIndexForRecord:(id)arg0 ;
-(id)cellForRecordItem:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)getFirstItem;
-(id)indexPathForItemClosestToCenter;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 initialAVTViewLayout:(id)arg2 ;
-(id)listItemsForDisplay;
-(id)loadRecords;
-(id)recordForItem:(id)arg0 ;
-(void)buildCollectionViewAndConfigureLayoutIfNeeded;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)createAddItemViewIfNeeded;
-(void)createAvatar;
-(void)dataSource:(id)arg0 didAddRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dataSource:(id)arg0 didEditRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dataSource:(id)arg0 didRemoveRecord:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)displayAvatarForRecord:(id)arg0 animated:(BOOL)arg1 ;
-(void)layoutDidChangeWhileMoving:(BOOL)arg0 offset:(struct CGPoint )arg1 ;
-(void)loadRecordsIfNeeded;
-(void)loadView;
-(void)notifyDelegateForScrollingTowardItem:(id)arg0 ratio:(CGFloat)arg1 ;
-(void)notifyDelegateForScrollingTowardItemFromOffset:(struct CGPoint )arg0 ;
-(void)notifyingContainerViewDidChangeSize:(struct CGSize )arg0 ;
-(void)notifyingContainerViewWillChangeSize:(struct CGSize )arg0 ;
-(void)preloadAll;
-(void)prepareToTransitionToVisible:(BOOL)arg0 completionHandler:(*id)arg1 ;
-(void)prepareViewWithLayout:(id)arg0 ;
-(void)reloadData;
-(void)reloadRecordListItems;
-(void)scrollToDisplayedRecord;
-(void)scrollToViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollToViewForAvatarRecord:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)significantRecordChangeInDataSource:(id)arg0 ;
-(void)snapshotInBlock:(id)arg0 ;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)transitionCell:(id)arg0 indexPath:(id)arg1 toStartFocusingAnimated:(BOOL)arg2 session:(id)arg3 completionHandler:(id)arg4 ;
-(void)transitionCell:(id)arg0 toStopFocusingAnimated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)transitionCenterCellIfPresentToStartFocusing;
-(void)transitionCenterCellIfPresentToStopFocusingAnimated:(BOOL)arg0 ;
-(void)transitionCenterCellToStartFocusing:(id)arg0 indexPath:(id)arg1 ;
-(void)transitionCurrentDisplayedRecordAnimated:(BOOL)arg0 ;
-(void)updateCachedCanCreateValueIfNeeded;
-(void)updateDisplayedRecordIfNeeded;
-(void)useAVTViewFromSession:(id)arg0 withLayout:(id)arg1 ;


@end


#endif