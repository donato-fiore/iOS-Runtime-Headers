// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVISUALIDENTITYPICKERVIEWCONTROLLER_H
#define CNVISUALIDENTITYPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, UICollectionView;
@protocol UINavigationControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, CNPhotoPickerHeaderViewDelegate, UIAdaptivePresentationControllerDelegate, CNAvatarEditingManagerDelegate, AVTAvatarEditorViewControllerDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, CNPhotoPickerProviderGroupDelegate, CNPhotoPickerActionsViewControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate, CNVisualIdentityPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate;


#import "CNPhotoPickerActionsViewController.h"
#import "CNAvatarEditingManager.h"
#import "CNContactStyle.h"
#import "CNPhotoPickerDataSource.h"
#import "CNPhotoPickerProviderItem.h"
#import "CNVisualIdentityEditablePrimaryAvatarViewController.h"
#import "CNPhotoPickerHeaderView.h"
#import "CNVisualIdentity.h"

@interface CNVisualIdentityPickerViewController : UIViewController <UINavigationControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, CNPhotoPickerHeaderViewDelegate, UIAdaptivePresentationControllerDelegate, CNAvatarEditingManagerDelegate, AVTAvatarEditorViewControllerDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, CNPhotoPickerProviderGroupDelegate, CNPhotoPickerActionsViewControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate>



