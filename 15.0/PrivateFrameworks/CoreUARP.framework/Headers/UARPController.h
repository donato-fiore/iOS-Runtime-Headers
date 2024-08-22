// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPCONTROLLER_H
#define UARPCONTROLLER_H

@class NSMutableDictionary, NSCache, NSArray;
@protocol OS_os_log, OS_dispatch_queue, UARPControllerInternalDelegate, UARPControllerDelegateProtocol;

#import <Foundation/Foundation.h>

#import "UARPUploader.h"
#import "UARPAnalyticsUpdateFirmwareManager.h"
#import "UARPPacketDumper.h"
#import "UARPPowerLogManager.h"

@interface UARPController : NSObject {
    NSMutableDictionary *_accessories;
    NSCache *_assetCache;
    NSObject<OS_os_log> *_xpcLog;
    NSObject<OS_os_log> *_controllerLog;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    UARPUploader *_uploader;
    id<UARPControllerInternalDelegate> *_internalDelegate;
    UARPAnalyticsUpdateFirmwareManager *_updateFirmwareAnalytics;
    UARPPacketDumper *_packetDumper;
    NSMutableDictionary *_assetAvailabilityNotificationTokenDict;
    NSMutableDictionary *_supplementalAssetAvailabilityNotificationTokenDict;
    NSMutableDictionary *_assetAvailabilityUARPProductGroupNotificationTokenDict;
    NSMutableDictionary *_generalNotificationTokenDict;
    UARPPowerLogManager *_powerLogManager;
}


@property (readonly) NSArray *accessoryList;
@property (weak) NSObject<UARPControllerDelegateProtocol> *delegate; // ivar: _delegate


