// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTSAUTOCOMPLETESEARCHOPERATION_H
#define CNCONTACTSAUTOCOMPLETESEARCHOPERATION_H

@class CNAutocompleteStore, NSString, CNAutocompleteFetchContext, CNPromise, CNCancelationToken, NSNumber;
@protocol CNAutocompleteFetchDelegate;


#import "CNAutocompleteSearchOperation.h"

@interface CNContactsAutocompleteSearchOperation : CNAutocompleteSearchOperation <CNAutocompleteFetchDelegate>



@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore; // ivar: _autocompleteStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CNAutocompleteFetchContext *fetchContext; // ivar: _fetchContext
@property (retain, nonatomic) CNPromise *fetchRequestPromise; // ivar: _fetchRequestPromise
@property (retain, nonatomic) CNCancelationToken *fetchRequestToken; // ivar: _fetchRequestToken
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeContacts; // ivar: _includeContacts
@property (nonatomic) BOOL includeRecents; // ivar: _includeRecents
@property (nonatomic) BOOL includeServers; // ivar: _includeServers
@property (nonatomic) BOOL includeSuggestions; // ivar: _includeSuggestions
@property (retain, nonatomic) NSNumber *shouldIncludeGroupResults; // ivar: _shouldIncludeGroupResults
@property (nonatomic) BOOL shouldUnifyResults; // ivar: _shouldUnifyResults
@property (nonatomic) BOOL simulateResults; // ivar: _simulateResults
@property (readonly) Class superclass;


+(id)operationWithOwner:(id)arg0 text:(id)arg1 taskID:(id)arg2 autocompleteStore:(id)arg3 ;
-(BOOL)autocompleteFetch:(id)arg0 shouldExpectSupplementalResultsForRequest:(id)arg1 completionHandler:(id)arg2 ;
-(id)_simulatedRecipientResults;
-(id)defaultChildForUnifiedEmailRecipients:(id)arg0 ;
-(id)init;
-(id)originContextForResult:(id)arg0 ;
-(id)unifyRecipientsIfNeccesary:(id)arg0 ;
-(id)unifyingIdentifierForRecipient:(id)arg0 ;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;
-(void)cancel;
-(void)configureForSearchTypes:(NSUInteger)arg0 ;
-(void)main;


@end


#endif