// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNAVBARCANVASVIEWCONTROLLER_H
#define CKNAVBARCANVASVIEWCONTROLLER_H

@class UIViewController, UIView, UIButton, NSString, UIBarButtonItem, UINavigationController, CNContactStore;
@protocol UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate, CKNavBarUnifiedCallButtonDelegate, CKAvatarPickerViewControllerDelegate, CKNavbarCanvasViewControllerDelegate;


#import "CKAvatarPickerViewController.h"
#import "CKCanvasBackButtonView.h"
#import "CKNavigationBarCanvasView.h"
#import "CKDetailsContactsManager.h"
#import "CKConversation.h"
#import "CKLabel.h"
#import "CKNavBarUnifiedCallButton.h"

@interface CKNavbarCanvasViewController : UIViewController <UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate, CKNavBarUnifiedCallButtonDelegate, CKAvatarPickerViewControllerDelegate>



@property (retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // ivar: _avatarPickerViewController
@property (readonly, nonatomic) UIView *avatarView;
@property (retain, nonatomic) CKCanvasBackButtonView *backButtonView; // ivar: _backButtonView
@property (retain, nonatomic) UIButton *callButton; // ivar: _callButton
@property (nonatomic) BOOL canShowBackButtonView; // ivar: _canShowBackButtonView
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView; // ivar: _canvasView
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager; // ivar: _contactsManager
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CKLabel *defaultLabel; // ivar: _defaultLabel
@property (weak, nonatomic) NSObject<CKNavbarCanvasViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *detailsBarButton; // ivar: _detailsBarButton
@property (retain, nonatomic) UIButton *detailsButton; // ivar: _detailsButton
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) UIButton *editCancelButtonView; // ivar: _editCancelButtonView
@property (nonatomic) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL expanseEnabled; // ivar: _expanseEnabled
@property (nonatomic) BOOL hasConfiguredCallButtonAudioRouteActions; // ivar: _hasConfiguredCallButtonAudioRouteActions
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indicatorType; // ivar: _indicatorType
@property (nonatomic) BOOL isInEditingMode; // ivar: _isInEditingMode
@property (nonatomic) NSInteger navBarContext; // ivar: _navBarContext
@property (retain, nonatomic) NSString *navbarTitle; // ivar: _navbarTitle
@property (weak, nonatomic) UINavigationController *proxyNavigationController; // ivar: _proxyNavigationController
@property (nonatomic) BOOL shouldShowDoneButton; // ivar: _shouldShowDoneButton
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // ivar: _suggestionsEnabledContactStore
@property (readonly) Class superclass;
@property (retain, nonatomic) CKNavBarUnifiedCallButton *unifiedCallButton; // ivar: _unifiedCallButton


-(BOOL)_canShowAvatarView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hideChevron;
-(BOOL)shouldShowAvatarView;
-(BOOL)wantsVerifiedIconForTitle:(id)arg0 ;
-(CGFloat)_preferredHeightForTraitCollection:(id)arg0 ;
-(NSInteger)_unreadCount;
-(id)_leftItemViewForTraitCollection:(id)arg0 ;
-(id)_rightItemViewForTraitCollection:(id)arg0 ;
-(id)_secondaryRightItemViewForTraitCollection:(id)arg0 ;
-(id)_titleItemViewForTraitCollection:(id)arg0 ;
-(id)_windowTraitCollection;
-(id)contextMenuForUnknownRecipient:(id)arg0 ;
-(id)initWithConversation:(id)arg0 ;
-(id)initWithConversation:(id)arg0 navigationController:(id)arg1 ;
-(id)navBarTitleFromConversation:(id)arg0 ;
-(id)navigationItem;
-(id)recipientContextMenu;
-(struct NSDirectionalEdgeInsets )systemMinimumLayoutMarginsForView:(id)arg0 ;
-(void)_addUserDidTapNavigationBarRecognizer:(id)arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_chatUnreadCountDidChange:(id)arg0 ;
-(void)_configureCallButtonAudioRouteActionsIfNecessary;
-(void)_configureForDefaultMode;
-(void)_configureForEditMode;
-(void)_contactPhotosEnabledChangedNotification:(id)arg0 ;
-(void)_facetimeAudioButtonTapped:(id)arg0 ;
-(void)_facetimeVideoButtonTapped:(id)arg0 ;
-(void)_handleAddressBookChange:(id)arg0 ;
-(void)_handleAllowedByScreenTimeChatChanged:(id)arg0 ;
-(void)_handleConversationRecipientsDidChange:(id)arg0 ;
-(void)_handleTranscriptScroll:(id)arg0 ;
-(void)_infoButtonTapped:(id)arg0 ;
-(void)_initializeForTraitCollection:(id)arg0 ;
-(void)_notifyDelegateThatViewControllerWantsResize;
-(void)_updateFTControls;
-(void)_updateTitleViewAnimated:(BOOL)arg0 ;
-(void)_updateUnreadCountForBackbuttonView:(NSInteger)arg0 ;
-(void)_userDidTapNavigationBar;
-(void)button:(id)arg0 requestsJoinActiveCallWithVideoEnabled:(BOOL)arg1 ;
-(void)buttonRequestsOpenJoinedCall:(id)arg0 ;
-(void)buttonRequestsStartFaceTimeAudio:(id)arg0 ;
-(void)buttonRequestsStartFaceTimeVideo:(id)arg0 ;
-(void)buttonRequestsStartTelephonyCall:(id)arg0 ;
-(void)buttonWidthDidChange:(id)arg0 ;
-(void)collapse;
-(void)configureForEditing:(BOOL)arg0 ;
-(void)contactsManagerViewModelsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)dismissModal;
-(void)handleCloseNavBarAnimationCompleteNotification:(id)arg0 ;
-(void)legacyToggleExpansionState;
-(void)loadView;
-(void)multiwayStateChanged:(id)arg0 ;
-(void)refreshAudioButtonTargetAction;
-(void)registerNotifications;
-(void)setUnreadCountTitleColor;
-(void)showContactCardForEntity:(id)arg0 address:(id)arg1 ;
-(void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)arg0 ;
-(void)tappedAvatarPickerViewController;
-(void)toggleExpansionState;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAvatarPickerDelegate;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateDefaultLabelIfNecessary;
-(void)updateTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif