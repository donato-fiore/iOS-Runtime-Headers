// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPORTSSCHEDULESNIPPET_H
#define SASPORTSSCHEDULESNIPPET_H

@class NSArray;


#import "SASportsSnippet.h"

@interface SASportsScheduleSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *matchups;


+(id)scheduleSnippet;
+(id)scheduleSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif