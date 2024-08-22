// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIWALLETSIGNALMONITOR_H
#define POWERUIWALLETSIGNALMONITOR_H

@class NSString;
@protocol PowerUISignalMonitor, PowerUISignalMonitorDelegate, OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PowerUISignalMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *waitForFinalChangeTimer; // ivar: _waitForFinalChangeTimer


+(id)monitorWithDelegate:(id)arg0 ;
+(id)wallet;
-(NSUInteger)signalID;
-(id)detectedSignals;
-(id)initWithDelegate:(id)arg0 ;
-(id)requiredFullChargeDate;
-(void)sourceInformationChangedNotification:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif