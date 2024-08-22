// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTUPHONECALLSTATEMONITOR_H
#define CSTUPHONECALLSTATEMONITOR_H

@class TUCallCenter;
@protocol OS_dispatch_queue;


#import "CSPhoneCallStateMonitor.h"

@interface CSTUPhoneCallStateMonitor : CSPhoneCallStateMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) TUCallCenter *tuCallCenter; // ivar: _tuCallCenter
@property (nonatomic) NSUInteger tuPhoneCallState; // ivar: _tuPhoneCallState


+(id)sharedInstance;
-(BOOL)firstPartyCall;
-(NSUInteger)_fetchTUPhoneCallState;
-(NSUInteger)phoneCallState;
-(id)init;
-(void)_callStatusDidChangeHandler:(id)arg0 ;
-(void)_registerPhoneCallStateChangeNotifier;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif