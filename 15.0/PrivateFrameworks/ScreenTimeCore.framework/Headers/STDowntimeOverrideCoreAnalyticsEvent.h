// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDOWNTIMEOVERRIDECOREANALYTICSEVENT_H
#define STDOWNTIMEOVERRIDECOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STDowntimeOverrideCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly) BOOL downtimeEnabled; // ivar: _downtimeEnabled
@property (readonly) BOOL gracePeriodUsed; // ivar: _gracePeriodUsed
@property (readonly) NSInteger hourOfDay; // ivar: _hourOfDay
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) BOOL scheduleEnabled; // ivar: _scheduleEnabled
@property (readonly) BOOL userIsManaged; // ivar: _userIsManaged


-(id)initWithDowntimeEnabled:(BOOL)arg0 gracePeriodUsed:(BOOL)arg1 scheduleEnabled:(BOOL)arg2 hourOfDay:(NSInteger)arg3 userIsManaged:(BOOL)arg4 ;


@end


#endif