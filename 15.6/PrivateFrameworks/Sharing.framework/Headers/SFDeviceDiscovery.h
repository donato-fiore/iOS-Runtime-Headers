// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICEDISCOVERY_H
#define SFDEVICEDISCOVERY_H

@class NSMutableDictionary, NSXPCConnection, NSSet, NSString;
@protocol NSSecureCoding, SFXPCInterface, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface>

 {
    BOOL _activateCalled;
    NSUInteger _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _legacy;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) NSSet *deviceFilter; // ivar: _deviceFilter
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (nonatomic) NSUInteger discoveryFlags; // ivar: _discoveryFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSInteger fastScanMode; // ivar: _fastScanMode
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL overrideScreenOff; // ivar: _overrideScreenOff
@property (copy, nonatomic) NSString *purpose; // ivar: _purpose
@property (nonatomic) BOOL rssiChangeDetection; // ivar: _rssiChangeDetection
@property (nonatomic) NSInteger rssiThreshold; // ivar: _rssiThreshold
@property (nonatomic) BOOL scanCache; // ivar: _scanCache
@property (nonatomic) NSInteger scanRate; // ivar: _scanRate
@property (nonatomic) NSInteger scanRateOverride; // ivar: _scanRateOverride
@property (readonly, nonatomic) NSInteger scanState; // ivar: _scanState
@property (copy, nonatomic) id *scanStateChangedHandler; // ivar: _scanStateChangedHandler
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler
@property (nonatomic) BOOL trackPeers; // ivar: _trackPeers


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)_ensureXPCStarted;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_invokeBlockActivateSafe:(id)arg0 ;
-(void)_retryConsole;
-(void)_startTimeoutIfNeeded;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deviceDiscoveryDeviceChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)deviceDiscoveryFoundDevice:(id)arg0 ;
-(void)deviceDiscoveryLostDevice:(id)arg0 ;
-(void)deviceDiscoveryScanStateChanged:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fastScanCancel:(id)arg0 ;
-(void)fastScanTrigger:(id)arg0 ;
-(void)invalidate;
-(void)triggerEnhancedDiscovery:(id)arg0 ;


@end


#endif