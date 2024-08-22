// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETELOCALSEARCH_H
#define CNAUTOCOMPLETELOCALSEARCH_H

@class CNContactStore, NSString;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>


@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch>



@property (retain, nonatomic) CNContactStore *contactFetcherStore; // ivar: _contactFetcherStore
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldIncludeGroupResultsForRequest:(id)arg0 ;
-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)groupsForRequest:(id)arg0 contactStore:(id)arg1 contactFetcherStore:(id)arg2 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 contactFetcherStore:(id)arg1 ;
-(id)peopleForRequest:(id)arg0 contactStore:(id)arg1 contactFetcherStore:(id)arg2 ;


@end


#endif