// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAALARMSEARCH_H
#define SAALARMSEARCH_H

@class NSNumber, NSArray, NSURL, NSString;


#import "SADomainCommand.h"

@interface SAAlarmSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSNumber *includesSleepAlarms;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif