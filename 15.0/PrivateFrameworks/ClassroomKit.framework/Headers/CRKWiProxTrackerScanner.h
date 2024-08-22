// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKWIPROXTRACKERSCANNER_H
#define CRKWIPROXTRACKERSCANNER_H

@class NSString, WPDeviceScanner, WPZoneTracker;
@protocol WPZoneTrackerDelegate, WPDeviceScannerDelegate, CRKWiProxTrackerScannerDelegate;

#import <Foundation/Foundation.h>


@interface CRKWiProxTrackerScanner : NSObject <WPZoneTrackerDelegate, WPDeviceScannerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKWiProxTrackerScannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WPDeviceScanner *deviceScanner; // ivar: _deviceScanner
@property (readonly, nonatomic) NSInteger deviceScannerState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WPZoneTracker *zoneTracker; // ivar: _zoneTracker
@property (readonly, nonatomic) NSInteger zoneTrackerState;


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)deviceScannerDidUpdateState:(id)arg0 ;
-(void)invalidate;
-(void)registerForDevicesMatching:(id)arg0 options:(id)arg1 ;
-(void)registerForZoneChangesMatching:(id)arg0 ;
-(void)scanner:(id)arg0 didFailToRegisterDevices:(id)arg1 withError:(id)arg2 ;
-(void)scanner:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 ;
-(void)scanner:(id)arg0 foundRequestedDevices:(id)arg1 ;
-(void)unregisterAllDeviceChanges;
-(void)unregisterAllZoneChanges;
-(void)unregisterForZoneChanges:(id)arg0 ;
-(void)zoneTracker:(id)arg0 didFailToRegisterZones:(id)arg1 withError:(id)arg2 ;
-(void)zoneTracker:(id)arg0 enteredZone:(id)arg1 ;
-(void)zoneTracker:(id)arg0 exitedZone:(id)arg1 ;
-(void)zoneTrackerDidUpdateState:(id)arg0 ;


@end


#endif