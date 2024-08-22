// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSIMPLEAVATARPICKER_H
#define AVTSIMPLEAVATARPICKER_H

@class UICollectionView, NSString, NSMutableDictionary, UIView;
@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker, AVTAvatarPickerDelegate, AVTStickerViewControllerImageDelegate, AVTPresenterDelegate, AVTStickerTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTEdgeDisappearingCollectionViewLayout.h"
#import "AVTAvatarPickerDataSource.h"
#import "AVTSimpleAvatarPickerHeaderView.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTImageStore.h"
#import "AVTRenderingScope.h"
#import "AVTViewSessionProvider.h"

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker>



@property (nonatomic) BOOL allowEditing; // ivar: _allowEditing
@property (weak, nonatomic) NSObject<AVTAvatarPickerDelegate> *avatarPickerDelegate; // ivar: avatarPickerDelegate
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) AVTEdgeDisappearingCollectionViewLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) AVTAvatarPickerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) AVTSimpleAvatarPickerHeaderView *headerView; // ivar: _headerView
@property (weak, nonatomic) NSObject<AVTStickerViewControllerImageDelegate> *imageDelegate; // ivar: _imageDelegate
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) AVTImageStore *imageStore; // ivar: _imageStore
@property (retain, nonatomic) NSMutableDictionary *itemsToTasksMap; // ivar: _itemsToTasksMap
@property (nonatomic) CGFloat minimumInteritemSpacing; // ivar: _minimumInteritemSpacing
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (readonly, nonatomic) AVTRenderingScope *renderingScope; // ivar: _renderingScope
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<AVTStickerTaskScheduler> *taskScheduler; // ivar: _taskScheduler
@property (retain, nonatomic) UIView *view; // ivar: _view
@property (readonly, nonatomic) AVTViewSessionProvider *viewSessionProvider; // ivar: _viewSessionProvider


-(BOOL)canCreateAvatar;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)isItemAtIndexPathOffscreen:(id)arg0 ;
-(BOOL)shouldShowHeaderButton;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)indexForSelectedAvatar;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)actionsModelForRecord:(id)arg0 ;
-(id)avatarActionsViewController:(id)arg0 recordUpdateForDeletingRecord:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)currentCellForRecordItem:(id)arg0 atIndexPath:(id)arg1 displaySessionUUID:(id)arg2 previousCell:(id)arg3 ;
-(id)currentRenderingTaskForRecordItem:(SEL)arg0 ;
-(id)initWithDataSource:(id)arg0 recordImageProvider:(id)arg1 avtViewSessionProvider:(id)arg2 taskScheduler:(id)arg3 allowEditing:(BOOL)arg4 ;
-(id)initWithStore:(id)arg0 environment:(id)arg1 allowAddItem:(BOOL)arg2 ;
-(id)selectedAvatar;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )itemSize;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)avatarActionsViewControllerDidFinish:(id)arg0 ;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)cancelCurrentRenderingTaskForRecordItem:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)deselectPreviousSelectedItemExcludingIndexPath:(id)arg0 ;
-(void)loadView;
-(void)notifyingContainerViewDidChangeSize:(struct CGSize )arg0 ;
-(void)notifyingContainerViewWillChangeSize:(struct CGSize )arg0 ;
-(void)presentActionsForAvatarForPPT:(id)arg0 ;
-(void)presentActionsForAvatarRecord:(id)arg0 ;
-(void)presentMemojiEditorForCreation;
// -(void)registerRenderingTask:(id)arg0 forRecordItem:(unk)arg1  ;
-(void)reloadData;
-(void)reloadDataSource;
-(void)renderThumbnailsIfNeeded;
// -(void)scheduleRenderingTask:(id)arg0 forRecordItem:(unk)arg1  ;
-(void)selectAvatarRecordWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)unregisterCurrentRenderingTaskForRecordItem:(id)arg0 ;
-(void)updateCell:(id)arg0 withImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateHeaderButtonForSelectedAvatar:(id)arg0 invalidateLayout:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)wrapAndPresentViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif