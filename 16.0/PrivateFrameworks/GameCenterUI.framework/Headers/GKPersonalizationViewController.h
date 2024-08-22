// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPERSONALIZATIONVIEWCONTROLLER_H
#define GKPERSONALIZATIONVIEWCONTROLLER_H

@class UIViewController;
@protocol GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate;



@interface GKPersonalizationViewController : UIViewController <GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate>

 {
    ? $__lazy_storage_$_editAvatarView;
    ? $__lazy_storage_$_nicknameController;
    ? $__lazy_storage_$_personalizationView;
}




-(BOOL)nicknameShouldBeginEditing;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)avatarView:(id)arg0 didSelectImageWithEditingEnabled:(BOOL)arg1 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)nicknameDidBecomeFirstResponder;
-(void)nicknameDidResignFirstResponder;
-(void)nicknameTextDidChangeWithMessage:(id)arg0 ;
-(void)nicknameUpdateAvatarImage:(id)arg0 ;
-(void)nicknameUpdateRequestCompletedWithStatus:(id)arg0 error:(id)arg1 ;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif