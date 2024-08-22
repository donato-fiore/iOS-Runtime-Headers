// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPSEARCH_H
#define SAMPSEARCH_H

@class NSArray;


#import "SADomainCommand.h"

@interface SAMPSearch : SADomainCommand

@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic) NSInteger maxResults;
@property (copy, nonatomic) NSArray *searchTypes;
@property (nonatomic) BOOL strict;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif