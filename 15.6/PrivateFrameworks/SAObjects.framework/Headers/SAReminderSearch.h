// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAREMINDERSEARCH_H
#define SAREMINDERSEARCH_H

@class NSNumber, NSDate, NSString;


#import "SADomainCommand.h"

@interface SAReminderSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *completionStatus;
@property (copy, nonatomic) NSDate *dueAfter;
@property (copy, nonatomic) NSDate *dueBefore;
@property (copy, nonatomic) NSString *listName;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif