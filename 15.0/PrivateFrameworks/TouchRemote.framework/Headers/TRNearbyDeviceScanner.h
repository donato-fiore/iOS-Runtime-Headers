// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRNEARBYDEVICESCANNER_H
#define TRNEARBYDEVICESCANNER_H

@class SFDeviceDiscovery;
@protocol TRNearbyDeviceScannerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TRNearbyDeviceScanner : NSObject

@property (weak) NSObject<TRNearbyDeviceScannerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // ivar: _deviceDiscovery
@property NSUInteger requestedService; // ivar: _requestedService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scannerQ; // ivar: _scannerQ
@property (nonatomic) NSUInteger state; // ivar: _state


+(void)initialize;
-(id)init;
-(void)_deviceChanged:(id)arg0 ;
-(void)_deviceFound:(id)arg0 ;
-(void)_handleActivationWithError:(id)arg0 ;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)openSession:(id)arg0 withCompletion:(id)arg1 ;
-(void)startScanningForDevicesWithService:(NSUInteger)arg0 ;
-(void)stopScanning;


@end


#endif