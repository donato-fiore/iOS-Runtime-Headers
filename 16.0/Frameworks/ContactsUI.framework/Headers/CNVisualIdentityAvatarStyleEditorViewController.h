// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVISUALIDENTITYAVATARSTYLEEDITORVIEWCONTROLLER_H
#define CNVISUALIDENTITYAVATARSTYLEEDITORVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, NSString, UICollectionView, NSArray;
@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNVisualIdentityAvatarStyleEditorViewControllerDelegate;


#import "CNVisualIdentityEditablePrimaryAvatarViewController.h"
#import "CNPhotoPickerProviderItem.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNVisualIdentityAvatarStyleEditorViewController : UIViewController <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>



@property (retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint; // ivar: _avatarViewSizeConstraint
@property (retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint; // ivar: _avatarViewTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVisualIdentityAvatarStyleEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController; // ivar: _editableAvatarViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNPhotoPickerProviderItem *providerItem; // ivar: _providerItem
@property (retain, nonatomic) UICollectionView *styleCollectionView; // ivar: _styleCollectionView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *variantProviderItems; // ivar: _variantProviderItems
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg0 ;
-(BOOL)isEmojiProviderItemType;
-(BOOL)shouldBeginEditing;
-(CGFloat)editableAvatarViewEdgeLength;
-(CGFloat)fontSizeForContainerSize:(CGFloat)arg0 ;
-(CGFloat)textFieldFontSize;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsPerRow;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithProviderItem:(id)arg0 variantsManager:(id)arg1 ;
-(id)updatedProviderItem;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)beginEditingAvatar;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didTapEditableAvatar:(id)arg0 ;
-(void)dismissEmojiKeyboardIfNeeded;
-(void)dismissTextKeyboardIfNeeded;
-(void)editableAvatarViewController:(id)arg0 didUpdateWithProviderItem:(id)arg1 ;
-(void)generateProviderItems;
-(void)setupEditableAvatarViewController;
-(void)setupStyleCollectionView;
-(void)updateFlowLayoutItemSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif