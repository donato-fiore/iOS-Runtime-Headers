// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONTACTSAUTOCOMPLETESEARCHMODULE_H
#define TUCONTACTSAUTOCOMPLETESEARCHMODULE_H

@class CNAutocompleteStore, NSString;
@protocol CNAutocompleteFetchDelegate, TUSearchModuleProtocol, CNAutocompleteCancelable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUAutocompleteResultPartitioner.h"
#import "TUSearchController.h"
#import "TUSearchResults.h"

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol>



@property (retain, nonatomic) TUAutocompleteResultPartitioner *autocompleteResultPartitioner; // ivar: _autocompleteResultPartitioner
@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore; // ivar: _autocompleteStore
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CNAutocompleteCancelable> *fetchRequest; // ivar: _fetchRequest
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isSearchComplete) BOOL searchComplete; // ivar: _searchComplete
@property (weak) TUSearchController *searchController; // ivar: _searchController
@property (readonly) TUSearchResults *searchResults;
@property (readonly) Class superclass;


-(id)init;
-(void)_cleanup;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;
-(void)cancelSearch;
-(void)dealloc;
-(void)searchForString:(id)arg0 completion:(id)arg1 ;


@end


#endif