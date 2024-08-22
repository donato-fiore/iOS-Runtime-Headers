// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPHOTOPICKERHEADERVIEW_H
#define CNPHOTOPICKERHEADERVIEW_H

@class UIView, UIButton, CAShapeLayer, NSString, NSArray, UIGestureRecognizer;
@protocol UITextFieldDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate, CNPhotoPickerHeaderViewDelegate;


#import "CNVisualIdentityAvatarViewController.h"
#import "CNPhotoPickerHeaderViewTextField.h"
#import "CNPhotoPickerProviderItem.h"
#import "CNVisualIdentity.h"

@interface CNPhotoPickerHeaderView : UIView <UITextFieldDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UIButton *clearAvatarImageButton; // ivar: _clearAvatarImageButton
@property (retain, nonatomic) UIView *clearAvatarImageButtonBackground; // ivar: _clearAvatarImageButtonBackground
@property (retain, nonatomic) CAShapeLayer *clearAvatarImageButtonClippingLayer; // ivar: _clearAvatarImageButtonClippingLayer
@property (retain, nonatomic) UIButton *clearIdentityNameButton; // ivar: _clearIdentityNameButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPhotoPickerHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNPhotoPickerHeaderViewTextField *identityNameTextField; // ivar: _identityNameTextField
@property (retain, nonatomic) CNPhotoPickerProviderItem *placeholderProviderItem; // ivar: _placeholderProviderItem
@property (retain, nonatomic) NSArray *subviewsConstraints; // ivar: _subviewsConstraints
@property (readonly) Class superclass;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) CNVisualIdentity *visualIdentity; // ivar: _visualIdentity


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 ;
-(id)initWithVisualIdentity:(id)arg0 avatarViewController:(id)arg1 ;
-(struct CGSize )sizeOfPrimaryAvatar;
-(void)didMoveToWindow;
-(void)didTapClearAvatarImageButton;
-(void)didTapClearIdentityNameButton;
-(void)didTapHeaderView;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)layoutSubviews;
-(void)setupClearAvatarImageButton;
-(void)setupDragAndDrop;
-(void)setupHeaderViewWithPhotoView:(id)arg0 ;
-(void)setupIdentityNameClearButtonIfNecessary;
-(void)setupIdentityNameTextFieldAndClearButton;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateConstraints;
-(void)updateIdentityNameTextFieldMaxWidth;
-(void)updateIdentityNameTextFieldPlaceholderWithText:(id)arg0 ;
-(void)updateIdentityNameTextFieldWithIdentity:(id)arg0 ;
-(void)updateImageViewWithIdentity:(id)arg0 ;
-(void)updatePhotoViewWithUpdatedIdentity:(id)arg0 ;


@end


#endif