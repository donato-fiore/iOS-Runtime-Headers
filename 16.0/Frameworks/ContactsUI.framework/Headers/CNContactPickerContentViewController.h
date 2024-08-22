// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTPICKERCONTENTVIEWCONTROLLER_H
#define CNCONTACTPICKERCONTENTVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, NSMutableArray, NSArray, FAFamilyMember, CNManagedConfiguration, UINavigationController, CNContainer, NSPredicate;
@protocol CNContactNavigationControllerDelegate, CNContactPickerContentViewController, CNContactPickerContentDelegate;


#import "CNContactNavigationController.h"
#import "CNContactStoreDataSource.h"

@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController>



@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) BOOL allowsCancel; // ivar: _allowsCancel
@property (nonatomic) BOOL allowsDeletion; // ivar: _allowsDeletion
@property (nonatomic) BOOL allowsDone; // ivar: _allowsDone
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL allowsSearchForMultiSelect; // ivar: _allowsSearchForMultiSelect
@property (copy, nonatomic) NSString *bannerTitle; // ivar: _bannerTitle
@property (copy, nonatomic) NSString *bannerValue; // ivar: _bannerValue
@property (nonatomic) NSInteger cardActions; // ivar: _cardActions
@property (nonatomic) BOOL clientHasContactsAccess; // ivar: _clientHasContactsAccess
@property (nonatomic) BOOL clientWantsMultipleContacts; // ivar: _clientWantsMultipleContacts
@property (nonatomic) BOOL clientWantsMultipleProperties; // ivar: _clientWantsMultipleProperties
@property (nonatomic) BOOL clientWantsSingleContact; // ivar: _clientWantsSingleContact
@property (nonatomic) BOOL clientWantsSingleProperty; // ivar: _clientWantsSingleProperty
@property (retain, nonatomic) CNContactNavigationController *contactNavigationController; // ivar: _contactNavigationController
@property (retain, nonatomic) NSMutableArray *contactProperties; // ivar: _contactProperties
@property (retain, nonatomic) CNContactStoreDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactPickerContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayedPropertyKeys; // ivar: _displayedPropertyKeys
@property (retain, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesPromptInLandscape; // ivar: _hidesPromptInLandscape
@property (nonatomic) BOOL hidesSearchableSources; // ivar: _hidesSearchableSources
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL onlyRealContacts; // ivar: _onlyRealContacts
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact; // ivar: _predicateForEnablingContact
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact; // ivar: _predicateForSelectionOfContact
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // ivar: _predicateForSelectionOfProperty
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (nonatomic) BOOL shouldDisplayAddNewContactRow; // ivar: _shouldDisplayAddNewContactRow
@property (nonatomic) BOOL shouldDisplaySuggestionsController; // ivar: _shouldDisplaySuggestionsController
@property (nonatomic) BOOL shouldHideDuplicates; // ivar: _shouldHideDuplicates
@property (retain, nonatomic) NSArray *suggestedContacts; // ivar: _suggestedContacts
@property (retain, nonatomic) NSArray *suggestionsIgnoredContactIdentifiers; // ivar: _suggestionsIgnoredContactIdentifiers
@property (retain, nonatomic) NSArray *suggestionsInteractionDomains; // ivar: _suggestionsInteractionDomains
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetGroupIdentifier; // ivar: _targetGroupIdentifier


+(id)descriptorForContactPropertiesSupportingPredicateEvaluation;
-(BOOL)contactNavigationController:(id)arg0 canSelectContact:(id)arg1 ;
-(BOOL)contactNavigationController:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)contactNavigationController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(BOOL)contactNavigationController:(id)arg0 shouldSelectContact:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)contactNavigationController:(id)arg0 shouldShowCardForContact:(id)arg1 ;
-(BOOL)contactNavigationControllerShouldAddNewContact:(id)arg0 ;
-(BOOL)contactNavigationControllerShouldDismissSearchOnSelection:(id)arg0 ;
-(BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg0 ;
-(BOOL)contactSuggestionViewController:(id)arg0 shouldSelectContact:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_validatePredicatesWithError:(*id)arg0 ;
-(id)descriptorsForKeysRequiredByDelegate;
-(id)init;
-(void)_selectedContact:(id)arg0 ;
-(void)_selectedContacts:(id)arg0 ;
-(void)_selectedProperties:(id)arg0 ;
-(void)_selectedProperty:(id)arg0 ;
-(void)_updatePromptWithViewSize:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)contactNavigationController:(id)arg0 didCompleteWithNewContact:(id)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg0 ;
-(void)contactNavigationControllerDidComplete:(id)arg0 ;
-(void)invalidate;
-(void)invalidateSelectionAnimated:(BOOL)arg0 ;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif