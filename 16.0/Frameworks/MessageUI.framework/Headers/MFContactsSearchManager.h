// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONTACTSSEARCHMANAGER_H
#define MFCONTACTSSEARCHMANAGER_H

@class NSMutableDictionary, CNAutocompleteStore, NSOperationQueue, NSMutableArray, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MFContactsSearchManager : NSObject {
    NSMutableDictionary *_taskContextsByTaskID;
    CNAutocompleteStore *_autocompleteStore;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    NSUInteger _searchTypes;
    int _contactSearchAccountChangedToken;
    BOOL _registeredForAddressBookChanges;
    NSMutableArray *_corecipientSearchTaskIDs;
}


@property (nonatomic) NSUInteger autocompleteSearchType; // ivar: _autocompleteSearchType
@property (nonatomic) NSUInteger implicitGroupCreationThreshold; // ivar: _implicitGroupCreationThreshold
@property (nonatomic) BOOL includeUpcomingEventMembers; // ivar: _includeUpcomingEventMembers
@property (copy, nonatomic) NSString *recentsBundleIdentifier; // ivar: _recentsBundleIdentifier
@property (retain) NSArray *searchAccountIDs; // ivar: _explicitSearchAccountIDs
@property (readonly, nonatomic) NSArray *searchAccounts; // ivar: _searchAccounts
@property (copy, nonatomic) NSString *sendingAccountIdentifier; // ivar: _sendingAccountIdentifier
@property (copy, nonatomic) NSString *sendingAddress; // ivar: _sendingAddress
@property (nonatomic, getter=isSimulatedResultsEnabled) BOOL simulatedResultsEnabled; // ivar: _simulatedResultsEnabled


-(id)_nextTaskID;
-(id)init;
-(id)initWithAutocompleteSearchType:(NSUInteger)arg0 ;
-(id)initWithAutocompleteStore:(id)arg0 searchType:(NSUInteger)arg1 ;
-(id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg0 consumer:(id)arg1 ;
-(id)searchForText:(id)arg0 consumer:(id)arg1 ;
-(id)searchForText:(id)arg0 withAutocompleteFetchContext:(id)arg1 consumer:(id)arg2 ;
-(void)_handleContactsAutocompleteSearch:(id)arg0 returnedResults:(id)arg1 taskID:(id)arg2 ;
-(void)_handleContactsAutocompleteSearchFinished:(id)arg0 taskID:(id)arg1 ;
-(void)_handleTaskFinished:(id)arg0 context:(id)arg1 ;
-(void)cancelTaskWithID:(id)arg0 ;
-(void)dealloc;
-(void)didSelectRecipient:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeRecipientResult:(id)arg0 ;
-(void)setSearchTypes:(NSUInteger)arg0 ;


@end


#endif