@property (retain, nonatomic) CNPhotoPickerActionsViewController *actionsViewController; // ivar: _actionsViewController
@property (nonatomic) BOOL allowRotation; // ivar: _allowRotation
@property (retain, nonatomic) NSString *assignActionTitleOverride; // ivar: _assignActionTitleOverride
@property (retain, nonatomic) CNAvatarEditingManager *avatarEditingManager; // ivar: _avatarEditingManager
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CNContactStyle *contactStyle; // ivar: _contactStyle
@property (readonly, nonatomic) CNPhotoPickerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVisualIdentityPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNPhotoPickerProviderItem *duplicatingProviderItem; // ivar: _duplicatingProviderItem
@property (retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editablePrimaryAvatarController; // ivar: _editablePrimaryAvatarController
@property (retain, nonatomic) CNPhotoPickerProviderItem *editingProviderItem; // ivar: _editingProviderItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNPhotoPickerHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) CNPhotoPickerProviderItem *lastSelectedProviderItem; // ivar: _lastSelectedProviderItem
@property (retain, nonatomic) CNVisualIdentity *pendingVisualIdentity; // ivar: _pendingVisualIdentity
@property (weak, nonatomic) NSObject<CNVisualIdentityPickerPresenterDelegate> *presenterDelegate; // ivar: _presenterDelegate
@property (nonatomic) BOOL shouldUpdateEmojiSuggestions; // ivar: _shouldUpdateEmojiSuggestions
@property (readonly) Class superclass;


+(BOOL)canShowAvatarEditor;
+(BOOL)canShowPhotoPickerForView:(id)arg0 withTraitCollection:(id)arg1 ;
+(CGFloat)itemsPerRowForWidth:(CGFloat)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)imagePickerForContact:(id)arg0 ;
+(id)imagePickerForGroupIdentity:(id)arg0 ;
+(id)imagePickerForVisualIdentity:(id)arg0 ;
+(id)log;
+(id)makeDescriptorForRequiredKeys;
+(id)navigationControllerForPicker:(id)arg0 ;
+(struct CGSize )defaultContentSize;
+(struct CGSize )defaultItemSize;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)hasPendingChanges;
-(BOOL)isEditingOrDuplicatingItem;
-(BOOL)isModalInPresentation;
-(BOOL)isPresentingModalViewController;
-(CGFloat)textFieldFontSize;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)defaultModalPresentationStyle;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contactImageForCurrentActiveItem;
-(id)createImagePickerForEditingImageData:(id)arg0 withCropRect:(struct CGRect )arg1 ;
-(id)initWithPhotosDataSource:(id)arg0 style:(id)arg1 allowRotation:(BOOL)arg2 ;
-(id)insertNewItem:(id)arg0 toGroupType:(NSInteger)arg1 updateActive:(BOOL)arg2 ;
-(id)insertNewItem:(id)arg0 toGroupType:(NSInteger)arg1 updateActive:(BOOL)arg2 scrollToItem:(BOOL)arg3 ;
-(id)photoPickerNavigationControllerForRootController:(id)arg0 ;
-(id)providerItemFromPhotoPickerInfo:(id)arg0 ;
-(id)visualIdentity;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)avatarEditingManager:(id)arg0 didFinishWithProviderItem:(id)arg1 ;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)buildCollectionView;
-(void)buildHeaderView;
-(void)cancel:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)confirmCancelAction;
-(void)deleteExistingItem:(id)arg0 ;
-(void)deleteItemFromRecentsImageStore:(id)arg0 ;
-(void)didCancelEditingProviderItemFromViewController:(id)arg0 ;
-(void)didSelectSuggestionsAddItemAtIndexPath:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)editableAvatarViewController:(id)arg0 didUpdateWithProviderItem:(id)arg1 ;
-(void)handleAddEmojiItemSelectedWithIndexPath:(id)arg0 ;
-(void)headerActionPressedAtIndexPath:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)initializeHeaderView;
-(void)photoPickerActionsViewController:(id)arg0 didPerformAction:(NSInteger)arg1 withProviderItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)photoPickerActionsViewControllerDidFinish:(id)arg0 ;
-(void)photoPickerHeaderView:(id)arg0 didUpdateIdentityNameTextField:(id)arg1 withText:(id)arg2 ;
-(void)photoPickerHeaderViewDidReceiveDroppedImageData:(id)arg0 ;
-(void)photoPickerHeaderViewDidTapClearAvatarImageButton:(id)arg0 ;
-(void)photoPickerProviderGroup:(id)arg0 didUpdateItem:(id)arg1 ;
-(void)photoPickerProviderGroupDidUpdate:(id)arg0 ;
-(void)presentActionsViewControllerForProviderItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)presentCameraImagePicker;
-(void)presentDismissConfirmation;
-(void)presentEditImagePickerForImageData:(id)arg0 cropRect:(struct CGRect )arg1 fromViewController:(id)arg2 ;
-(void)presentEditItemViewController:(id)arg0 fromViewController:(id)arg1 ;
-(void)presentEmojiEditor;
-(void)presentImagePicker:(id)arg0 withStyle:(NSInteger)arg1 fromViewController:(id)arg2 ;
-(void)presentLibraryImagePickerForIndexPath:(id)arg0 ;
-(void)presentMonogramEditorFromIndexPath:(id)arg0 ;
-(void)presentVisualIdentityItemEditorForItem:(id)arg0 fromViewController:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)processSelectionForSuggestionsProviderItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)reloadItemsForUpdatedSuggestionsGroup:(id)arg0 atSectionIndex:(NSInteger)arg1 ;
-(void)saveItemToRecentsImageStore:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectItem:(id)arg0 presentFromViewControllerIfNeeded:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)setSuggestionsProviderItemAsActiveItem:(id)arg0 ;
-(void)showAvatarCropAndScaleForItem:(id)arg0 fromViewController:(id)arg1 ;
-(void)showAvatarEditorForCreation;
-(void)showAvatarPosePickerFromItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)updateActiveIndexPath:(id)arg0 ;
-(void)updateActiveIndexPath:(id)arg0 reload:(BOOL)arg1 ;
-(void)updateActiveIndexPathForUpdatedSuggestionsGroup:(id)arg0 atSectionIndex:(NSInteger)arg1 ;
-(void)updateDoneButtonEnabledState;
-(void)updateDoneButtonEnabledStateForEditingProviderItem:(id)arg0 ;
-(void)updateEmojiSuggestionsForUpdatedVisualIdentity:(id)arg0 locale:(id)arg1 ;
-(void)updateForSelectedProviderItem:(id)arg0 ;
-(void)updateHeaderViewAvatar;
-(void)updateInjectedItemsSectionForProviderItem:(id)arg0 ;
-(void)updateMonogramsForUpdatedVisualIdentity:(id)arg0 ;
-(void)updateVisualIdentityWithName:(id)arg0 locale:(id)arg1 ;
-(void)updateVisualIdentityWithProviderItem:(id)arg0 ;
-(void)viewController:(id)arg0 didSelectUpdatedProviderItem:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)visualIdentityEditorController:(id)arg0 didFinishWithProviderItem:(id)arg1 ;
-(void)visualIdentityEditorControllerDidCancel:(id)arg0 ;


@end


#endif