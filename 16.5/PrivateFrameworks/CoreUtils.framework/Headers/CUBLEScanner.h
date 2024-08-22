// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUBLESCANNER_H
#define CUBLESCANNER_H

@class CBCentralManager, NSMutableDictionary, NSDictionary, NSString;
@protocol CBCentralManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUSystemMonitor.h"

@interface CUBLEScanner : NSObject <CBCentralManagerDelegate>

 {
    BOOL _activateCalled;
    CBCentralManager *_centralManager;
    BOOL _changesPending;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _rssiThreshold;
    NSDictionary *_scanParametersCurrent;
    BOOL _scannerStartCalled;
    CUSystemMonitor *_systemMonitor;
    *LogCategory _ucat;
}


@property (nonatomic) int bluetoothState; // ivar: _bluetoothState
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property int rssiThreshold;
@property (nonatomic) unsigned int scanFlags; // ivar: _scanFlags
@property (nonatomic) int scanRate; // ivar: _scanRate
@property (readonly) Class superclass;


-(BOOL)_shouldScan;
-(id)_scanParameters;
-(id)_scanParametersSummary:(id)arg0 ;
-(id)init;
-(void)_invalidate;
-(void)_invalidated;
-(void)_stopScanIfNeededWithReason:(char *)arg0 ;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)_updateScanRules:(*id)arg0 payloadType:(unsigned char)arg1 rssiThreshold:(int)arg2 ;
-(void)activate;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif