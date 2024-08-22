// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERSHEETCONTROLLER_H
#define AVTSTICKERSHEETCONTROLLER_H

@class UICollectionView, NSString, UIImage, UIView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTStickerSheetController, AVTAvatarRecord, AVTStickerSheetControllerDelegate, AVTStickerDisclosureValidationDelegate, AVTPresenterDelegate, AVTStickerTaskScheduler;

#import <Foundation/Foundation.h>

#import "AVTStickerSheetModel.h"

@interface AVTStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTStickerSheetController>



@property (readonly, nonatomic) BOOL allowsPeel; // ivar: _allowsPeel
@property (nonatomic) BOOL areAllStickersRendered; // ivar: _areAllStickersRendered
@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord;
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTStickerSheetControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate; // ivar: disclosureValidationDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPageVisible; // ivar: _isPageVisible
@property (retain, nonatomic) AVTStickerSheetModel *model; // ivar: _model
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (nonatomic) UIEdgeInsets sectionInsets; // ivar: _sectionInsets
@property (nonatomic) BOOL showPrereleaseSticker; // ivar: _showPrereleaseSticker
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<AVTStickerTaskScheduler> *taskScheduler; // ivar: _taskScheduler
@property (retain, nonatomic) UIView *view; // ivar: _view


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(CGFloat)numberOfItemsPerRow;
-(CGFloat)topPadding;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)firstStickerView;
-(id)initWithStickerSheetModel:(id)arg0 taskScheduler:(id)arg1 allowsPeel:(BOOL)arg2 ;
-(id)placeholderProvider:(SEL)arg0 ;
-(struct CGPoint )maxedContentOffset:(struct CGPoint )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )minimumContentSizeForSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)clearStickerRendererIfNeeded;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)discardStickerItems;
-(void)loadView;
-(void)notifyingContainerViewDidChangeSize:(struct CGSize )arg0 ;
-(void)notifyingContainerViewWillChangeSize:(struct CGSize )arg0 ;
-(void)reloadCollectionViewItemForStickerItem:(id)arg0 ;
-(void)scheduleSheetPlaceholderTask:(id)arg0 ;
// -(void)scheduleSheetStickerTask:(id)arg0 withIndexPath:(unk)arg1  ;
-(void)scrollToContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)sheetDidDisappear;
-(void)sheetWillAppear;
-(void)startAllSchedulerTasks;
-(void)startAllSchedulerTasksExcludingVisibleIndexPaths:(id)arg0 ;
-(void)stickerCellDidPeelSticker:(id)arg0 ;
-(void)stickerCellDidTapSticker:(id)arg0 ;
-(void)updateItem:(id)arg0 withStickerResource:(id)arg1 reloadCell:(BOOL)arg2 ;


@end


#endif