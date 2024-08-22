// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTBIOMETRICMATCHMONITOR_H
#define VTBIOMETRICMATCHMONITOR_H

@class BKDevice, NSString;
@protocol BKDeviceDelegate, VTBiometricMatchMonitorDelegate;


#import "VTEventMonitor.h"

@interface VTBiometricMatchMonitor : VTEventMonitor <BKDeviceDelegate>



@property (retain, nonatomic) BKDevice *biometricDevice; // ivar: _biometricDevice
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VTBiometricMatchMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)getLastBiometricMatchEvent:(*BOOL)arg0 atTime:(*NSUInteger)arg1 ;
-(id)init;
-(void)device:(id)arg0 matchEventOccurred:(id)arg1 ;
-(void)startObserving;


@end


#endif