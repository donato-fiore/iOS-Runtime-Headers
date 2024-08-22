// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASMSSEARCH_H
#define SASMSSEARCH_H

@class NSDate, NSString, NSNumber, NSArray;


#import "SADomainCommand.h"
#import "SASmsGroupName.h"

@interface SASmsSearch : SADomainCommand

@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *senders;
@property (retain, nonatomic) SASmsGroupName *smsGroup;
@property (copy, nonatomic) NSDate *start;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSNumber *unread;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif