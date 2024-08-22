// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPHONECALLSTATEMONITOR_H
#define CSPHONECALLSTATEMONITOR_H

@class CXCallObserver, NSString, TUCallProviderManager;
@protocol CXCallObserverDelegate;


#import "CSEventMonitor.h"

@interface CSPhoneCallStateMonitor : CSEventMonitor <CXCallObserverDelegate>



@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) TUCallProviderManager *tuCallProviderManager; // ivar: _tuCallProviderManager


+(id)sharedInstance;
-(BOOL)firstPartyCall;
-(NSUInteger)phoneCallState;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;


@end


#endif