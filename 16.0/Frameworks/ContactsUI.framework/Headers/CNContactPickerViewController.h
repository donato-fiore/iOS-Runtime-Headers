// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTPICKERVIEWCONTROLLER_H
#define CNCONTACTPICKERVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, UIBarButtonItem, NSString, NSArray, FAFamilyMember, UINavigationController, CNContainer, NSPredicate, CNRegulatoryLogger, CNContact, UIViewController<CNContactPickerContentViewController>;
@protocol CNContactPickerContentDelegate, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate, CNContactPickerDelegate;



@interface CNContactPickerViewController : UIViewController <CNContactPickerContentDelegate, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate>

 {
    BOOL _ignoreViewWillBePresented;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) BOOL allowsCancel; // ivar: _allowsCancel
@property (nonatomic) BOOL allowsDeletion; // ivar: _allowsDeletion
@property (nonatomic) BOOL allowsDone; // ivar: _allowsDone
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL autocloses; // ivar: _autocloses
@property (copy, nonatomic) NSString *bannerTitle; // ivar: _bannerTitle
@property (copy, nonatomic) NSString *bannerValue; // ivar: _bannerValue
@property (nonatomic) NSInteger behavior; // ivar: _behavior
@property (nonatomic) NSInteger cardActions; // ivar: _cardActions
@property (retain, nonatomic) NSArray *contactSuggestions; // ivar: _contactSuggestions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDefaultViewControllerVisible) BOOL defaultViewControllerVisible; // ivar: _defaultViewControllerVisible
@property (weak, nonatomic) NSObject<CNContactPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayedPropertyKeys; // ivar: _displayedPropertyKeys
@property (retain, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesPromptInLandscape; // ivar: _hidesPromptInLandscape
@property (nonatomic) BOOL hidesSearchableSources; // ivar: _hidesSearchableSources
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL onlyRealContacts; // ivar: _onlyRealContacts
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact; // ivar: _predicateForEnablingContact
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact; // ivar: _predicateForSelectionOfContact
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // ivar: _predicateForSelectionOfProperty
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (retain, nonatomic) CNRegulatoryLogger *regulatoryLogger; // ivar: _regulatoryLogger
@property (retain, nonatomic) CNContact *scrollContact; // ivar: _scrollContact
@property (nonatomic) BOOL shouldAllowSearchForMultiSelect; // ivar: _shouldAllowSearchForMultiSelect
@property (nonatomic) BOOL shouldDisplayAddNewContactRow; // ivar: _shouldDisplayAddNewContactRow
@property (nonatomic) BOOL shouldDisplaySuggestionsController; // ivar: _shouldDisplaySuggestionsController
@property (retain, nonatomic) NSArray *suggestionsIgnoredContactIdentifiers; // ivar: _suggestionsIgnoredContactIdentifiers
@property (retain, nonatomic) NSArray *suggestionsInteractionDomains; // ivar: _suggestionsInteractionDomains
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetGroupIdentifier; // ivar: _targetGroupIdentifier
@property (retain, nonatomic) UIViewController<CNContactPickerContentViewController> *viewController; // ivar: _viewController


+(id)descriptorForRequiredKeysForSuggestions;
-(BOOL)_isDelayingPresentation;
-(BOOL)_shouldBeOutOfProcess;
-(id)_pickerPresentedViewController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_checkConsistencyFromOptions:(id)arg0 ;
-(void)_emitPickerAnalyticsDidSelectItems:(BOOL)arg0 ;
-(void)_endDelayingPresentation;
-(void)_prepareViewController;
-(void)_setupViewController;
-(void)_viewWillBePresented;
-(void)closePickerIfNeeded;
-(void)dealloc;
-(void)invalidateSelectionAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)notifyDelegateForCancellation;
-(void)pickerDidCancel;
-(void)pickerDidCompleteWithNewContact:(id)arg0 ;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg0 property:(id)arg1 ;
-(void)pickerDidSelectContacts:(id)arg0 properties:(id)arg1 ;
-(void)popToDefaultViewController:(BOOL)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)scrollToClosestContactMatching:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif