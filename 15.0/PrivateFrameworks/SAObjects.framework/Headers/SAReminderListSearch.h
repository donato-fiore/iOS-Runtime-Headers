// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREMINDERLISTSEARCH_H
#define SAREMINDERLISTSEARCH_H

@class NSString;


#import "SADomainCommand.h"
#import "SAReminderTrigger.h"

@interface SAReminderListSearch : SADomainCommand

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAReminderTrigger *trigger;


+(id)listSearch;
+(id)listSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif