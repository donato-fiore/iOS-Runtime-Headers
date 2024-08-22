// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTSIRIASSERTIONMONITOR_H
#define VTSIRIASSERTIONMONITOR_H



#import "VTEventMonitor.h"

@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char _assertionState;
}




+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)init;
-(void)_notifyObserver:(BOOL)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)dealloc;
-(void)disableAssertionReceived;
-(void)enableAssertionReceived;


@end


#endif