// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBIDLETIMERGLOBALNUMERICSETTINGMONITOR_H
#define _SBIDLETIMERGLOBALNUMERICSETTINGMONITOR_H

@class SBIdleTimerGlobalSettingMonitor, NSNumber;



@interface _SBIdleTimerGlobalNumericSettingMonitor : SBIdleTimerGlobalSettingMonitor {
    NSNumber *_settingCache;
    id *_fetchSettingFromSource;
}


@property (readonly, nonatomic) NSNumber *numericValue;


-(BOOL)_updateCache;
-(id)formattedValue;
-(id)initWithLabel:(id)arg0 delegate:(id)arg1 updatingForNotification:(id)arg2 fetchingWith:(id)arg3 ;
-(void)_settingChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif