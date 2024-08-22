// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTVIEWCONTROLLER_H
#define CNCONTACTVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, _UIAccessDeniedView, CNContact, NSString, CNContactFormatter, UIView, CNContactStore, NSArray, UINavigationItem, CNContainer, CNGroup, CNPolicy, NSAttributedString, UIViewController<CNContactContentViewController>;
@protocol CNContactViewHostProtocol, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate, CNContactContentNavigationItemTarget, CNContactViewControllerCustomHeaderViewDelegate, CNContactViewControllerDelegate, CNContactViewControllerPPTDelegate, CNContactViewControllerPrivateDelegate;


#import "CNContactContentViewController.h"
#import "CNContactContentNavigationItemUpdater.h"
#import "CNContactRecentsReference.h"

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate, CNContactContentNavigationItemTarget>

 {
    BOOL _ignoreViewWillBePresented;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // ivar: _accessDeniedView
@property (nonatomic) NSInteger actions; // ivar: _actions
@property (retain, nonatomic) CNContact *additionalContact; // ivar: _additionalContact
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL allowsDisplayModePickerActions; // ivar: _allowsDisplayModePickerActions
@property (nonatomic) BOOL allowsEditPhoto; // ivar: _allowsEditPhoto
@property (nonatomic) BOOL allowsEditing;
@property (copy, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) UIView *contactHeaderView; // ivar: _contactHeaderView
@property (retain, nonatomic) UIViewController *contactHeaderViewController; // ivar: _contactHeaderViewController
@property (weak, nonatomic) NSObject<CNContactViewControllerCustomHeaderViewDelegate> *contactHeaderViewDelegate; // ivar: _contactHeaderViewDelegate
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContact *contentContact; // ivar: _contentContact
@property (retain, nonatomic) CNContactContentViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (copy, nonatomic) NSArray *displayedPropertyKeys; // ivar: _displayedPropertyKeys
@property (nonatomic) NSInteger editMode; // ivar: _editMode
@property (nonatomic) BOOL editingProposedInformation; // ivar: _editingProposedInformation
@property (retain, nonatomic) NSArray *extraLeftBarButtonItems; // ivar: _extraLeftBarButtonItems
@property (retain, nonatomic) NSArray *extraRightBarButtonItems; // ivar: _extraRightBarButtonItems
@property (nonatomic) BOOL forcesTransparentBackground; // ivar: _forcesTransparentBackground
@property (nonatomic) BOOL hasCompletedSetup; // ivar: _hasCompletedSetup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *highlightedPropertyIdentifier; // ivar: _highlightedPropertyIdentifier
@property (nonatomic) BOOL highlightedPropertyImportant; // ivar: _highlightedPropertyImportant
@property (retain, nonatomic) NSString *highlightedPropertyKey; // ivar: _highlightedPropertyKey
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (copy, nonatomic) NSString *importantMessage; // ivar: _importantMessage
@property (retain, nonatomic) NSString *initialPrompt; // ivar: _initialPrompt
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) CNContactContentNavigationItemUpdater *navItemUpdater; // ivar: _navItemUpdater
@property (retain, nonatomic) UINavigationItem *observedNavigationItem; // ivar: _observedNavigationItem
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (retain, nonatomic) CNGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) CNPolicy *policy; // ivar: _policy
@property (weak, nonatomic) NSObject<CNContactViewControllerPPTDelegate> *pptDelegate; // ivar: _pptDelegate
@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems; // ivar: _preEditLeftBarButtonItems
@property (retain, nonatomic) NSString *primaryPropertyKey; // ivar: _primaryPropertyKey
@property (readonly, nonatomic) NSObject<CNContactViewControllerPrivateDelegate> *privateDelegate;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (retain, nonatomic) CNContactRecentsReference *recentsData; // ivar: _recentsData
@property (nonatomic) BOOL requiresSetup; // ivar: _requiresSetup
@property (nonatomic) BOOL shouldDrawNavigationBar; // ivar: _shouldDrawNavigationBar
@property (nonatomic) BOOL shouldShowLinkedContacts; // ivar: _shouldShowLinkedContacts
@property (nonatomic) BOOL shouldUseModernNavigationBarHiding; // ivar: _shouldUseModernNavigationBarHiding
@property (nonatomic) BOOL showingMeContact; // ivar: _showingMeContact
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBrandedCallHeaderFormat; // ivar: _usesBrandedCallHeaderFormat
@property (copy, nonatomic) NSAttributedString *verifiedInfoMessage; // ivar: _verifiedInfoMessage
@property (retain, nonatomic) UIViewController<CNContactContentViewController> *viewController; // ivar: _viewController
@property (copy, nonatomic) NSString *warningMessage; // ivar: _warningMessage


+(id)descriptorForRequiredKeys;
+(id)viewControllerForContact:(id)arg0 ;
+(id)viewControllerForEditedDraftContact:(id)arg0 ;
+(id)viewControllerForNewContact:(id)arg0 ;
+(id)viewControllerForNewDraftContact:(id)arg0 ;
+(id)viewControllerForUnknownContact:(id)arg0 ;
+(id)viewControllerForUpdatingContact:(id)arg0 withPropertiesFromContact:(id)arg1 ;
-(BOOL)_isDelayingPresentation;
-(BOOL)_shouldBeOutOfProcess;
-(BOOL)isModalInPresentation;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg0 propertyKey:(id)arg1 propertyIdentifier:(id)arg2 ;
-(id)_primaryPropertyStringForContact:(id)arg0 ;
-(id)confirmCancelAlertControllerAnchoredAtButtonItem:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationItemController;
-(void)_endDelayingPresentation;
-(void)_prepareViewController;
-(void)_setupViewController;
-(void)_viewWillBePresented;
-(void)configureNavigationItem:(id)arg0 ;
-(void)dealloc;
-(void)didChangePreferredContentSize:(struct CGSize )arg0 ;
-(void)didCompleteWithContact:(id)arg0 ;
-(void)didDeleteContact:(id)arg0 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)editCancel:(id)arg0 ;
-(void)enableCancelKeyboardShortcut;
-(void)enableEditKeyboardShortcut;
-(void)enableSaveKeyboardShortcut;
-(void)highlightPropertyWithKey:(id)arg0 identifier:(id)arg1 ;
-(void)highlightPropertyWithKey:(id)arg0 identifier:(id)arg1 important:(BOOL)arg2 ;
-(void)isPresentingEditingController:(BOOL)arg0 ;
-(void)isPresentingFullscreen:(BOOL)arg0 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentCancelConfirmationAlert;
-(void)presentConfirmCancelAlertControllerAnchoredAtButtonItem:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)setDoneButtonText:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)toggleEditing;
-(void)toggleEditing:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)updateContact:(id)arg0 ;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg0 doneButtonEnabled:(BOOL)arg1 doneButtonText:(id)arg2 ;
-(void)updateEditing:(BOOL)arg0 doneButtonEnabled:(BOOL)arg1 doneButtonText:(id)arg2 ;
-(void)viewDidAppear;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewServiceDidTerminate;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif