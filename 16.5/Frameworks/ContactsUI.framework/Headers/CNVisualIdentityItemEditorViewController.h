// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVISUALIDENTITYITEMEDITORVIEWCONTROLLER_H
#define CNVISUALIDENTITYITEMEDITORVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, NSString, UICollectionView, UIView, NSArray;
@protocol UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNPhotoPickerProviderItemDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate;


#import "CNVisualIdentityEditablePrimaryAvatarViewController.h"
#import "CNPhotoPickerProviderItem.h"
#import "CNVisualIdentityItemEditorSegmentedControl.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNVisualIdentityItemEditorViewController : UIViewController <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNPhotoPickerProviderItemDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate>



@property (retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint; // ivar: _avatarViewSizeConstraint
@property (retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint; // ivar: _avatarViewTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVisualIdentityItemEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController; // ivar: _editableAvatarViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // ivar: _providerItem
@property (retain, nonatomic) CNVisualIdentityItemEditorSegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) NSLayoutConstraint *segmentedControlHeightConstraint; // ivar: _segmentedControlHeightConstraint
@property (retain, nonatomic) UICollectionView *styleCollectionView; // ivar: _styleCollectionView
@property (retain, nonatomic) UIView *styleDividerView; // ivar: _styleDividerView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *variantProviderItems; // ivar: _variantProviderItems
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg0 ;
-(BOOL)editorViewOverlapsWindowBasedKeyboardRect:(struct CGRect )arg0 ;
-(BOOL)isEmojiProviderItemType;
-(BOOL)shouldBeginEditing;
-(BOOL)shouldShowStyleCollectionView;
-(CGFloat)editableAvatarViewEdgeLength;
-(CGFloat)editorViewBottomYForAvatarSize:(CGFloat)arg0 withContainerTopMargin:(CGFloat)arg1 ;
-(CGFloat)fontSizeForContainerSize:(CGFloat)arg0 ;
-(CGFloat)styleContainerTopMargin;
-(CGFloat)textFieldFontSize;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsPerRow;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithProviderItem:(id)arg0 variantsManager:(id)arg1 ;
-(id)updatedProviderItem;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)adjustAvatarViewConstraintsForKeyboardFrame:(struct CGRect )arg0 ;
-(void)beginEditingAvatar;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didTapCancel;
-(void)didTapDone;
-(void)didTapEditableAvatar:(id)arg0 ;
-(void)didTapSegmentedControl:(id)arg0 ;
-(void)editableAvatarViewController:(id)arg0 didUpdateWithProviderItem:(id)arg1 ;
-(void)forceEmojiKeyboardIfNeeded;
-(void)generateProviderItems;
-(void)hideStyleCollectionView;
-(void)keyboardWillShow:(id)arg0 ;
-(void)providerItemDidUpdate:(id)arg0 ;
-(void)setupBarButtonItems;
-(void)setupEditableAvatarViewController;
-(void)setupSegmentedControl;
-(void)setupStyleCollectionView;
-(void)setupViewWithProviderItem:(id)arg0 ;
-(void)switchEditorToMode:(NSUInteger)arg0 ;
-(void)updateDoneButtonEnabledStateForText:(id)arg0 ;
-(void)updateFlowLayoutItemSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif