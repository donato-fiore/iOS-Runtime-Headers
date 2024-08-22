// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIRPORTASSISTANTCONTROLLER_H
#define AIRPORTASSISTANTCONTROLLER_H

@class NSString, NSDictionary;
@protocol AirPortAssistantControllerDelegate;

#import <Foundation/Foundation.h>


@interface AirPortAssistantController : NSObject

@property (retain) NSString *configuredSSID; // ivar: _configuredSSID
@property (retain) id *context; // ivar: _context
@property (nonatomic) NSObject<AirPortAssistantControllerDelegate> *delegate; // ivar: _delegate
@property (retain) NSDictionary *unconfiguredWACDevices; // ivar: _unconfiguredWACDevices
@property (retain) id *viewController; // ivar: _viewController


+(BOOL)isAirPlayDevice:(id)arg0 ;
+(BOOL)isGenericMFiAccessory:(id)arg0 ;
+(BOOL)isHomeKitSecureWACDevice:(id)arg0 ;
+(BOOL)isSTAOnlyDevice:(id)arg0 ;
+(BOOL)isUnconfiguredDevice:(id)arg0 ;
+(BOOL)launchAUForNetwork:(id)arg0 withMacAddress:(id)arg1 getAUFromAppStore:(BOOL)arg2 ;
+(BOOL)launchAUForNetwork:(id)arg0 withMacAddress:(id)arg1 getAUFromAppStore:(BOOL)arg2 viewController:(id)arg3 ;
+(id)assistantUIViewControllerWithParameters:(id)arg0 ;
+(id)sharedInstance;
+(id)unconfiguredDeviceID:(id)arg0 ;
+(id)unconfiguredDeviceName:(id)arg0 ;
+(id)uniqueBaseStationName:(id)arg0 withBssid:(id)arg1 ;
+(void)cancelAirPortAssistantController;
+(void)downloadAssetsCancel;
+(void)downloadAssetsIfNeeded;
-(id)WACDeviceFromScanInfo:(id)arg0 ;
-(int)configureUIViewControllerWithParameters:(id)arg0 ;
-(int)start2_4WiFiScan;
-(void)assistantCompleteWithResult:(int)arg0 ;
-(void)dealloc;
-(void)stop2_4WiFiScan;
-(void)updateWACListeners;
-(void)wirelessScanDone:(id)arg0 ;


@end


#endif