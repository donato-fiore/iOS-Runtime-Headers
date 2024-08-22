// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSCONTACTSEARCH_H
#define _CSCONTACTSEARCH_H

@class NSMutableArray, NSString;
@protocol CNAutocompleteFetchDelegate, CNCancelable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CSContactSearch : NSObject <CNAutocompleteFetchDelegate>

 {
    NSMutableArray *_accumulatedContacts;
    NSUInteger _startTime;
}


@property (readonly, nonatomic) BOOL autocompleteEnabled; // ivar: _autocompleteEnabled
@property (retain, nonatomic) NSObject<CNCancelable> *autocompleteRequest; // ivar: _autocompleteRequest
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeRecents; // ivar: _includeRecents
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, nonatomic) NSUInteger queryID; // ivar: _queryID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)autocompleteStore;
+(id)contactStore;
+(id)targetQueue;
-(id)contactsMatchingQuery:(id)arg0 error:(*id)arg1 ;
-(id)initWithQuery:(id)arg0 queryID:(NSUInteger)arg1 autocompleteEnabled:(BOOL)arg2 ;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)handleCompletionWithContacts:(id)arg0 error:(id)arg1 ;
-(void)start;
-(void)startAutocompleteContactsSearch;
-(void)startContactsSearch;


@end


#endif