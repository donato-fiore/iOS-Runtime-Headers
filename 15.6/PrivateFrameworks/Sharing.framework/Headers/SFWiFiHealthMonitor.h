// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFWIFIHEALTHMONITOR_H
#define SFWIFIHEALTHMONITOR_H

@class CURetrier;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFWiFiHealthMonitor : NSObject {
    BOOL _invalidateCalled;
    int _lockdownActivated;
    int _lockdownActivationNotifyToken;
    *__WiFiDeviceClient _wifiDevice;
    BOOL _wifiDeviceSetup;
    *__WiFiManagerClient _wifiManager;
    BOOL _wifiManagerSetup;
    CURetrier *_wifiRetrier;
    NSUInteger _wifiStatusBadTicks;
    NSUInteger _wifiStatusGoodTicks;
    CGFloat _wifiStatusDebounceSecs;
    NSObject<OS_dispatch_source> *_wifiStatusDebounceTimer;
    NSInteger _wifiStatusExternal;
    NSInteger _wifiStatusInternal;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *statusHandler; // ivar: _statusHandler


-(id)description;
-(id)init;
-(void)_activate;
-(void)_invalidate;
-(void)_update;
-(void)_wifiAutoJoinNotification:(id)arg0 ;
-(void)_wifiEnsureStarted;
-(void)_wifiEnsureStopped;
-(void)_wifiStatusChangedExternal:(NSInteger)arg0 ;
-(void)_wifiStatusChangedInternal:(NSInteger)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)reset;


@end


#endif