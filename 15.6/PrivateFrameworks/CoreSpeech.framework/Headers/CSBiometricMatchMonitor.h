// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBIOMETRICMATCHMONITOR_H
#define CSBIOMETRICMATCHMONITOR_H

@class BKDevice, NSString;
@protocol BKDeviceDelegate, CSBiometricMatchMonitorDelegate;


#import "CSEventMonitor.h"

@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate>



@property (retain, nonatomic) BKDevice *biometricDevice; // ivar: _biometricDevice
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSBiometricMatchMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)getLastBiometricMatchEvent:(*BOOL)arg0 atTime:(*NSUInteger)arg1 ;
-(NSUInteger)getBiometricMatchResultForTriggerTimeStamp:(NSUInteger)arg0 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)device:(id)arg0 matchEventOccurred:(id)arg1 ;
-(void)startObserving;


@end


#endif