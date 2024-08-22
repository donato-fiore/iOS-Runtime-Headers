// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICEOPERATIONHANDLERWIFISETUP_H
#define SFDEVICEOPERATIONHANDLERWIFISETUP_H

@class CUBonjourAdvertiser, CUReachabilityMonitor, NSDictionary, NSError, NSString, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFDeviceOperationHandlerWiFiSetup : NSObject {
    CUBonjourAdvertiser *_bonjourAdvertiser;
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    id *_responseHandler;
    NSDictionary *_scanResult;
    int _state;
    BOOL _stepDone;
    NSError *_stepError;
    BOOL _reachabilityEnabled;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    int _wifiChannel;
    BOOL _wifiDirected;
    id *_wifiEAPConfig;
    id *_wifiEAPTrustExceptions;
    BOOL _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
    BOOL _wifiSkipReachbility;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession


-(id)init;
-(void)_activate;
-(void)_completeError:(id)arg0 ;
-(void)_handleRequestBonjourTestDone:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleRequestBonjourTestStart:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleWiFiSetupRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_run;
-(void)_runJoinStart:(int)arg0 ;
-(void)_runReachabilityStart;
-(void)_runScanResults:(id)arg0 error:(id)arg1 channel:(int)arg2 ;
-(void)_runScanStart:(int)arg0 ;
-(void)activate;
-(void)invalidate;


@end


#endif