// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECIPIENTSEARCHLISTCONTROLLER_H
#define CKRECIPIENTSEARCHLISTCONTROLLER_H

@class CNAutocompleteResultsTableViewController, NSArray, NSString, IMAccount, NSDate, IDSBatchIDQueryController;
@protocol IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate, CKRecipientSearchListControllerDelegate;


#import "CKContactsSearchManager.h"

@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate>



@property (copy, nonatomic) NSArray *conversationCache; // ivar: _conversationCache
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IMAccount *defaultiMessageAccount; // ivar: _defaultiMessageAccount
@property (weak, nonatomic) NSObject<CKRecipientSearchListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enteredRecipients; // ivar: _enteredRecipients
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *idsQueryStartTime; // ivar: _idsQueryStartTime
@property (retain, nonatomic) NSArray *prefilteredRecipients; // ivar: _prefilteredRecipients
@property (retain, nonatomic) CKContactsSearchManager *searchManager; // ivar: _searchManager
@property (copy, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (nonatomic) BOOL shouldHideGroupsDonations; // ivar: shouldHideGroupsDonations
@property (nonatomic) BOOL smsEnabled; // ivar: _smsEnabled
@property (retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // ivar: _statusQueryController
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressGroupSuggestions;


-(BOOL)_canShowWhileLocked;
-(BOOL)hasSearchResults;
-(BOOL)isSearchResultsHidden;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(NSInteger)idsStatusForAddress:(id)arg0 ;
-(char)_serviceColorForRecipients:(id)arg0 ;
-(id)_conversationList;
-(id)conversationCacheForContactsSearchManager:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)cancelSearch;
-(void)chatStateChanged:(id)arg0 ;
-(void)contactsSearchManager:(id)arg0 finishedSearchingWithResults:(id)arg1 ;
-(void)dealloc;
-(void)didSelectRecipient:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidateOutstandingIDStatusRequests;
-(void)invalidateSearchManager;
-(void)loadView;
-(void)removeRecipient:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchWithText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif