// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTEPWIFISETUPCLIENT_H
#define SKSTEPWIFISETUPCLIENT_H

@class CUBonjourBrowser, NSString, CUReachabilityMonitor, NSError, CWFInterface;
@protocol CULabelable, SKStepable, OS_dispatch_source, OS_dispatch_queue, CUMessaging;

#import <Foundation/Foundation.h>

#import "SKSetupBase.h"

@interface SKStepWiFiSetupClient : NSObject <CULabelable, SKStepable>

 {
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _internetReachabilityEnabled;
    CUReachabilityMonitor *_internetReachabilityMonitor;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
    NSUInteger _startBonjourTestTicks;
    NSUInteger _startTicks;
    BOOL _stepDone;
    NSError *_stepError;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    *LogCategory _ucat;
    CWFInterface *_wifiInterface;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) CGFloat metricTotalSeconds; // ivar: _metricTotalSeconds
@property (readonly, nonatomic) CGFloat metricWiFiSetupSeconds; // ivar: _metricWiFiSetupSeconds
@property (copy, nonatomic) id *skCompletionHandler; // ivar: _skCompletionHandler
@property (retain, nonatomic) NSObject<CUMessaging> *skMessaging; // ivar: _skMessaging
@property (weak, nonatomic) SKSetupBase *skSetupObject; // ivar: _skSetupObject
@property (readonly) Class superclass;


-(BOOL)_runInit;
-(id)init;
-(void)_completeWithError:(id)arg0 ;
-(void)_invalidateCore;
-(void)_invalidated;
-(void)_run;
-(void)_runInternetReachabilityStart;
-(void)_runWiFiSetupStart;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif