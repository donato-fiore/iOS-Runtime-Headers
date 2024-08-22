// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERSEARCHRESULTS_H
#define SAANSWERSEARCHRESULTS_H

@class NSArray;


#import "SADomainSearchResults.h"

@interface SAAnswerSearchResults : SADomainSearchResults

@property (copy, nonatomic) NSArray *results;


+(id)searchResults;
+(id)searchResultsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif