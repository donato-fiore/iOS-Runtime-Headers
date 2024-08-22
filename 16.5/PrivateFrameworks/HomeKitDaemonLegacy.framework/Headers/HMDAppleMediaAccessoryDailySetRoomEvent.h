// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYDAILYSETROOMEVENT_H
#define HMDAPPLEMEDIAACCESSORYDAILYSETROOMEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *currentRoom; // ivar: _currentRoom
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *previousRoom; // ivar: _previousRoom
@property (readonly) Class superclass;


+(id)filterToAllowedRoomName:(id)arg0 ;
-(id)initWithCurrentRoom:(id)arg0 previousRoom:(id)arg1 ;


@end


#endif