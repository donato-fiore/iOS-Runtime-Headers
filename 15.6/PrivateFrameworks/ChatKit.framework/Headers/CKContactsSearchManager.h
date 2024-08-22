// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTACTSSEARCHMANAGER_H
#define CKCONTACTSSEARCHMANAGER_H

@class NSNumber, NSString, NSCharacterSet, NSArray, CNAutocompleteSearchManager, NSMutableArray;
@protocol CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CKContactsSearchManagerDelegate;

#import <Foundation/Foundation.h>


@interface CKContactsSearchManager : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate>



@property (nonatomic) BOOL biasForOutgoingInteraction; // ivar: _biasForOutgoingInteraction
@property (retain, nonatomic) NSNumber *currentSearchTaskID; // ivar: _currentSearchTaskID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKContactsSearchManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSCharacterSet *emojiCharacterSet; // ivar: _emojiCharacterSet
@property (retain, nonatomic) NSArray *enteredRecipients; // ivar: _enteredRecipients
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNAutocompleteSearchManager *searchManager; // ivar: _searchManager
@property (retain, nonatomic) NSMutableArray *searchResults; // ivar: _searchResults
@property (retain, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressGroupSuggestions; // ivar: _suppressGroupSuggestions
@property (nonatomic) BOOL zkwGroupSuggestionsEnabled; // ivar: _zkwGroupSuggestionsEnabled


-(BOOL)getSupplementalGroupsForSearchQuery:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isMAIDGroupsEnabled;
-(BOOL)shouldIncludeGroupInResults:(id)arg0 ;
-(id)_cullOldResults:(id)arg0 ;
-(id)_filterGroupResults:(id)arg0 ;
-(id)_sortResultsByDate:(id)arg0 ;
-(id)_sortSearchResultsWithCoreRecentsResults:(id)arg0 displayNameMatches:(id)arg1 participantNameMatches:(id)arg2 ;
-(id)createAutocompelteGroupMembersFromParticipants:(id)arg0 ;
-(id)init;
-(id)matchingConversationWithGuid:(id)arg0 ;
-(id)nameGroupSearchResults;
-(id)participantMatchGroupResults;
-(id)participantMatchResultsForSearchTerm:(id)arg0 ;
-(id)zkwGroupSuggestions;
-(struct _NSRange )_rangeForSearchTerm:(id)arg0 inTarget:(id)arg1 tokenizedByCharacterSet:(id)arg2 ;
-(void)beganNetworkActivity;
-(void)cancelSearch;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)dealloc;
-(void)didSelectRecipient:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)endedNetworkActivity;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)removeRecipient:(id)arg0 ;
-(void)searchWithText:(id)arg0 ;


@end


#endif