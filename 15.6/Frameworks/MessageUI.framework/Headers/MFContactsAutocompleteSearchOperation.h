// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCONTACTSAUTOCOMPLETESEARCHOPERATION_H
#define MFCONTACTSAUTOCOMPLETESEARCHOPERATION_H

@class EFCancelationToken, EFPromise, CNAutocompleteStore, NSString, CNAutocompleteFetchContext;
@protocol CNAutocompleteFetchDelegate;


#import "MFContactsSearchOperation.h"

@interface MFContactsAutocompleteSearchOperation : MFContactsSearchOperation <CNAutocompleteFetchDelegate>

 {
    EFCancelationToken *_fetchRequestToken;
    EFPromise *_fetchRequestPromise;
}


@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore; // ivar: _autocompleteStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CNAutocompleteFetchContext *fetchContext; // ivar: _fetchContext
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeContacts; // ivar: _includeContacts
@property (nonatomic) BOOL includeRecents; // ivar: _includeRecents
@property (nonatomic) BOOL includeServers; // ivar: _includeServers
@property (nonatomic) BOOL includeSuggestions; // ivar: _includeSuggestions
@property (nonatomic) BOOL simulateResults; // ivar: _simulateResults
@property (readonly) Class superclass;


+(id)operationWithOwner:(id)arg0 text:(id)arg1 taskID:(id)arg2 autocompleteStore:(id)arg3 ;
-(id)_simulatedRecipientResults;
-(id)init;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;
-(void)cancel;
-(void)configureForSearchTypes:(NSUInteger)arg0 ;
-(void)main;


@end


#endif