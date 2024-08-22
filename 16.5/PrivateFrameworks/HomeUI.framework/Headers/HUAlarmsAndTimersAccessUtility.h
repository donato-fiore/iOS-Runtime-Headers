// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUALARMSANDTIMERSACCESSUTILITY_H
#define HUALARMSANDTIMERSACCESSUTILITY_H


#import <Foundation/Foundation.h>


@interface HUAlarmsAndTimersAccessUtility : NSObject



+(id)_canAlarmManagerControl:(id)arg0 withManager:(id)arg1 ;
+(id)_canTimerManagerControl:(id)arg0 withManager:(id)arg1 ;
+(id)canAccess:(id)arg0 for:(NSUInteger)arg1 withManager:(id)arg2 ;


@end


#endif