// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STVIEWALLACTIVITYCOREANALYTICSEVENT_H
#define STVIEWALLACTIVITYCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STViewAllActivityCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly) NSInteger daysSinceLastView; // ivar: _daysSinceLastView
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSInteger userAgeGroup; // ivar: _userAgeGroup
@property (readonly) BOOL userIsManaged; // ivar: _userIsManaged
@property (readonly) BOOL userIsRemote; // ivar: _userIsRemote


-(id)initWithDaysSinceLastView:(NSInteger)arg0 userAgeGroup:(NSInteger)arg1 userIsManaged:(BOOL)arg2 userIsRemote:(BOOL)arg3 ;


@end


#endif