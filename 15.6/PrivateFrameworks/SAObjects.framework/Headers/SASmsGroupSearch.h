// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASMSGROUPSEARCH_H
#define SASMSGROUPSEARCH_H

@class NSString;


#import "SADomainCommand.h"

@interface SASmsGroupSearch : SADomainCommand

@property (copy, nonatomic) NSString *smsGroupName;


+(id)groupSearch;
+(id)groupSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif