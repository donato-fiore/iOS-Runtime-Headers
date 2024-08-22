// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSJARVISTRIGGERMODEMONITOR_H
#define CSJARVISTRIGGERMODEMONITOR_H



#import "CSEventMonitor.h"

@interface CSJarvisTriggerModeMonitor : CSEventMonitor {
    NSInteger _triggerMode;
}




+(id)sharedInstance;
+(id)triggerModeStringDescription:(NSInteger)arg0 ;
-(NSInteger)_fetchTriggerMode;
-(NSInteger)getTriggerMode;
-(id)init;
-(void)_notifyJarvisTriggerModeDidChanged;
-(void)_notifyObserver:(id)arg0 withJarvisTriggerMode:(NSInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)setTriggerMode:(NSInteger)arg0 ;


@end


#endif