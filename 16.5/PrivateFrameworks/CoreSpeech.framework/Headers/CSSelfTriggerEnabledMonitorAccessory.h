// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSELFTRIGGERENABLEDMONITORACCESSORY_H
#define CSSELFTRIGGERENABLEDMONITORACCESSORY_H



#import "CSEventMonitor.h"

@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor

@property (nonatomic) BOOL enabled; // ivar: _enabled


+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceiveSelfTriggerChanged:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)setEnable:(BOOL)arg0 ;


@end


#endif