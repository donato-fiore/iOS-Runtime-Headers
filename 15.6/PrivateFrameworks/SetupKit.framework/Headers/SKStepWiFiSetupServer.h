// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTEPWIFISETUPSERVER_H
#define SKSTEPWIFISETUPSERVER_H

@class CUBonjourAdvertiser, CUReachabilityMonitor, NSDictionary, NSError, NSString, NSData;
@protocol CULabelable, SKStepable, OS_dispatch_source, OS_dispatch_queue, CUMessaging;

#import <Foundation/Foundation.h>


@interface SKStepWiFiSetupServer : NSObject <CULabelable, SKStepable>

 {
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    NSObject<OS_dispatch_source> *_bonjourTimeoutTimer;
    BOOL _internetReachabilityEnabled;
    CUReachabilityMonitor *_internetReachabilityMonitor;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CGFloat _metricTotalSeconds;
    id *_responseHandler;
    int _runState;
    NSDictionary *_scanResult;
    NSUInteger _startTicks;
    BOOL _stepDone;
    NSError *_stepError;
    *LogCategory _ucat;
    int _wifiChannel;
    BOOL _wifiDirected;
    id *_wifiEAPConfig;
    id *_wifiEAPTrustExceptions;
    BOOL _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *skCompletionHandler; // ivar: _skCompletionHandler
@property (retain, nonatomic) NSObject<CUMessaging> *skMessaging; // ivar: _skMessaging
@property (readonly) Class superclass;


-(id)init;
-(void)_activate;
-(void)_completeWithError:(id)arg0 ;
-(void)_handleRequestBonjourTestDone:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleRequestBonjourTestStart:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleRequestWiFiSetup:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidated;
-(void)_run;
-(void)_runInternetReachabilityStart;
-(void)_runJoinStart:(int)arg0 ;
-(void)_runScanResults:(id)arg0 error:(id)arg1 channel:(int)arg2 ;
-(void)_runScanStart:(int)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif