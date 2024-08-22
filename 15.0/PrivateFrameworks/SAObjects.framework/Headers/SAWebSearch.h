// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEBSEARCH_H
#define SAWEBSEARCH_H

@class NSString;


#import "SADomainCommand.h"

@interface SAWebSearch : SADomainCommand

@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *query;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif