// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSHANGUPENABLEDMONITOR_H
#define CSHANGUPENABLEDMONITOR_H

@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSHangUpEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(BOOL)_checkCanUseVoiceTriggerDuringCallEnabled;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)_voiceTriggerDuringCallEnabledDidChange;


@end


#endif