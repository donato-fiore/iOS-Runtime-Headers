// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCREENTIMEENABLEMENTCOREANALYTICSEVENT_H
#define STSCREENTIMEENABLEMENTCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STScreenTimeEnablementCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly) NSInteger numberOfGuardians; // ivar: _numberOfGuardians
@property (readonly, copy) NSDictionary *payload;
@property (readonly) BOOL pinSet; // ivar: _pinSet
@property (readonly) BOOL screenTimeEnabled; // ivar: _screenTimeEnabled
@property (readonly) NSInteger userAgeGroup; // ivar: _userAgeGroup
@property (readonly) BOOL userIsRemote; // ivar: _userIsRemote


-(id)initWithScreenTimeEnabled:(BOOL)arg0 numberOfGuardians:(NSInteger)arg1 pinSet:(BOOL)arg2 userAgeGroup:(NSInteger)arg3 userIsRemote:(BOOL)arg4 ;


@end


#endif