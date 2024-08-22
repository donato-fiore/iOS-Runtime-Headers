// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOICATEGORYVISITDUETEVENT_H
#define ATXPOICATEGORYVISITDUETEVENT_H

@class NSOrderedSet;


#import "ATXDuetEvent.h"

@interface ATXPOICategoryVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) BOOL hasExited; // ivar: _hasExited
@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames; // ivar: _possibleCategoryNames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPOICategoryVisitDuetEvent:(id)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithCurrentContextStoreValues;
-(id)initWithPossibleCategoryNames:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithPossibleCategoryNames:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 hasExited:(BOOL)arg3 ;


@end


#endif