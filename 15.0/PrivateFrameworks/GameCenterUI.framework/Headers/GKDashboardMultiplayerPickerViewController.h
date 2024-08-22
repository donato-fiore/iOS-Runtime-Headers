// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDMULTIPLAYERPICKERVIEWCONTROLLER_H
#define GKDASHBOARDMULTIPLAYERPICKERVIEWCONTROLLER_H

@class UIVisualEffectView, UILabel, WAKView, CNComposeRecipientTextView, UIView, NSLayoutConstraint, CNContactPickerViewController, UIButton, NSString, UIStackView, UITextField, NSMutableDictionary;
@protocol UITextFieldDelegate, GKDashboardMultiplayerPickerDatasourceDelegate, CNContactPickerDelegate, GKMultiplayerCustomInviteMessageViewControllerDelegate, CNComposeRecipientTextViewDelegate, GKDashboardMultiplayerPickerDelegate, GKDashboardNearbyBrowserDelegate;


#import "GKDashboardCollectionViewController.h"
#import "GKDashboardMultiplayerPickerDataSource.h"
#import "GKPickerSearchTextField.h"

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, GKDashboardMultiplayerPickerDatasourceDelegate, CNContactPickerDelegate, GKMultiplayerCustomInviteMessageViewControllerDelegate, CNComposeRecipientTextViewDelegate>