-(BOOL)accessoryIDKnown:(id)arg0 ;
-(BOOL)accessoryKnown:(id)arg0 ;
-(BOOL)accessoryReachable:(id)arg0 ;
-(BOOL)accessoryReachableInternal:(id)arg0 ;
-(BOOL)accessoryUnreachable:(id)arg0 ;
-(BOOL)accessoryUnreachableInternal:(id)arg0 ;
-(BOOL)addAccessory:(id)arg0 assetID:(id)arg1 ;
-(BOOL)applyFirmwareUpdateOnAccessoryList:(id)arg0 withUserIntent:(BOOL)arg1 ;
-(BOOL)applyStagedFirmwareOnAccessoryList:(id)arg0 withUserIntent:(BOOL)arg1 ;
-(BOOL)cancelFirmwareStagingForAccessory:(id)arg0 assetID:(id)arg1 ;
-(BOOL)cancelFirmwareUpdateOnAccessoryList:(id)arg0 ;
-(BOOL)changeAssetLocation:(id)arg0 assetID:(id)arg1 ;
-(BOOL)checkForUpdate:(id)arg0 ;
-(BOOL)downloadAvailableFirmwareUpdate:(id)arg0 assetID:(id)arg1 withUserIntent:(BOOL)arg2 ;
-(BOOL)downloadReleaseNotes:(id)arg0 assetID:(id)arg1 ;
-(BOOL)dynamicAssetAvailableForAccessory:(id)arg0 assetID:(id)arg1 error:(*id)arg2 ;
-(BOOL)getSupportedAccessories:(id)arg0 assetLocationType:(NSInteger)arg1 ;
-(BOOL)getSupportedAccessoriesInternal:(id)arg0 assetID:(id)arg1 ;
-(BOOL)pauseAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)personalizationVectorForAccessory:(id)arg0 assetTag:(unsigned int)arg1 outVector:(*unsigned int)arg2 ;
-(BOOL)recvDataFromAccessory:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)registerForAssetAvailabilityNotification:(id)arg0 ;
-(BOOL)registerForGenericNotification:(id)arg0 notificationName:(id)arg1 ;
-(BOOL)registerForSupplementalAssetAvailabilityNotification:(id)arg0 ;
-(BOOL)registerForSupportedAccessoriesAvailability:(id)arg0 ;
-(BOOL)removeAccessory:(id)arg0 ;
-(BOOL)requestConsent:(id)arg0 ;
-(BOOL)rescindStagedFirmwareOnAccessoryList:(id)arg0 withUserIntent:(BOOL)arg1 ;
-(BOOL)resumeAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)solicitDynamicAsset:(id)arg0 assetID:(id)arg1 ;
-(BOOL)stageFirmwareUpdateOnAccessoryList:(id)arg0 withUserIntent:(BOOL)arg1 ;
-(BOOL)startPacketCapture:(id)arg0 ;
-(BOOL)triggerUnsolicitedDynamicAsset:(id)arg0 assetTag:(id)arg1 ;
-(BOOL)updateProperty:(NSUInteger)arg0 value:(id)arg1 forAccessory:(id)arg2 ;
-(NSInteger)queryProperty:(NSUInteger)arg0 forAccessory:(id)arg1 ;
-(NSInteger)queryPropertyInternal:(NSUInteger)arg0 forAccessory:(id)arg1 ;
-(id)assetAvailabilityTokenForAccessory:(id)arg0 ;
-(id)createSupportedAccessory:(id)arg0 accessoryMetadata:(id)arg1 ;
-(id)init;
-(id)pendingAssetForAccessory:(id)arg0 assetID:(id)arg1 ;
-(id)supplementalAssetAvailabilityTokenForAccessory:(id)arg0 ;
-(id)unsolicitedDynamicAssetOffered:(id)arg0 assetID:(id)arg1 ;
-(void)assetAvailabilityNotificationPosted:(int)arg0 ;
-(void)assetAvailablityUpdateForAccessory:(id)arg0 assetID:(id)arg1 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)assetSolicitationComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)assetSolicitationProgress:(id)arg0 assetID:(id)arg1 bytesReceived:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)availabilityNotificationForSupportedAccessoriesPosted:(int)arg0 ;
-(void)dealloc;
-(void)firmwareStagingComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)firmwareStagingDataBlockTransferred:(id)arg0 assetID:(id)arg1 offset:(unsigned int)arg2 blockSize:(unsigned int)arg3 ;
-(void)firmwareStagingProgress:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)firmwareUpdateResult:(id)arg0 vendorSpecificStatus:(unsigned int)arg1 error:(id)arg2 ;
-(void)genericNotificationPosted:(int)arg0 ;
-(void)manifestPropertiesReceivedForAccessory:(id)arg0 assetTag:(unsigned int)arg1 properties:(id)arg2 ;
-(void)personalizationResponseForAccessoryID:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 appleModelNumber:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 firmwareVersion:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 hardwareVersion:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 hwFusingType:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 manufacturer:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 modelName:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 serialNumber:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 stagedFirmwareVersion:(id)arg1 error:(id)arg2 ;
-(void)queryCompleteForAccessory:(id)arg0 stats:(id)arg1 error:(id)arg2 ;
-(void)queryCorePropertiesFromAccessory:(id)arg0 ;
-(void)queryFirmwareUpdateResultForAccessory:(id)arg0 ;
-(void)sendFirmwareUpdateProgressForAccessory:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)sendFirmwareUpdateProgressForUARPConsent:(id)arg0 bytesSent:(NSUInteger)arg1 bytesTotal:(NSUInteger)arg2 ;
-(void)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 ;
-(void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg0 assetID:(id)arg1 params:(id)arg2 ;
-(void)setPowerLogStagingWindowPeriodSeconds:(unsigned int)arg0 ;
-(void)stagedFirmwareApplicationComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)stagedFirmwareRescindComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)stopPacketCapture;
-(void)supplementalAssetAvailabilityNotificationPosted:(int)arg0 ;
-(void)supplementalAssetAvailablityUpdateForAccessory:(id)arg0 assetName:(id)arg1 ;
-(void)supplementalAssetAvailablityUpdateForAccessoryID:(id)arg0 assetName:(id)arg1 ;
-(void)supportedAccessories:(id)arg0 forProductGroup:(id)arg1 ;
-(void)unregisterForAllAssetAvailabilityNotifications;
-(void)unregisterForAllGenericNotifications;
-(void)unregisterForAllSupplementalAssetAvailabilityNotifications;
-(void)unregisterForAssetAvailabilityNotification:(id)arg0 ;
-(void)unregisterForSupplementalAssetAvailabilityNotification:(id)arg0 ;
-(void)unregisterForSupportedAccessoriesAvailability:(int)arg0 ;
-(void)updatePendingAssetsForAccessory:(id)arg0 assetID:(id)arg1 ;


@end


#endif