// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICGALLERYATTACHMENTVIEW_H
#define ICGALLERYATTACHMENTVIEW_H

@class ICCollapsibleActivityView, UICollectionView, ICThumbnailDataCache, NSIndexPath, UILongPressGestureRecognizer, NSArray, UITapGestureRecognizer, UILabel;
@protocol NSObject;


#import "ICAttachmentView.h"
#import "ICGalleryAttachmentViewCollectionViewLayout.h"
#import "ICGalleryAttachmentEditorController.h"
#import "ICAttachmentPresenter.h"

@interface ICGalleryAttachmentView : ICAttachmentView

@property (retain, nonatomic) ICCollapsibleActivityView *activityView; // ivar: _activityView
@property (retain, nonatomic) NSObject<NSObject> *attachmentDidLoadObserver; // ivar: _attachmentDidLoadObserver
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) ICThumbnailDataCache *collectionViewCache; // ivar: _collectionViewCache
@property (retain, nonatomic) ICGalleryAttachmentViewCollectionViewLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryEditorController; // ivar: _galleryEditorController
@property (retain, nonatomic) ICAttachmentPresenter *iPhoneSystemPaperAttachmentPresenter; // ivar: _iPhoneSystemPaperAttachmentPresenter
@property (retain, nonatomic) NSIndexPath *indexPathForPreviewing; // ivar: _indexPathForPreviewing
@property (retain, nonatomic) NSIndexPath *indexPathForZoomTransition; // ivar: _indexPathForZoomTransition
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) NSIndexPath *movingIndexPath; // ivar: _movingIndexPath
@property (retain, nonatomic) NSObject<NSObject> *previewImagesDidUpdateObserver; // ivar: _previewImagesDidUpdateObserver
@property (retain, nonatomic) NSArray *subAttachmentItems; // ivar: _subAttachmentItems
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)effectiveAspectRatioForWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
+(CGFloat)topButtonHeight;
+(id)subAttachmentItemsForGalleryAttachment:(id)arg0 ;
+(id)titleForGalleryAttachment:(id)arg0 ;
+(struct CGSize )sizeOfViewForAttachment:(id)arg0 textViewContentWidth:(CGFloat)arg1 existingView:(id)arg2 ;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)galleryAttachmentViewIsForManualRendering;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldAddMenuLongPressGesture;
-(BOOL)shouldAddTapGesture;
-(BOOL)updateItems;
-(CGFloat)galleryAttachmentViewItemHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)attachmentPresenter:(id)arg0 transitionViewForAttachment:(id)arg1 ;
-(id)attachmentPresenter:(id)arg0 transitionViewForIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)galleryAttachmentViewCellImageCache;
-(id)indexPathForItemClosestToPoint:(struct CGPoint )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didChangeAttachmentTitle;
-(void)didChangeMergeableData;
-(void)didTapTopOfGalleryView:(id)arg0 ;
-(void)didUpdatePreviewImages;
-(void)didUpdateSubAttachmentAtIndex:(NSInteger)arg0 sizeDidChange:(BOOL)arg1 ;
-(void)didUpdateSubAttachmentItems;
-(void)galleryAttachmentEditorControllerDeleteAttachment;
-(void)galleryAttachmentEditorControllerDidDismiss;
-(void)handleDeleteAttachmentFromPresenter:(id)arg0 ;
-(void)invalidateCollectionViewLayout;
-(void)invalidateCollectionViewLayoutWithNewItemHeight:(CGFloat)arg0 ;
-(void)openAttachment;
-(void)openAttachmentAtIndex:(NSUInteger)arg0 ;
-(void)respondToLongPressReorderingGesture:(id)arg0 ;
-(void)scrollCollectionViewToIndexPath:(id)arg0 ;
-(void)setAttachment:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlightColor:(id)arg0 ;
-(void)setHighlightPatternRegex:(id)arg0 ;
-(void)setupCollectionViewIfNecessary;
-(void)teardown;
-(void)updateActivityView;
-(void)updateAttachmentTitleLabel;
-(void)updateItemForObjectID:(id)arg0 ;
-(void)updateItemsAndLayout;


@end


#endif