@property (weak, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (weak, nonatomic) UILabel *collapsedSubtitle; // ivar: _collapsedSubtitle
@property (weak, nonatomic) UILabel *collapsedTitle; // ivar: _collapsedTitle
@property (weak, nonatomic) WAKView *collapsedTitleContainer; // ivar: _collapsedTitleContainer
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) CNComposeRecipientTextView *composeTextView; // ivar: _composeTextView
@property (weak, nonatomic) UIView *composeTextViewContainer; // ivar: _composeTextViewContainer
@property (retain, nonatomic) NSLayoutConstraint *composeTextViewHeightConstraint; // ivar: _composeTextViewHeightConstraint
@property (nonatomic) BOOL composeTextViewShowingPlaceholderText; // ivar: _composeTextViewShowingPlaceholderText
@property (retain, nonatomic) CNContactPickerViewController *contactPicker; // ivar: _contactPicker
@property (retain, nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // ivar: _customizeMessageBottomConstraint
@property (weak, nonatomic) UIButton *customizeMessageButton; // ivar: _customizeMessageButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIStackView *headerContentView; // ivar: _headerContentView
@property (weak, nonatomic) UILabel *headerSubtitle; // ivar: _headerSubtitle
@property (weak, nonatomic) UILabel *headerTitle; // ivar: _headerTitle
@property (nonatomic) CGFloat initialCustomizeMessageBottomConstraintConstant; // ivar: _initialCustomizeMessageBottomConstraintConstant
@property (nonatomic) BOOL isAnimatingComposeTextViewSizeChange; // ivar: _isAnimatingComposeTextViewSizeChange
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (retain, nonatomic) NSLayoutConstraint *leftBarButtonTopConstraint; // ivar: _leftBarButtonTopConstraint
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (weak, nonatomic) UITextField *messageField; // ivar: _messageField
@property (weak, nonatomic) NSObject<GKDashboardMultiplayerPickerDelegate> *multiplayerPickerDelegate; // ivar: _multiplayerPickerDelegate
@property (retain, nonatomic) UIButton *navBarMessageButton; // ivar: _navBarMessageButton
@property (retain, nonatomic) UIButton *navBarSendButton; // ivar: _navBarSendButton
@property (weak, nonatomic) NSLayoutConstraint *navigationHeaderHeightConstraint; // ivar: _navigationHeaderHeightConstraint
@property (weak, nonatomic) UIVisualEffectView *navigationVisualEffectBackground; // ivar: _navigationVisualEffectBackground
@property (nonatomic) NSObject<GKDashboardNearbyBrowserDelegate> *nearbyDelegate; // ivar: _nearbyDelegate
@property (readonly, nonatomic) BOOL nearbyOnly;
@property (readonly, nonatomic) GKDashboardMultiplayerPickerDataSource *pickerDataSource;
@property (retain, nonatomic) NSMutableDictionary *recipientMap; // ivar: _recipientMap
@property (retain, nonatomic) NSMutableDictionary *recipientPlayerMap; // ivar: _recipientPlayerMap
@property (nonatomic) BOOL recipientRemovedImplicitly; // ivar: _recipientRemovedImplicitly
@property (retain, nonatomic) NSMutableDictionary *removedRecipientPlayerMap; // ivar: _removedRecipientPlayerMap
@property (retain, nonatomic) NSLayoutConstraint *rightBarButtonTopConstraint; // ivar: _rightBarButtonTopConstraint
@property (retain, nonatomic) GKPickerSearchTextField *searchTextField; // ivar: _searchTextField
@property (weak, nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (nonatomic) BOOL shouldIgnoreClearSelection; // ivar: _shouldIgnoreClearSelection
@property (retain, nonatomic) UIButton *showContactPickerButton; // ivar: _showContactPickerButton
@property (nonatomic) BOOL skipAddressTokenization; // ivar: _skipAddressTokenization
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsNearby;
@property (nonatomic) BOOL usePreferredFocusCell; // ivar: _usePreferredFocusCell


-(BOOL)hasData;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)blurEffectForTraitCollection:(id)arg0 ;
-(id)composedNameForSuggestedMessageGroup:(id)arg0 ;
-(id)createSortPickerMenu;
-(id)existingMessageForInviteViewController:(id)arg0 ;
-(id)initWithMaxSelectable:(NSInteger)arg0 hiddenPlayers:(id)arg1 nearbyOnly:(BOOL)arg2 ;
-(id)pickerCollectionView;
-(id)preferredFocusEnvironments;
-(struct UIEdgeInsets )collectionSectionInset;
-(void)_updateButtonEnableState;
-(void)_updateCollectionView;
-(void)addMessage:(id)arg0 ;
-(void)addRecipientForPlayers:(id)arg0 withName:(id)arg1 ;
-(void)adjustCustomizeMessageConstraint;
-(void)cancel:(id)arg0 ;
-(void)clearSelection;
-(void)collapseHeaderView;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didSelectRecipients:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)composeRecipientViewReturnPressed:(id)arg0 ;
-(void)configureComposeTextView;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)customInviteViewController:(id)arg0 didFinishWithMessage:(id)arg1 ;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)didBeginSearchTextEditing;
-(void)didEndSearchTextEditing;
-(void)didPressShowContactPickerButton:(id)arg0 ;
-(void)dockHeaderViewIfNeeded;
-(void)handleSearchTextFieldReturn:(id)arg0 ;
-(void)highlightAlreadySelectedPlayers:(id)arg0 inGroup:(id)arg1 ;
-(void)highlightRecipients:(id)arg0 ;
-(void)pickerDatasource:(id)arg0 didDeselectPlayers:(id)arg1 inGroup:(id)arg2 ;
-(void)pickerDatasource:(id)arg0 didPickPlayers:(id)arg1 ;
-(void)pickerDatasource:(id)arg0 didSelectPlayers:(id)arg1 inGroup:(id)arg2 ;
-(void)pickerDatasourceDidSelectAddFriend:(id)arg0 ;
-(void)playerGroupDidExpandInPlace;
-(void)removeRecipientWithName:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)send:(id)arg0 ;
-(void)setSearchText:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)showCollapsedTitleAndSubtitleInNavBar;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAddMessageButtonVisibility;
-(void)updateCollectionViewContentInsets;
-(void)updateNavHeaderHeightAndOpacity;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willHideKeyboard:(id)arg0 ;
-(void)willShowKeyboard:(id)arg0 ;


@end


#endif