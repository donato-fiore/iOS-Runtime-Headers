// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDEVICEOPERATIONWIFISETUP_H
#define SFDEVICEOPERATIONWIFISETUP_H

@class CUBonjourBrowser, NSString, CUReachabilityMonitor;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFDeviceOperationWiFiSetup : NSObject {
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _invalidateCalled;
    BOOL _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSUInteger _startTicks;
    NSUInteger _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}


@property (readonly, nonatomic) int bonjourTestState; // ivar: _bonjourTestState
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) CGFloat metricBonjourTestSeconds; // ivar: _metricBonjourTestSeconds
@property (readonly, nonatomic) CGFloat metricTotalSeconds; // ivar: _metricTotalSeconds
@property (readonly, nonatomic) CGFloat metricWiFiSetupSeconds; // ivar: _metricWiFiSetupSeconds
@property (nonatomic) unsigned int repairFlags; // ivar: _repairFlags
@property (nonatomic) unsigned int setupFlags; // ivar: _setupFlags
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession


-(id)init;
-(void)_activate;
-(void)_activate2;
-(void)_bonjourTestFoundDevice:(id)arg0 ;
-(void)_bonjourTestStart;
-(void)_bonjourTestTimeout;
-(void)_complete:(id)arg0 ;
-(void)_setupResponse:(id)arg0 ;
-(void)activate;
-(void)invalidate;


@end


#endif