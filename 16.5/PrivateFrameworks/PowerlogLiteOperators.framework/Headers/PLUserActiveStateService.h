// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSERACTIVESTATESERVICE_H
#define PLUSERACTIVESTATESERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, NSDictionary, NSDate, NSNumber;



@interface PLUserActiveStateService : PLService

@property (retain) PLEntryNotificationOperatorComposition *batteryNotification; // ivar: _batteryNotification
@property (retain) NSDictionary *cachedBatteryMetrics; // ivar: _cachedBatteryMetrics
@property (retain) NSDate *lastPluggedInTime; // ivar: _lastPluggedInTime
@property (retain) NSDate *lastUnplugTime; // ivar: _lastUnplugTime
@property (retain) NSDate *lastUserInactiveTime;
@property (retain) NSNumber *pluggedInState; // ivar: _pluggedInState
@property CGFloat pluggedInTime; // ivar: _pluggedInTime
@property NSUInteger userActiveNotificationHandle; // ivar: _userActiveNotificationHandle


+(id)defaults;
+(id)entryEventPointDefinitionState;
+(id)entryEventPointDefinitions;
+(void)load;
-(CGFloat)getUserInactiveMinIntervalCA;
-(id)getLastSystemSleepDate;
-(id)init;
-(void)handlePluggedInStateUpdate:(BOOL)arg0 ;
-(void)handleUserActiveStateChangeCallback:(BOOL)arg0 ;
-(void)initOperatorDependancies;


@end


#endif