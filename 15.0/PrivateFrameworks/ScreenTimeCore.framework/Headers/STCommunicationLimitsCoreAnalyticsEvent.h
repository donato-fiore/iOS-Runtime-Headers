// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCOMMUNICATIONLIMITSCOREANALYTICSEVENT_H
#define STCOMMUNICATIONLIMITSCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STCommunicationLimitsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly) BOOL communicationLimited; // ivar: _communicationLimited
@property (readonly) BOOL contactEditingAllowed; // ivar: _contactEditingAllowed
@property (readonly) BOOL contactManagementEnabled; // ivar: _contactManagementEnabled
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSInteger userAgeGroup; // ivar: _userAgeGroup
@property (readonly) BOOL userIsRemote; // ivar: _userIsRemote


-(id)initWithCommunicationLimited:(BOOL)arg0 contactManagementEnabled:(BOOL)arg1 contactEditingAllowed:(BOOL)arg2 userAgeGroup:(NSInteger)arg3 userIsRemote:(BOOL)arg4 ;


@end


#endif