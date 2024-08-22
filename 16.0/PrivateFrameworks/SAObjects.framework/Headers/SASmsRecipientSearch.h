// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASMSRECIPIENTSEARCH_H
#define SASMSRECIPIENTSEARCH_H

@class NSArray;


#import "SADomainCommand.h"

@interface SASmsRecipientSearch : SADomainCommand

@property (nonatomic) BOOL clientShouldResolvePhonesAndEmails;
@property (copy, nonatomic) NSArray *recipients;


+(id)recipientSearch;
+(id)recipientSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif