// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUADDPEOPLEVIEWCONTROLLER_H
#define HUADDPEOPLEVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSArray, MFComposeRecipientTextView, NSLayoutConstraint, HFContactController, NSString, UIColor, HMHome, NSNumber, MFContactsSearchManager, UIView, UIActivityIndicatorView, IDSBatchIDQueryController, NSTimer, UITableView;
@protocol MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, IDSBatchIDQueryControllerDelegate, HFContactControllerDelegate, CNContactPickerDelegate, HUAddPeopleViewControllerDelegate;



@interface HUAddPeopleViewController : UIViewController <MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, IDSBatchIDQueryControllerDelegate, HFContactControllerDelegate, CNContactPickerDelegate>



@property (retain, nonatomic) NSMutableArray *additionalAutoCompleteResults; // ivar: _additionalAutoCompleteResults
@property (nonatomic) BOOL addressBookAccessDenied; // ivar: _addressBookAccessDenied
@property (retain, nonatomic) NSArray *autoCompleteResults; // ivar: _autoCompleteResults
@property (retain, nonatomic) MFComposeRecipientTextView *composeView; // ivar: _composeView
@property (retain, nonatomic) NSLayoutConstraint *composeViewBottomConstraint; // ivar: _composeViewBottomConstraint
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) HFContactController *contactsController; // ivar: _contactsController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAddPeopleViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *effectiveTintColor; // ivar: _effectiveTintColor
@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSNumber *lastSearchID; // ivar: _lastSearchID
@property (retain, nonatomic) MFContactsSearchManager *searchManager; // ivar: _searchManager
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (nonatomic) BOOL showingAutoCompleteResults; // ivar: _showingAutoCompleteResults
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // ivar: _statusQueryController
@property (retain, nonatomic) NSTimer *statusQueryDebounceTimer; // ivar: _statusQueryDebounceTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSString *unatomizedAddress; // ivar: _unatomizedAddress


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)IDSDestinationForRecipient:(id)arg0 ;
-(id)composeRecipientForAddress:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)recipientsWithStatusPassingTest:(id)arg0 ;
-(id)requiredKeyDescriptors;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tintColorForRecipient:(id)arg0 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)contactController:(id)arg0 didFinishDownloadingFamilyMemberAvatar:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)finishedSearchingForAutocompleteResults;
-(void)lookupIDSDestinations:(id)arg0 ;
-(void)lookupVisibleRecipients;
-(void)scheduleDelayedLookupVisibleRecipients;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)sendButtonPressed:(id)arg0 ;
-(void)sendInvites;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)updateStateDependentUI;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif