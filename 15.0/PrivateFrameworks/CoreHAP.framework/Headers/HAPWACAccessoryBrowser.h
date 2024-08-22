// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPWACACCESSORYBROWSER_H
#define HAPWACACCESSORYBROWSER_H

@class HMFTimer, NSString, NSDate, CUWiFiScanner, NSMutableSet;
@protocol HMFTimerDelegate, HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HAPWACAccessoryBrowserDelegate;


#import "HAPAccessoryServerBrowser.h"

@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser <HMFTimerDelegate, HMFLogging>



@property (weak, nonatomic) NSObject<HAPAirPlayAccessoryBrowserDelegate> *airplayDelegate; // ivar: _airplayDelegate
@property (readonly, nonatomic) HMFTimer *backoffTimer; // ivar: _backoffTimer
@property (retain, nonatomic) NSString *browsingIdentifier; // ivar: _browsingIdentifier
@property (retain, nonatomic) NSDate *browsingStartTime; // ivar: _browsingStartTime
@property (retain, nonatomic) CUWiFiScanner *cuWiFiScanner; // ivar: _cuWiFiScanner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HAPWACAccessoryBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *found2Pt4Completion; // ivar: _found2Pt4Completion
@property (retain, nonatomic) NSMutableSet *found2Pt4Networks; // ivar: _found2Pt4Networks
@property (retain, nonatomic) NSMutableSet *foundUnconfiguredPairedAccessories; // ivar: _foundUnconfiguredPairedAccessories
@property (retain, nonatomic) NSMutableSet *foundUnconfiguredUnpairedAccessories; // ivar: _foundUnconfiguredUnpairedAccessories
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *scanning2Pt4SSID; // ivar: _scanning2Pt4SSID
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_removeUnconfiguredWACDevice:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)visible2Pt4Networks;
-(void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg0 ;
-(void)_handleBrowsingBackOffTimerExpiry;
-(void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg0 ;
-(void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg0 ;
-(void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg0 ;
-(void)_handleUnconfiguredPairedWACDevice:(id)arg0 ;
-(void)_initWiFiScannerWithScanner:(id)arg0 ;
-(void)_reportFound2Pt4Network:(id)arg0 ;
-(void)_restartBrowsingWithAllNetworks;
-(void)_startBrowsingForWACAccessories;
-(void)_stopBrowsingForWACAccessories;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)handleChangeUnconfiguredWACDevice:(id)arg0 ;
-(void)handleFoundAPDevice:(id)arg0 ;
-(void)handleFoundUnconfiguredPairedWACDevice:(id)arg0 ;
-(void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg0 ;
-(void)handleRemovedUnconfiguredWACDevice:(id)arg0 ;
-(void)initWiFiScannerWithScanner:(id)arg0 ;
-(void)scan2Pt4APWithSSID:(id)arg0 completion:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg0 ;
-(void)stopDiscoveringAccessoryServers;
-(void)timerDidFire:(id)arg0 ;


@end


#endif