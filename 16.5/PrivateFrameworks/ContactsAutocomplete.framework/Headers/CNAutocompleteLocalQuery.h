// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETELOCALQUERY_H
#define CNAUTOCOMPLETELOCALQUERY_H

@class CNContactStore, NSString;
@protocol CNCancelable, CNAutocompleteLocalQueryDelegate;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchRequest.h"

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable>

 {
    id<CNAutocompleteLocalQueryDelegate> *_delegate;
}


@property (retain) CNContactStore *contactFetcherStore; // ivar: _contactFetcherStore
@property (retain) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CNAutocompleteFetchRequest *request; // ivar: _request
@property (readonly) Class superclass;


+(id)groupsQuery;
+(id)peopleQuery;
+(id)queryWithDelegate:(id)arg0 ;
-(id)autocompleteResultsForFetchResults:(id)arg0 resultFactory:(id)arg1 ;
-(id)fetchResults;
-(id)makeResultFactory;
-(id)run;
-(id)searchableProperties;
-(void)cancel;


@end


#endif