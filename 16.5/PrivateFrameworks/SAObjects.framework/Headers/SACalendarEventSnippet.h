// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACALENDAREVENTSNIPPET_H
#define SACALENDAREVENTSNIPPET_H

@class NSArray, NSDate, NSString;


#import "SAUISnippet.h"

@interface SACalendarEventSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDate *snippetEndDate;
@property (copy, nonatomic) NSDate *snippetStartDate;
@property (copy, nonatomic) NSString *timeZoneId;


+(id)eventSnippet;
+(id)eventSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif