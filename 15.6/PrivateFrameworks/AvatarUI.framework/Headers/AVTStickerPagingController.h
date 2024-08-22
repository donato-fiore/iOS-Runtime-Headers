// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERPAGINGCONTROLLER_H
#define AVTSTICKERPAGINGCONTROLLER_H

@class UICollectionView, NSString, UICollectionViewCell, NSMutableDictionary, UIView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTStickerSheetControllerDelegate, AVTNotifyingContainerViewDelegate, AVTAvatarActionsViewControllerDelegate, AVTObjectViewController, AVTAvatarPicker, UICollectionViewDataSourcePrefetching, AVTAvatarPickerDelegate, AVTResourceCache, AVTStickerPagingControllerDelegate, AVTStickerDisclosureValidationDelegate, OS_dispatch_queue, AVTPresenterDelegate, AVTStickerSelectionDelegate, AVTStickerSheetControllerProvider, AVTStickerTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTAvatarRecordDataSource.h"
#import "AVTUIEnvironment.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTStickerConfigurationProvider.h"
#import "AVTUIStickerGeneratorPool.h"

@interface AVTStickerPagingController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTStickerSheetControllerDelegate, AVTNotifyingContainerViewDelegate, AVTAvatarActionsViewControllerDelegate, AVTObjectViewController, AVTAvatarPicker, UICollectionViewDataSourcePrefetching>



@property (readonly, nonatomic) BOOL allowsPeel; // ivar: _allowsPeel
@property (weak, nonatomic) NSObject<AVTAvatarPickerDelegate> *avatarPickerDelegate; // ivar: avatarPickerDelegate
@property (readonly, nonatomic) NSObject<AVTResourceCache> *cache; // ivar: _cache
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) AVTAvatarRecordDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTStickerPagingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate; // ivar: _disclosureValidationDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // ivar: _encodingQueue
@property (nonatomic) CGPoint endDraggingTargetContentOffset; // ivar: _endDraggingTargetContentOffset
@property (retain, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSString *focusedPageRecordIdentifier; // ivar: _focusedPageRecordIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) BOOL isResizing; // ivar: _isResizing
@property (retain, nonatomic) UICollectionViewCell *lastDeletedCell; // ivar: _lastDeletedCell
@property (nonatomic) UIEdgeInsets pageContentInsets; // ivar: _pageContentInsets
@property (nonatomic) CGPoint pageContentOffset; // ivar: _pageContentOffset
@property (retain, nonatomic) NSMutableDictionary *pageForRecords; // ivar: _pageForRecords
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // ivar: _renderingQueue
@property (retain, nonatomic) NSString *selectedStickerIdentifier; // ivar: _selectedStickerIdentifier
@property (readonly, nonatomic) AVTStickerConfigurationProvider *stickerConfigurationProvider; // ivar: _stickerConfigurationProvider
@property (retain, nonatomic) AVTUIStickerGeneratorPool *stickerGeneratorPool; // ivar: _stickerGeneratorPool
@property (weak, nonatomic) NSObject<AVTStickerSelectionDelegate> *stickerSelectionDelegate; // ivar: _stickerSelectionDelegate
@property (weak, nonatomic) NSObject<AVTStickerSheetControllerProvider> *stickerSheetControllerProvider; // ivar: _stickerSheetControllerProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<AVTStickerTaskScheduler> *taskScheduler; // ivar: _taskScheduler
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)stickerCacheWithEnvironment:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)pageIndexForAvatarRecordIdentifier:(id)arg0 ;
-(NSInteger)pageIndexForAvatarRecordIdentifierForPPT:(id)arg0 ;
-(id)avatarActionsViewController:(id)arg0 recordUpdateForDeletingRecord:(id)arg1 ;
-(id)centeredPageWithOffset:(struct CGPoint )arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)firstPageItemView;
-(id)initWithRecordDataSource:(id)arg0 recordImageProvider:(id)arg1 stickerConfigurationProvider:(id)arg2 taskScheduler:(id)arg3 environment:(id)arg4 allowsPeel:(BOOL)arg5 ;
-(id)reloadSheetControllerForRecord:(id)arg0 ;
-(id)sheetControllerAtIndex:(NSInteger)arg0 ;
-(id)sheetControllerForRecord:(id)arg0 ;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)avatarActionsViewControllerDidFinish:(id)arg0 ;
-(void)cancelPrefetchingDataForRecord:(id)arg0 ;
-(void)clearStickerSelection;
-(void)collectionView:(id)arg0 cancelPrefetchingForItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)deletePageForRecord:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)didEndDisplaying;
-(void)insertPageForRecord:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)loadView;
-(void)notifyingContainerViewDidChangeSize:(struct CGSize )arg0 ;
-(void)notifyingContainerViewWillChangeSize:(struct CGSize )arg0 ;
-(void)prefetchDataForRecord:(id)arg0 ;
-(void)reloadData;
-(void)reloadPageForRecord:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)scrollToAvatarWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollToPageAtIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectAvatarRecordWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)stickerSheetController:(id)arg0 didFinishRenderingStickersForRecord:(id)arg1 ;
-(void)stickerSheetController:(id)arg0 didInteractWithStickerItem:(id)arg1 atIndex:(NSInteger)arg2 byPeeling:(BOOL)arg3 ;
-(void)stickerSheetController:(id)arg0 didScrollToContentOffset:(struct CGPoint )arg1 ;
-(void)stickerSheetController:(id)arg0 scrollView:(id)arg1 willEndDraggingWithTargetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateForEndingScrollWithTargetContentOffset:(struct CGPoint )arg0 ;
-(void)willEndDisplaying;
-(void)willStartDisplaying;
-(void)wrapAndPresentViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif