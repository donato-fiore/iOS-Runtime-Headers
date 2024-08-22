// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSIRIENABLEDMONITOR_H
#define CSSIRIENABLEDMONITOR_H



#import "CSEventMonitor.h"

@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriEnabled;
}




+(id)sharedInstance;
-(BOOL)fetchIsEnabled;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceiveSiriSettingChanged:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif