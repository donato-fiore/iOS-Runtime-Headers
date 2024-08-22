// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUTILS_H
#define WIFIUTILS_H

@class NSDictionary, NSMutableDictionary, NSTimer;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface WiFiUtils : NSObject {
    NSDictionary *_unmergedScanInfoDict;
    NSMutableDictionary *_missingBSSIDCounts;
    *WiFiShimContext _wifiShim;
    NSObject<OS_dispatch_semaphore> *_wifiBusy;
    BOOL _scanInProgress;
    BOOL _joinInProgress;
    BOOL _scanningActive;
    BOOL _scanOnlyWhenAppActive;
}


@property (retain, nonatomic) NSTimer *_scanTimer; // ivar: _scanTimer
@property (nonatomic) CGFloat periodicScanInterval; // ivar: _periodicScanInterval
@property (nonatomic) int periodicScanType; // ivar: _periodicScanType


+(BOOL)network:(id)arg0 shouldBeIgnored:(int)arg1 ;
+(BOOL)networkIsApple:(id)arg0 productID:(*unsigned int)arg1 ;
+(BOOL)networkIsSecure:(id)arg0 secMode:(*int)arg1 isEnterprise:(*BOOL)arg2 ;
+(BOOL)scanInfoCanJoin2_4GHzNetworks:(id)arg0 ;
+(BOOL)scanInfoCanJoin5GHzNetworks:(id)arg0 ;
+(BOOL)scanInfoCanJoinWPA3Networks:(id)arg0 ;
+(BOOL)scanInfoIs5GHz:(id)arg0 ;
+(BOOL)scanInfoIsAirPlayDevice:(id)arg0 ;
+(BOOL)scanInfoIsAudioDevice:(id)arg0 ;
+(BOOL)scanInfoIsDWDSCapable:(id)arg0 isDWDSEnabled:(*BOOL)arg1 ;
+(BOOL)scanInfoIsGuestNetwork:(id)arg0 ;
+(BOOL)scanInfoIsHomeKitSecureWAC:(id)arg0 ;
+(BOOL)scanInfoIsIBSS:(id)arg0 ;
+(BOOL)scanInfoIsInSoftReset:(id)arg0 ;
+(BOOL)scanInfoIsMFIAirPlayDevice:(id)arg0 ;
+(BOOL)scanInfoIsSTAOnly:(id)arg0 ;
+(BOOL)scanInfoIsUnconfigured:(id)arg0 ;
+(BOOL)scanInfoIsWPA3:(id)arg0 ;
+(BOOL)scanInfoIsiAPOverWiFiDevice:(id)arg0 ;
+(BOOL)scanInfoSupportsACPConfigV1:(id)arg0 ;
+(BOOL)scanInfoSupportsMFIConfigV1:(id)arg0 ;
+(BOOL)scanInfoSupportsSecureWAC:(id)arg0 ;
+(BOOL)scanInfoSupportsSoftwareTokenAuth:(id)arg0 ;
+(BOOL)scanInfoSupportsSpruce:(id)arg0 ;
+(BOOL)scanInfoTestBitFromAppleDeviceIE:(id)arg0 forType:(NSInteger)arg1 ;
+(BOOL)stringArray:(id)arg0 containsBSSID:(id)arg1 ;
+(id)copyFilteredNetworks:(id)arg0 ignoreOptions:(int)arg1 ;
+(id)getNetworkPassword:(id)arg0 ;
+(id)scanInfoAirPortUniqueIdentifier:(id)arg0 ;
+(id)scanInfoBSSIDStr:(id)arg0 ;
+(id)scanInfoDataFromAppleDeviceIE:(id)arg0 forType:(NSInteger)arg1 ;
+(id)scanInfoDeviceID:(id)arg0 ;
+(id)scanInfoFriendlyName:(id)arg0 ;
+(id)scanInfoManufacturerName:(id)arg0 ;
+(id)scanInfoModelName:(id)arg0 ;
+(id)scanInfoNetworkName:(id)arg0 ;
+(id)scanInfoStringFromAppleDeviceIE:(id)arg0 forType:(NSInteger)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceRef;
+(int)barsForRSSI:(int)arg0 ;
+(int)scanInfoDeviceKind:(id)arg0 ;
+(unsigned int)scanInfoAppleProductID:(id)arg0 ;
+(unsigned int)scanInfoSubAppleProductID:(id)arg0 ;
+(void)sharedInstanceRelease;
-(BOOL)airPortIsOn;
-(BOOL)getAutoJoinState;
-(BOOL)isCurrentlyAssociatedToAnInfrastructureNetwork:(*BOOL)arg0 ;
-(BOOL)isJoinInProgress;
-(BOOL)isScanInProgress;
-(BOOL)isScanningActive;
-(id)getCurrentAssociationInfo;
-(id)getCurrentAssociationInfoOrNil;
-(id)getCurrentAssociationScanInfo;
-(id)getIfList;
-(id)getLinkStatus;
-(id)getNetworkPasswordForNetworkNamed:(id)arg0 ;
-(id)getPreferredNetworks:(BOOL)arg0 ;
-(id)init;
-(id)mergedScanInfoArray;
-(id)resetScanInfosOfType:(int)arg0 ;
-(id)scanInfoForMACAddress:(id)arg0 ;
-(id)scanInfoForName:(id)arg0 wifiType:(int)arg1 ;
-(id)unconfiguredScanInfosOfType:(int)arg0 ;
-(id)unmergedScanInfoArray;
-(id)unmergedScanInfoDict;
-(int)_asyncWiFiScan:(id)arg0 wifiType:(int)arg1 merge:(BOOL)arg2 maxAge:(NSUInteger)arg3 isPeriodic:(BOOL)arg4 ;
-(int)asyncWiFiScan:(id)arg0 wifiType:(int)arg1 merge:(BOOL)arg2 maxAge:(NSUInteger)arg3 ;
-(int)clearScanCacheSync;
-(int)closeWiFi;
-(int)disassociateSync;
-(int)joinNetworkWithNameAsync:(id)arg0 password:(id)arg1 rememberChoice:(int)arg2 ;
-(int)joinNetworkWithScanInfoAsync:(id)arg0 password:(id)arg1 rememberChoice:(int)arg2 ;
-(int)joinNetworkWithScanInfoSync:(id)arg0 password:(id)arg1 rememberChoice:(int)arg2 ;
-(int)openWiFi;
-(int)setAutoJoinState:(BOOL)arg0 ;
-(void)activateScanning:(BOOL)arg0 ;
-(void)asyncWiFiScanThread:(id)arg0 ;
-(void)cancelAsync;
-(void)clearScanCache;
-(void)dealloc;
-(void)joinNetworkWithNameThread:(id)arg0 ;
-(void)joinNetworkWithScanInfoThread:(id)arg0 ;
-(void)mergeScanResults:(id)arg0 ageOut:(BOOL)arg1 ;
-(void)scanTimerCallback:(id)arg0 ;
-(void)setJoinInProgress:(BOOL)arg0 ;
-(void)setScanInProgress:(BOOL)arg0 ;
-(void)setScanOnlyWhenAppActive:(BOOL)arg0 ;
-(void)setUnmergedScanInfoDict:(id)arg0 ;
-(void)triggerScan;


@end


#endif