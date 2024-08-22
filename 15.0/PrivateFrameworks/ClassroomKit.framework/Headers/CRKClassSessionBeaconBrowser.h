// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCLASSSESSIONBEACONBROWSER_H
#define CRKCLASSSESSIONBEACONBROWSER_H

@class NSMutableSet, NSString, NSSet;
@protocol CRKWiProxTrackerScannerDelegate, CRKClassSessionBeaconBrowserDelegate;

#import <Foundation/Foundation.h>

#import "CRKWiProxTrackerScanner.h"

@interface CRKClassSessionBeaconBrowser : NSObject <CRKWiProxTrackerScannerDelegate>

 {
    NSInteger mZoneTrackerLastState;
    NSMutableSet *mScanningZones;
    NSInteger mIncreasedScanRequestCount;
}


@property (nonatomic) BOOL allowInvitationSessions; // ivar: _allowInvitationSessions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKClassSessionBeaconBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBrowsing; // ivar: _isBrowsing
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (copy, nonatomic) NSSet *organizationUUIDs; // ivar: _organizationUUIDs
@property (readonly) Class superclass;
@property (retain, nonatomic) CRKWiProxTrackerScanner *trackerScanner; // ivar: _trackerScanner
@property (copy, nonatomic) NSSet *trackingUUIDs; // ivar: _trackingUUIDs


+(id)invitationUUID;
-(id)init;
-(id)organizationUUIDsMatchingZoneData:(id)arg0 ;
-(id)stateDictionary;
-(id)zoneDataForAdvertisementUUID:(id)arg0 ;
-(id)zoneDataForOrganizationUUID:(id)arg0 ;
-(void)dealloc;
-(void)delegateDidFailWithError:(id)arg0 ;
-(void)delegateDidFindClassSession:(id)arg0 flags:(unsigned short)arg1 ;
-(void)delegateDidFindInvitationSessionWithEndpoint:(id)arg0 ;
-(void)increaseScanFrequencyForDuration:(CGFloat)arg0 ;
-(void)increasedScanDurationElapsed;
-(void)startBrowsing;
-(void)startInitialScan;
-(void)startScanningForDevicesInZone:(id)arg0 ;
-(void)stopBrowsing;
-(void)stopScanningForDevicesInAllZones;
-(void)stopScanningForDevicesInZone:(id)arg0 ;
-(void)trackerScanner:(id)arg0 didUpdateDeviceScannerState:(id)arg1 ;
-(void)trackerScanner:(id)arg0 didUpdateZoneTrackerState:(id)arg1 ;
-(void)trackerScanner:(id)arg0 scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3 ;
-(void)trackerScanner:(id)arg0 scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)trackerScanner:(id)arg0 scanner:(id)arg1 foundRequestedDevices:(id)arg2 ;
-(void)trackerScanner:(id)arg0 zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3 ;
-(void)trackerScanner:(id)arg0 zoneTracker:(id)arg1 enteredZone:(id)arg2 ;
-(void)trackerScanner:(id)arg0 zoneTracker:(id)arg1 exitedZone:(id)arg2 ;
-(void)updateScanner;
-(void)updateZones;


@end


#endif