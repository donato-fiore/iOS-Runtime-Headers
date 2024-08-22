// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDTESTING_H
#define CNVCARDTESTING_H


#import <Foundation/Foundation.h>


@interface CNVCardTesting : NSObject



+(BOOL)version21DataUsingAdapter:(id)arg0 containsData:(id)arg1 ;
+(BOOL)version30CardForPerson:(id)arg0 containsLine:(id)arg1 ;
+(BOOL)version30CardForPerson:(id)arg0 containsString:(id)arg1 ;
+(BOOL)version30DataUsingAdapter:(id)arg0 containsData:(id)arg1 ;
+(id)activityAlertResultWithTypes:(id)arg0 sounds:(id)arg1 vibrations:(id)arg2 ;
+(id)cardDataWithBodyLines:(id)arg0 version:(id)arg1 encoding:(NSUInteger)arg2 ;
+(id)chineseDateWithEra:(NSInteger)arg0 year:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3 ;
+(id)complexValueWithValue:(id)arg0 label:(id)arg1 isPrimary:(BOOL)arg2 ;
+(id)emailItemWithAddress:(id)arg0 label:(id)arg1 ;
+(id)gregorianDateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 ;
+(id)instantMessagingItemWithUsername:(id)arg0 service:(id)arg1 label:(id)arg2 ;
+(id)itemWithValue:(id)arg0 label:(id)arg1 ;
+(id)linesUsingAdapter:(id)arg0 ;
+(id)linesUsingAdapter:(id)arg0 options:(id)arg1 ;
+(id)parseCardWithBodyLine:(id)arg0 ;
+(id)parseCardWithBodyLines:(id)arg0 ;
+(id)parseCardWithBodyLines:(id)arg0 version:(id)arg1 encoding:(NSUInteger)arg2 ;
+(id)parseCardWithData:(id)arg0 ;
+(id)parseCardWithData:(id)arg0 options:(id)arg1 ;
+(id)resultWithProperty:(id)arg0 value:(id)arg1 label:(id)arg2 isPrimary:(BOOL)arg3 ;
+(id)unknownPropertyWithName:(id)arg0 line:(id)arg1 ;
+(id)version21DataUsingAdapter:(id)arg0 ;
+(id)version30DataUsingAdapter:(id)arg0 ;


@end


#endif