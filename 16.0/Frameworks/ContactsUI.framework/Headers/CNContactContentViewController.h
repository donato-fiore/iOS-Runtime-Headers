// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCONTENTVIEWCONTROLLER_H
#define CNCONTACTCONTENTVIEWCONTROLLER_H

@class UIViewController, CNAccessAuthorization, NSString, NSArray, CNContact, CNContactFormatter, CNContactStore, NSMutableArray, NSDictionary, CNManagedConfiguration, CNContainer, CNGroup, UIView, CNPolicy, UITableView, NSAttributedString;
@protocol CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, UIViewControllerRestoration, CNContactContentViewControllerDelegate, CNContactViewHostProtocol, CNContactViewControllerCustomHeaderViewDelegate, CNContactViewControllerPPTDelegate, CNUIContactSaveExecutor;


#import "CNCardGroup.h"
#import "CNCardFaceTimeGroup.h"
#import "CNContactHeaderView.h"
#import "CNContactView.h"
#import "CNContactContentViewControllerConfiguration.h"
#import "CNContactRecentsReference.h"

@interface CNContactContentViewController : UIViewController <CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, UIViewControllerRestoration>



@property (retain, nonatomic) CNAccessAuthorization *accessAuthorization; // ivar: _accessAuthorization
@property (nonatomic) BOOL allowsActions; // ivar: _allowsActions
@property (nonatomic) BOOL allowsActionsModel; // ivar: _allowsActionsModel
@property (nonatomic) BOOL allowsAddToFavorites; // ivar: _allowsAddToFavorites
@property (nonatomic) BOOL allowsAddingToAddressBook; // ivar: _allowsAddingToAddressBook
@property (nonatomic) BOOL allowsCardActions; // ivar: _allowsCardActions
@property (nonatomic) BOOL allowsConferencing; // ivar: _allowsConferencing
@property (nonatomic) BOOL allowsContactBlocking; // ivar: _allowsContactBlocking
@property (nonatomic) BOOL allowsDeletion; // ivar: _allowsDeletion
@property (nonatomic) BOOL allowsDisplayModePickerActions; // ivar: _allowsDisplayModePickerActions
@property (nonatomic) BOOL allowsEditInApp; // ivar: _allowsEditInApp
@property (nonatomic) BOOL allowsEditPhoto; // ivar: _allowsEditPhoto
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL allowsPropertyActions; // ivar: _allowsPropertyActions
@property (nonatomic) BOOL allowsSendMessage; // ivar: _allowsSendMessage
@property (nonatomic) BOOL allowsSettingLinkedContactsAsPreferred; // ivar: _allowsSettingLinkedContactsAsPreferred
@property (nonatomic) BOOL allowsSharing; // ivar: _allowsSharing
@property (retain, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (nonatomic) BOOL alwaysEditing; // ivar: _alwaysEditing
@property (readonly, nonatomic) NSArray *cardActions; // ivar: _cardActions
@property (readonly, nonatomic) CNCardGroup *cardBottomGroup; // ivar: _cardBottomGroup
@property (retain, nonatomic) CNCardFaceTimeGroup *cardFaceTimeGroup; // ivar: _cardFaceTimeGroup
@property (readonly, nonatomic) CNCardGroup *cardFooterGroup; // ivar: _cardFooterGroup
@property (readonly, nonatomic) CNCardGroup *cardTopGroup; // ivar: _cardTopGroup
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) NSObject<CNContactContentViewControllerDelegate> *contactDelegate; // ivar: _contactDelegate
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (readonly, nonatomic) CNContactHeaderView *contactHeaderView; // ivar: _contactHeaderView
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNContactView *contactView; // ivar: _contactView
@property (retain, nonatomic) CNContactContentViewControllerConfiguration *contactViewConfiguration; // ivar: _contactViewConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactViewHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *displayGroups; // ivar: _displayGroups
@property (copy, nonatomic) NSArray *displayedProperties; // ivar: _displayedProperties
@property (nonatomic) BOOL editingProposedInformation; // ivar: _editingProposedInformation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideCardActions; // ivar: _hideCardActions
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (retain, nonatomic) NSString *importantMessage; // ivar: _importantMessage
@property (retain, nonatomic) NSString *initialPrompt; // ivar: _initialPrompt
@property (nonatomic) BOOL isMailVIP; // ivar: _isMailVIP
@property (readonly) BOOL isPresentingModalViewController;
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // ivar: _linkedPoliciesByContactIdentifier
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSArray *missingRequiredKeys; // ivar: _missingRequiredKeys
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSArray *originalContacts; // ivar: _originalContacts
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (retain, nonatomic) CNGroup *parentGroup; // ivar: _parentGroup
@property (retain, nonatomic) UIView *personHeaderView; // ivar: _personHeaderView
@property (retain, nonatomic) UIViewController *personHeaderViewController; // ivar: _personHeaderViewController
@property (weak, nonatomic) NSObject<CNContactViewControllerCustomHeaderViewDelegate> *personHeaderViewDelegate; // ivar: _personHeaderViewDelegate
@property (retain, nonatomic) CNPolicy *policy; // ivar: _policy
@property (weak, nonatomic) NSObject<CNContactViewControllerPPTDelegate> *pptDelegate;
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (retain, nonatomic) NSString *primaryProperty; // ivar: _primaryProperty
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (readonly, nonatomic) NSDictionary *propertyGroups; // ivar: _propertyGroups
@property (retain, nonatomic) CNContactRecentsReference *recentsData; // ivar: _recentsData
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveContactExecutor; // ivar: _saveContactExecutor
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveLinkedContactsExecutor; // ivar: _saveLinkedContactsExecutor
@property (nonatomic) BOOL shouldDrawNavigationBar; // ivar: _shouldDrawNavigationBar
@property (nonatomic) BOOL shouldIgnoreContactStoreDidChangeNotification; // ivar: _shouldIgnoreContactStoreDidChangeNotification
@property (nonatomic) BOOL shouldShowLinkedContacts; // ivar: _shouldShowLinkedContacts
@property (nonatomic) BOOL showContactBlockingFirst; // ivar: _showContactBlockingFirst
@property (nonatomic) BOOL showingMeContact; // ivar: _showingMeContact
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSAttributedString *verifiedInfoMessage; // ivar: _verifiedInfoMessage
@property (retain, nonatomic) NSString *warningMessage; // ivar: _warningMessage


+(Class)classForContentViewControllerImpl;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithDescription:(id)arg0 ;
-(NSInteger)indexOfGroup:(id)arg0 ;
-(id)init;
-(id)initWithContact:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif