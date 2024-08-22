// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIWAKEREQUESTSIGNALMONITOR_H
#define POWERUIWAKEREQUESTSIGNALMONITOR_H

@class NSString, _CDContextualChangeRegistration;
@protocol PowerUISignalMonitor, _CDContext, PowerUISignalMonitorDelegate, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUIWakeRequestSignalMonitor : NSObject <PowerUISignalMonitor>



@property (retain, nonatomic) NSObject<_CDContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PowerUISignalMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) _CDContextualChangeRegistration *registration; // ivar: _registration
@property (readonly) Class superclass;


+(id)monitorWithDelegate:(id)arg0 ;
-(NSUInteger)signalID;
-(id)initWithDelegate:(id)arg0 ;
-(id)nextUserVisibleWakeDate;
-(id)requiredFullChargeDate;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif