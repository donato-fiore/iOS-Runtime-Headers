// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPCONTROLLERXPC_H
#define UARPCONTROLLERXPC_H

@class NSXPCConnection, NSError;
@protocol UARPControllerInternalDelegate, OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPController.h"

@interface UARPControllerXPC : NSObject <UARPControllerInternalDelegate>

 {
    NSXPCConnection *_xpcConnection;
    NSError *_lastProviderError;
    id *_providerErrorReply;
    NSObject<OS_os_log> *_xpcLog;
    UARPController *_controller;
}


@property (readonly) BOOL useAssetAvailabilityNotifications;
@property (readonly) NSXPCConnection *xpcConnection;


-(BOOL)addAccessory:(id)arg0 assetID:(id)arg1 ;
-(BOOL)changeAssetLocation:(id)arg0 assetID:(id)arg1 ;
-(BOOL)checkForUpdate:(id)arg0 ;
-(BOOL)downloadAvailableFirmwareUpdate:(id)arg0 assetID:(id)arg1 withUserIntent:(BOOL)arg2 ;
-(BOOL)downloadReleaseNotes:(id)arg0 assetID:(id)arg1 ;
-(BOOL)getAttestationCertificates:(id)arg0 assetID:(id)arg1 ;
-(BOOL)getSupportedAccessories:(id)arg0 assetID:(id)arg1 ;
-(BOOL)performSynchronousProviderInvocation:(id)arg0 accessory:(id)arg1 requireKnown:(BOOL)arg2 description:(char *)arg3 ;
-(BOOL)personalizationVectorForAccessory:(id)arg0 assetTag:(unsigned int)arg1 outVector:(*unsigned int)arg2 ;
-(BOOL)removeAccessory:(id)arg0 ;
-(BOOL)requestConsent:(id)arg0 ;
-(BOOL)revokeConsentRequest:(id)arg0 ;
-(BOOL)updateProperty:(NSUInteger)arg0 value:(id)arg1 forAccessory:(id)arg2 ;
-(id)getAssetIDForAccessoryID:(id)arg0 ;
-(id)getAttestationCertificates:(id)arg0 ;
-(id)getSupplementalAssetNameForAccessoryID:(id)arg0 ;
-(id)getSupportedAccessories:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)invocationForProviderSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)manifestPropertiesReceivedForAccessory:(id)arg0 assetTag:(unsigned int)arg1 properties:(id)arg2 ;
-(void)progressForUARPConsent:(id)arg0 bytesSent:(NSUInteger)arg1 bytesTotal:(NSUInteger)arg2 ;
-(void)progressForUARPConsentInPostLogout:(id)arg0 bytesSent:(NSUInteger)arg1 bytesTotal:(NSUInteger)arg2 ;
-(void)sendFirmwareUpdateProgressForAccessory:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)sendFirmwareUpdateProgressForUARPConsent:(id)arg0 bytesSent:(NSUInteger)arg1 bytesTotal:(NSUInteger)arg2 ;
-(void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg0 assetID:(id)arg1 params:(id)arg2 ;


@end


#endif