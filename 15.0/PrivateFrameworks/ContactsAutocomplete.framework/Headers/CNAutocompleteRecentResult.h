// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETERECENTRESULT_H
#define CNAUTOCOMPLETERECENTRESULT_H

@class NSDate;


#import "CNAutocompleteResult.h"

@interface CNAutocompleteRecentResult : CNAutocompleteResult

@property BOOL completesChosenGroup; // ivar: _completesChosenGroup
@property (readonly) NSDate *date; // ivar: _date
@property BOOL matchesSendingAddress; // ivar: _matchesSendingAddress


+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg0 value:(id)arg1 lastSendingAddress:(id)arg2 date:(id)arg3 ;
+(id)groupResultWithDisplayName:(id)arg0 date:(id)arg1 ;


@end


#endif