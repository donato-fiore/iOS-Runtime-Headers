// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSHAREDCONTENTSVIEWCONTROLLER_H
#define CKSHAREDCONTENTSVIEWCONTROLLER_H

@class UIViewController, NSArray, UICollectionView, UICollectionViewFlowLayout, NSString, UIBarButtonItem, UIView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, CKQLPreviewControllerDelegate, UIGestureRecognizerDelegate, CKSharedContentsCollectionViewCellDelegate, CKSharedAssetsControllerProtocol, QLPreviewControllerDelegate, CKSharedAssetsControllerDelegate;


#import "CKQLDetailsPreviewController.h"

@interface CKSharedContentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, CKQLPreviewControllerDelegate, UIGestureRecognizerDelegate, CKSharedContentsCollectionViewCellDelegate, CKSharedAssetsControllerProtocol, QLPreviewControllerDelegate>



@property (retain, nonatomic) NSArray *attachmentItems; // ivar: _attachmentItems
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionviewLayout; // ivar: _collectionviewLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSharedAssetsControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBarButtonItem *deleteButton; // ivar: _deleteButton
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *parentRightBarButtonItemsToRestore; // ivar: _parentRightBarButtonItemsToRestore
@property (retain, nonatomic) CKQLDetailsPreviewController *qlPreviewController; // ivar: _qlPreviewController
@property (retain, nonatomic) UIBarButtonItem *saveButton; // ivar: _saveButton
@property (nonatomic, getter=isSelectingAttachments) BOOL selectingAttachments; // ivar: _selectingAttachments
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *topmostMarkerView; // ivar: _topmostMarkerView


-(BOOL)collectionView:(id)arg0 canPerformAction:(SEL)arg1 forItemAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldShowMenuForItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isDisplayingAttachmentContent;
-(BOOL)isJ99LandscapeModeFullScreen;
-(BOOL)previewController:(id)arg0 shouldOpenURL:(id)arg1 forPreviewItem:(id)arg2 ;
-(CGFloat)cellAspectRatio;
-(CGFloat)paddingLeftRightForCell;
-(CGFloat)paddingTopBottomForCell;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsInRow;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)assetType;
-(id)_collectionView:(id)arg0 dragItemsForItemAtIndexPath:(id)arg1 ;
-(id)avatarView:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)committedViewControllerForPreviewViewController:(id)arg0 ;
-(id)initWithAttachmentItems:(id)arg0 ;
-(id)invisibleInkEffectControllerForPreviewController:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 uncroppedSourceFrame:(struct CGRect *)arg2 realSize:(struct CGSize *)arg3 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)selectedAttachmentIndexes;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(void)cancelSelectingContents:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performAction:(SEL)arg1 forItemAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)dealloc;
-(void)deleteContents:(id)arg0 ;
-(void)deleteSelectedContents:(id)arg0 ;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)parentScrollViewDidScroll:(struct CGPoint )arg0 ;
-(void)performAction:(SEL)arg0 forSharedContentsCollectionViewCell:(id)arg1 ;
-(void)previewControllerDidCancelDismiss:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)saveSelectedContents:(id)arg0 ;
-(void)setupToolbar;
-(void)sharedContentsCollectionViewCellDidTap:(id)arg0 ;
-(void)teardownToolbar;
-(void)updateAttachmentItems:(id)arg0 ;
-(void)updateToolbar;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif