// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETEINFREQUENTRECENTRESULT_H
#define CNAUTOCOMPLETEINFREQUENTRECENTRESULT_H



#import "CNAutocompleteRecentResult.h"

@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult

@property NSUInteger dateCount; // ivar: _dateCount


+(NSUInteger)category;
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg0 value:(id)arg1 lastSendingAddress:(id)arg2 dateCount:(NSUInteger)arg3 date:(id)arg4 ;
+(id)groupResultWithDisplayName:(id)arg0 dateCount:(NSUInteger)arg1 date:(id)arg2 ;


@end


#endif