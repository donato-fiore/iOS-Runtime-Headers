// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSDDEVICEIDENTIFIERCLIENT_H
#define _LSDDEVICEIDENTIFIERCLIENT_H

@class LSDClient;
@protocol _LSDDeviceIdentifierProtocol;



@interface _LSDDeviceIdentifierClient : LSDClient <_LSDDeviceIdentifierProtocol>





-(BOOL)canAccessAdvertisingIdentifier;
-(BOOL)hasEntitlementToClearAllIdentifiersOfType:(NSInteger)arg0 ;
-(BOOL)hasUninstallEntitlement;
-(unsigned int)findAppBundleForExecutableURL:(id)arg0 withContext:(struct LSContext *)arg1 ;
-(void)clearAllIdentifiersOfType:(NSInteger)arg0 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)generateIdentifiersWithVendorName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getIdentifierOfType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getIdentifierOfType:(NSInteger)arg0 vendorName:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif