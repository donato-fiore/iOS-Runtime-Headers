// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSPHOTOSVIEWCONTROLLER_H
#define CKDETAILSPHOTOSVIEWCONTROLLER_H

@class NSString, UIBarButtonItem, NSArray;
@protocol CKFeedCollectionViewLayoutDelegate, CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKQLPreviewControllerDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIGestureRecognizerDelegate, UICollectionViewDataSource, QLPreviewControllerDelegate, CKSharedAssetsControllerProtocol, CKSharedAssetsControllerDelegate;


#import "CKViewController.h"
#import "CKAttachmentCollectionView.h"
#import "CKFeedCollectionViewLayout.h"
#import "CKQLPreviewController.h"

@interface CKDetailsPhotosViewController : CKViewController <CKFeedCollectionViewLayoutDelegate, CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKQLPreviewControllerDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIGestureRecognizerDelegate, UICollectionViewDataSource, QLPreviewControllerDelegate, CKSharedAssetsControllerProtocol>



@property (retain, nonatomic) CKAttachmentCollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSharedAssetsControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBarButtonItem *deleteButton; // ivar: _deleteButton
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKFeedCollectionViewLayout *feedLayout; // ivar: _feedLayout
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInitialLoad) BOOL initialLoad; // ivar: _initialLoad
@property (retain, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (retain, nonatomic) UIBarButtonItem *parentRightBarButtonItem; // ivar: _parentRightBarButtonItem
@property (retain, nonatomic) CKQLPreviewController *qlPreviewController; // ivar: _qlPreviewController
@property (retain, nonatomic) UIBarButtonItem *saveButton; // ivar: _saveButton
@property (nonatomic, getter=isSelectingAttachments) BOOL selectingAttachments; // ivar: _selectingAttachments
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *visibleMediaObjects; // ivar: _visibleMediaObjects


-(BOOL)collectionView:(id)arg0 canPerformAction:(SEL)arg1 forItemAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldHideHeaderInSection:(NSInteger)arg2 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldHideSection:(NSInteger)arg2 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldJoinSection:(NSInteger)arg2 withSection:(NSInteger)arg3 ;
-(BOOL)collectionView:(id)arg0 layout:(id)arg1 shouldShowCaptionForTileAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldShowMenuForItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isDisplayingAttachmentContent;
-(BOOL)previewController:(id)arg0 canShareItem:(id)arg1 ;
-(BOOL)previewController:(id)arg0 shouldOpenURL:(id)arg1 forPreviewItem:(id)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 spacingBetweenSection:(NSInteger)arg2 andHeaderForGroupID:(id)arg3 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 typeForSection:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)assetType;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 forFeedLayout:(id)arg1 ;
-(NSUInteger)numberOfSectionsInFeedLayout:(id)arg0 ;
-(id)_collectionView:(id)arg0 dragItemsForItemAtIndexPath:(id)arg1 ;
-(id)_iconForFileURL:(id)arg0 UTIType:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 batchIDForTileAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 groupIDForSection:(NSInteger)arg2 ;
-(id)committedViewControllerForPreviewViewController:(id)arg0 ;
-(id)initWithAttachmentItems:(id)arg0 ;
-(id)invisibleInkEffectControllerForPreviewController:(id)arg0 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 uncroppedSourceFrame:(struct CGRect *)arg2 realSize:(struct CGSize *)arg3 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)selectedAttachmentIndexes;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 captionSizeForTileAtIndexPath:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 headerSizeForGroupID:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 imageSizeForTileAtIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 mininumSizeForTileAtIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForFooterInSection:(NSInteger)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForHeaderOfSections:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForRowAtIndexPath:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForThumbnailInSection:(NSInteger)arg2 ;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(struct CKFeedSeparatorMetrics )collectionView:(id)arg0 layout:(id)arg1 metricsForSeparatorBetweenRowAtIndexPath:(id)arg2 andRowAtIndexPath:(id)arg3 proposedMetrics:(struct CKFeedSeparatorMetrics )arg4 ;
-(struct CKFeedSeparatorMetrics )collectionView:(id)arg0 layout:(id)arg1 metricsForSeparatorBetweenSection:(NSInteger)arg2 andSection:(NSInteger)arg3 proposedMetrics:(struct CKFeedSeparatorMetrics )arg4 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 contentInsetsForSection:(NSInteger)arg2 ;
-(void)_configureCell:(id)arg0 withCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)_deleteAttachments:(id)arg0 ;
-(void)_deleteSelectedAttachments:(id)arg0 ;
-(void)_faultInAttachments;
-(void)_invalidateCaches;
-(void)_prewarmNextChunk;
-(void)_saveAttachments:(id)arg0 ;
-(void)_saveSelectedAttachments:(id)arg0 ;
-(void)_updateToolbar;
-(void)attachmentCellTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 referenceMaximumLength:(*CGFloat)arg2 minimumNumberOfTilesToOmit:(*NSInteger)arg3 forSection:(NSInteger)arg4 ;
-(void)collectionView:(id)arg0 performAction:(SEL)arg1 forItemAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)dealloc;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)parentScrollViewDidScroll:(struct CGPoint )arg0 ;
-(void)performAction:(SEL)arg0 forAttachmentCell:(id)arg1 ;
-(void)previewControllerDidCancelDismiss:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)reloadData;
-(void)selectAttachments:(id)arg0 ;
-(void)updateAttachmentItems:(id)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif