// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOICATEGORYVISITEVENT_H
#define ATXPOICATEGORYVISITEVENT_H

@class NSDate, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface ATXPOICategoryVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL hasExited; // ivar: _hasExited
@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames; // ivar: _possibleCategoryNames
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPOICategoryVisitEvent:(id)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithPossibleCategoryNames:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 hasExited:(BOOL)arg3 ;


@end


#endif