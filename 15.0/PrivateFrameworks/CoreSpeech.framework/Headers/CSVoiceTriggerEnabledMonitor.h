// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERENABLEDMONITOR_H
#define CSVOICETRIGGERENABLEDMONITOR_H



#import "CSEventMonitor.h"

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}




+(id)sharedInstance;
-(BOOL)_checkVoiceTriggerEnabled;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg0 ;
-(void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif