// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKAUTOCOMPLETER_H
#define EKAUTOCOMPLETER_H

@class NSSet, CNAutocompleteStore, NSMutableArray, NSString, NSOperationQueue;
@protocol CNAutocompleteFetchDelegate, CNCancelable, EKAutocompleterDelegate;

#import <Foundation/Foundation.h>

#import "EKDirectorySearchOperation.h"
#import "EKSource.h"

@interface EKAutocompleter : NSObject <CNAutocompleteFetchDelegate>



@property (retain) NSSet *addressesToIgnore; // ivar: _addressesToIgnore
@property BOOL autocompleteRunning; // ivar: _autocompleteRunning
@property (retain) CNAutocompleteStore *autocompleteStore; // ivar: _autocompleteStore
@property (retain) NSObject<CNCancelable> *autocompletionSearchRequest; // ivar: _autocompletionSearchRequest
@property (retain) NSMutableArray *contactResults; // ivar: _contactResults
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<EKAutocompleterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) EKDirectorySearchOperation *directorySearchOperation; // ivar: _directorySearchOperation
@property (retain) NSOperationQueue *directorySearchQueue; // ivar: _directorySearchQueue
@property (retain) NSMutableArray *directorySearchResults; // ivar: _directorySearchResults
@property (nonatomic) BOOL excludeLocal; // ivar: _excludeLocal
@property (nonatomic) BOOL findGroups; // ivar: _findGroups
@property (nonatomic) BOOL findPeople; // ivar: _findPeople
@property (nonatomic) BOOL findRecents; // ivar: _findRecents
@property (nonatomic) BOOL findResources; // ivar: _findResources
@property (nonatomic) BOOL findRooms; // ivar: _findRooms
@property (nonatomic) BOOL findSuggestions; // ivar: _findSuggestions
@property (readonly) NSUInteger hash;
@property (copy) NSString *prefix; // ivar: _prefix
@property (retain) EKSource *source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) BOOL useACDirectorySearch; // ivar: _useACDirectorySearch


-(BOOL)autocompleteFetch:(id)arg0 shouldExpectSupplementalResultsForRequest:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)doCalDAVSearchWithAutocompleteBlock:(id)arg0 ;
-(BOOL)isRunning;
-(id)allResults;
-(id)autocompleteResultsFromDirectoryRecords:(id)arg0 withType:(NSInteger)arg1 ;
-(id)cnResults;
-(id)initWithDelegate:(id)arg0 ;
-(id)lastSearchString;
-(id)removeIgnoredAddressesFromResults:(id)arg0 ;
-(id)searchFor:(id)arg0 onSource:(id)arg1 withContext:(id)arg2 ;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;
-(void)cancelSearch;
-(void)clearLastResults;
-(void)setIgnoredAddresses:(id)arg0 ;
-(void)setIgnoredParticipants:(id)arg0 ;


@end


#endif