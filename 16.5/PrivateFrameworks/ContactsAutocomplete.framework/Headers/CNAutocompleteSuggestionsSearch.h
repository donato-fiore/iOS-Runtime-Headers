// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETESUGGESTIONSSEARCH_H
#define CNAUTOCOMPLETESUGGESTIONSSEARCH_H

@class CNContactStore, NSString;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)charactersThreshold;
-(id)convertContacts:(id)arg0 request:(id)arg1 ;
-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)keysToFetchForRequest:(id)arg0 ;
-(id)resultTransformWithFactory:(SEL)arg0 properties:(id)arg1 ;
-(id)resultTransformWithRequest:(SEL)arg0 ;
-(id)suggestedContactsWithRequest:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;


@end


#endif