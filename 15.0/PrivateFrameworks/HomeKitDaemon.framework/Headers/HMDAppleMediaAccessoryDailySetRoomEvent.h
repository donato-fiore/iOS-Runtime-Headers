// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYDAILYSETROOMEVENT_H
#define HMDAPPLEMEDIAACCESSORYDAILYSETROOMEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *currentRoom; // ivar: _currentRoom
@property (readonly, copy) NSString *previousRoom; // ivar: _previousRoom


+(id)filterToAllowedRoomName:(id)arg0 ;
-(id)eventName;
-(id)initWithCurrentRoom:(id)arg0 previousRoom:(id)arg1 ;
-(id)serializedEvent;


@end


#endif