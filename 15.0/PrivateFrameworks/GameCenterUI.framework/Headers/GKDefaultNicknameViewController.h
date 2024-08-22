// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDEFAULTNICKNAMEVIEWCONTROLLER_H
#define GKDEFAULTNICKNAMEVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UIView, NSLayoutConstraint, UIImageView, OBBoldTrayButton, NSString, UIStackView, UILabel, UITextField, GKReachability, UIVisualEffectView;
@protocol GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate;


#import "GKAvatarContainerView.h"
#import "GKNicknameController.h"

@interface GKDefaultNicknameViewController : UIViewController <GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UIView *avatarContainer; // ivar: _avatarContainer
@property (retain, nonatomic) NSLayoutConstraint *avatarContainerLandscapeHeight; // ivar: _avatarContainerLandscapeHeight
@property (retain, nonatomic) UIImageView *bubbleImageView; // ivar: _bubbleImageView
@property (retain, nonatomic) UIView *buttonContainer; // ivar: _buttonContainer
@property (retain, nonatomic) OBBoldTrayButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottomConstraint; // ivar: _continueButtonBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonEqualMainStackViewWidthConstraint; // ivar: _continueButtonEqualMainStackViewWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonWidthConstraint; // ivar: _continueButtonWidthConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKAvatarContainerView *editAvatarView; // ivar: _editAvatarView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAvatarEditingSupported;
@property (retain, nonatomic) UIStackView *mainStackView; // ivar: _mainStackView
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewLeadingConstraint; // ivar: _mainStackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewTrailingConstraint; // ivar: _mainStackViewTrailingConstraint
@property (retain, nonatomic) UILabel *mainTitle; // ivar: _mainTitle
@property (retain, nonatomic) UILabel *message; // ivar: _message
@property (retain, nonatomic) UIStackView *middleStackView; // ivar: _middleStackView
@property (retain, nonatomic) UITextField *nickname; // ivar: _nickname
@property (retain, nonatomic) GKNicknameController *nicknameController; // ivar: _nicknameController
@property (retain, nonatomic) GKReachability *reachability; // ivar: _reachability
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topMargin; // ivar: _topMargin
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(NSInteger)getTopMargin;
-(void)addEditAvatarContainerView;
-(void)animateNicknameTextFieldIntoView:(id)arg0 ;
-(void)avatarView:(id)arg0 didSelectImageWithEditingEnabled:(BOOL)arg1 ;
-(void)cancelPressed:(id)arg0 ;
-(void)dealloc;
-(void)dismiss:(id)arg0 ;
-(void)enableOrDisableNicknameEditing;
-(void)fadeNonEssentialViews:(BOOL)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)nicknameTextDidChangeWithMessage:(id)arg0 ;
-(void)nicknameUpdateAvatarImage:(id)arg0 ;
-(void)nicknameUpdateRequestCompletedWithStatus:(id)arg0 error:(id)arg1 ;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)presentAvatarPicker;
-(void)presentDeleteAvatarImageAlert;
-(void)reachabilityDidChange:(id)arg0 ;
-(void)refreshAvatarImage;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)settingsPressed:(id)arg0 ;
-(void)setupNavigationBar;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLeftBarButtonWithTitle:(id)arg0 ;
-(void)updateUIBasedOnTraitCollection;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif