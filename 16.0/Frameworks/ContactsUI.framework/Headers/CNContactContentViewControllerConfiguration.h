// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCONTENTVIEWCONTROLLERCONFIGURATION_H
#define CNCONTACTCONTENTVIEWCONTROLLERCONFIGURATION_H

@class NSString, CNContactFormatter, CNContactStore, NSArray, NSDictionary, UIView, UIViewController, CNPolicy, NSAttributedString;

#import <Foundation/Foundation.h>


@interface CNContactContentViewControllerConfiguration : NSObject

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
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (copy, nonatomic) NSArray *displayedProperties; // ivar: _displayedProperties
@property (nonatomic) BOOL editingProposedInformation; // ivar: _editingProposedInformation
@property (nonatomic) BOOL hideCardActions; // ivar: _hideCardActions
@property (retain, nonatomic) NSArray *highlightedProperties; // ivar: _highlightedProperties
@property (nonatomic) BOOL highlightedPropertyImportant; // ivar: _highlightedPropertyImportant
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (retain, nonatomic) NSString *importantMessage; // ivar: _importantMessage
@property (retain, nonatomic) NSString *initialPrompt; // ivar: _initialPrompt
@property (nonatomic) BOOL isMailVIP; // ivar: _isMailVIP
@property (nonatomic) BOOL isOutOfProcess; // ivar: _isOutOfProcess
@property (nonatomic) BOOL layoutPositionallyAfterNavBar; // ivar: _layoutPositionallyAfterNavBar
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // ivar: _linkedPoliciesByContactIdentifier
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) UIView *personHeaderView; // ivar: _personHeaderView
@property (retain, nonatomic) UIViewController *personHeaderViewController; // ivar: _personHeaderViewController
@property (retain, nonatomic) CNPolicy *policy; // ivar: _policy
@property (retain, nonatomic) NSString *primaryProperty; // ivar: _primaryProperty
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (nonatomic) BOOL shouldDrawNavigationBar; // ivar: _shouldDrawNavigationBar
@property (nonatomic) BOOL shouldShowLinkedContacts; // ivar: _shouldShowLinkedContacts
@property (nonatomic) BOOL showContactBlockingFirst; // ivar: _showContactBlockingFirst
@property (retain, nonatomic) NSAttributedString *verifiedInfoMessage; // ivar: _verifiedInfoMessage
@property (retain, nonatomic) NSString *warningMessage; // ivar: _warningMessage


-(id)init;
-(id)initForOutOfProcess:(BOOL)arg0 ;


@end


#endif