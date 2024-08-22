// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBIDLETIMERGLOBALBOOLSETTINGMONITOR_H
#define _SBIDLETIMERGLOBALBOOLSETTINGMONITOR_H

@class SBIdleTimerGlobalNumericSettingMonitor;



@interface _SBIdleTimerGlobalBoolSettingMonitor : SBIdleTimerGlobalNumericSettingMonitor

@property (readonly, nonatomic) BOOL boolValue;


-(id)formattedValue;
-(id)initWithLabel:(id)arg0 delegate:(id)arg1 updatingForNotification:(id)arg2 fetchingWith:(id)arg3 ;


@end


#endif