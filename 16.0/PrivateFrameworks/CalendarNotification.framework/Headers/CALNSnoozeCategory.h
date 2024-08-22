// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNSNOOZECATEGORY_H
#define CALNSNOOZECATEGORY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CALNSnoozeCategory : NSObject {
    CGFloat _timedExpirationInterval;
    BOOL _relativeToEnd;
    BOOL _validForAllDay;
}


@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) CGFloat leeway; // ivar: _leeway
@property (readonly, nonatomic) NSString *suffix; // ivar: _suffix


+(id)snoozeCategories;
+(id)snoozeCategoryForEventWithStartDate:(id)arg0 endDate:(id)arg1 now:(id)arg2 isAllDay:(BOOL)arg3 ;
-(id)expirationDateForEventWithStartDate:(id)arg0 endDate:(id)arg1 isAllDay:(BOOL)arg2 ;
-(id)initWithSuffix:(id)arg0 timedExpirationInterval:(CGFloat)arg1 leeway:(CGFloat)arg2 relativeToEnd:(BOOL)arg3 validForAllDay:(BOOL)arg4 actions:(id)arg5 ;


@end


#endif