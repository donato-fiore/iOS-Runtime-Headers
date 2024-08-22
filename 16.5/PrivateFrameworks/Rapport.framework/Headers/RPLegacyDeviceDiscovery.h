// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPLEGACYDEVICEDISCOVERY_H
#define RPLEGACYDEVICEDISCOVERY_H

@class NSData, NSMutableDictionary, SFDeviceDiscovery, CUMobileDeviceDiscovery, CUWiFiScanner, NSSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPLegacyDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    NSData *_blePayloadFilterData;
    NSData *_blePayloadFilterMask;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _verifyDevices;
    SFDeviceDiscovery *_bleDiscovery;
    *BonjourBrowser _bonjourBrowser;
    CUMobileDeviceDiscovery *_mdDiscovery;
    BOOL _wifiAirPlayWAC;
    CUWiFiScanner *_wifiScanner;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (nonatomic) unsigned char deviceActionType; // ivar: _deviceActionType
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) NSSet *deviceFilter; // ivar: _deviceFilter
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) int rssiThreshold; // ivar: _rssiThreshold
@property (nonatomic) BOOL scanCache; // ivar: _scanCache
@property (nonatomic) unsigned int scanRate; // ivar: _scanRate
@property (readonly, nonatomic) unsigned int scanState; // ivar: _scanState
@property (copy, nonatomic) id *scanStateChangedHandler; // ivar: _scanStateChangedHandler
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler
@property (copy, nonatomic) NSString *wifiSSID; // ivar: _wifiSSID
@property (nonatomic) unsigned int wifiScanFlags; // ivar: _wifiScanFlags


-(id)description;
-(id)init;
-(int)_bleStart;
-(int)_bonjourStart;
-(int)_mdStart;
-(int)_wifiStart;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_bleHandleDeviceChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_bleHandleDeviceFound:(id)arg0 ;
-(void)_bleHandleDeviceLost:(id)arg0 ;
-(void)_bonjourHandleAddOrUpdateDevice:(id)arg0 ;
-(void)_bonjourHandleEventType:(unsigned int)arg0 info:(id)arg1 ;
-(void)_bonjourHandleRemoveDevice:(id)arg0 ;
-(void)_cleanup;
-(void)_foundDevice:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_lostAllDevices;
-(void)_lostDeviceByIdentifier:(id)arg0 ;
-(void)_mdHandleDeviceChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_mdHandleDeviceFound:(id)arg0 ;
-(void)_mdHandleDeviceLost:(id)arg0 ;
-(void)_wifiHandleDeviceChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_wifiHandleDeviceFound:(id)arg0 ;
-(void)_wifiHandleDeviceLost:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setBLEPayloadFilterData:(id)arg0 mask:(id)arg1 ;


@end


#endif