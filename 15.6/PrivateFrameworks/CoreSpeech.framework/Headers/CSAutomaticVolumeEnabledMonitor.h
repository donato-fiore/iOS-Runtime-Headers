// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUTOMATICVOLUMEENABLEDMONITOR_H
#define CSAUTOMATICVOLUMEENABLEDMONITOR_H

@class NSUserDefaults;
@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor {
    BOOL _isAutomaticVolumeEnabled;
    NSUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(id)init;
-(void)_didReceiveAutomaticVolumeToggled:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif