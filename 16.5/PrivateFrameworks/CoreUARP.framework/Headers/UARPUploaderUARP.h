// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPUPLOADERUARP_H
#define UARPUPLOADERUARP_H

@class NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;


#import "UARPUploader.h"

@interface UARPUploaderUARP : UARPUploader {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    ? _uarpEndpoint;
    uarpPlatformEndpointApple _uarpVendorExtension;
    NSMutableArray *_accessories;
    NSMutableArray *_assets;
}


@property (readonly) *uarpPlatformEndpoint uarpEndpoint;
@property (readonly) *uarpPlatformEndpointApple uarpVendorExtension;


-(BOOL)accessoryReachable:(id)arg0 error:(*id)arg1 ;
-(BOOL)accessoryUnreachable:(id)arg0 error:(*id)arg1 ;
-(BOOL)addAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyStagedAssetsForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelAssetStagingForAccessory:(id)arg0 asset:(id)arg1 ;
-(BOOL)genericNotification:(id)arg0 notificationName:(id)arg1 error:(*id)arg2 ;
-(BOOL)offerAssetToAccessory:(id)arg0 asset:(id)arg1 error:(*id)arg2 ;
-(BOOL)offerDynamicAssetToAccessory:(id)arg0 asset:(id)arg1 error:(*id)arg2 ;
-(BOOL)pauseAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)recvDataFromAccessory:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)rescindStagedAssetsForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)resumeAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)setController:(id)arg0 ;
-(BOOL)solicitDynamicAssetForAccessory:(id)arg0 asset:(id)arg1 error:(*id)arg2 ;
-(BOOL)solicitDynamicAssetForAccessory:(id)arg0 asset:(id)arg1 internalSolicit:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)solicitDynamicAssetForAccessory:(id)arg0 assetTag:(id)arg1 error:(*id)arg2 ;
-(BOOL)supplementalAssetUpdated:(id)arg0 assetName:(id)arg1 error:(*id)arg2 ;
-(BOOL)unsolicitedDynamicAssetForAccessory:(id)arg0 assetTag:(id)arg1 error:(*id)arg2 ;
-(NSInteger)queryProperty:(NSUInteger)arg0 forAccessory:(id)arg1 ;
-(id)init;
-(id)qFindRemoteEndpointForAccessory:(id)arg0 ;
-(unsigned int)requestBytesInRangeForAccessory:(id)arg0 asset:(id)arg1 bytes:(*void)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4 bytesCopied:(*unsigned int)arg5 offsetUsed:(*unsigned int)arg6 ;
-(void)applyStagedAssetStatus:(id)arg0 status:(NSUInteger)arg1 ;
-(void)assetRelease:(id)arg0 asset:(id)arg1 ;
-(void)assetSolicitationComplete:(id)arg0 asset:(id)arg1 status:(NSUInteger)arg2 ;
-(void)assetSolicitationProgress:(id)arg0 asset:(id)arg1 offset:(NSUInteger)arg2 assetLength:(NSUInteger)arg3 ;
-(void)assetStagingComplete:(id)arg0 asset:(id)arg1 status:(NSUInteger)arg2 ;
-(void)offerDynamicAssetToAccessory:(id)arg0 asset:(id)arg1 internalOffer:(BOOL)arg2 tag:(id)arg3 ;
-(void)processDynamicAssetHeySiriCompact:(id)arg0 ;
-(void)processDynamicAssetVersions:(id)arg0 partnerSerialNumbers:(id)arg1 ;
-(void)processDynamicAssetVoiceAssist:(id)arg0 ;
-(void)protocolVersionSelected:(id)arg0 protocolVersion:(unsigned short)arg1 ;
-(void)queryExpectedDynamicAssets:(id)arg0 ;
-(void)queryFirmwareUpdateResultForAccessory:(id)arg0 ;
-(void)queryNextInfoProperty:(id)arg0 ;
-(void)rescindAssets:(id)arg0 ;
-(void)rescindStagedAssetsAck:(id)arg0 asset:(id)arg1 ;
-(void)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 ;
-(void)transferPauseAck:(id)arg0 ;
-(void)transferResumeAck:(id)arg0 ;
-(void)updateActiveFirmwareVersion:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateAppleModelNumber:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateBoardID:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateChipEpoch:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateChipID:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateChipRevision:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateECID:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateEnableMixMatch:(BOOL)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateFriendlyName:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateHardwareFusingType:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateHardwareVersion:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateLastError:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateManifestPrefix:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateManufacturerName:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateModelName:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updatePrefixNeedsLogicalUnitNumber:(BOOL)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateProductionMode:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateSecurityDomain:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateSecurityMode:(NSUInteger)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateSerialNumber:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateSocLiveNonce:(BOOL)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateStagedFirmwareVersion:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateStatistics:(id)arg0 remoteEndpoint:(id)arg1 ;
-(void)updateSuffixNeedsLogicalUnitNumber:(BOOL)arg0 remoteEndpoint:(id)arg1 ;
-(void)watchdogExpireActiveTransport:(id)arg0 ;
-(void)watchdogExpireInfoQuery:(id)arg0 ;
-(void)watchdogExpireLayer2:(id)arg0 ;


@end


#endif