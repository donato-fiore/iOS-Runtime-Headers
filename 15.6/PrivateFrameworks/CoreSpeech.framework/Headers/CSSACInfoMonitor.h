// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSACINFOMONITOR_H
#define CSSACINFOMONITOR_H

@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSSACInfoMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isDeviceRoleStereo;
}




+(id)sharedInstance;
-(BOOL)isDeviceRoleStereo;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif