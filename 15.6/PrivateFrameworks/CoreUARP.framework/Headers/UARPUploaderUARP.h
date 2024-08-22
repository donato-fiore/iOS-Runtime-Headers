// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPUPLOADERUARP_H
#define UARPUPLOADERUARP_H

@class NSMutableSet, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;


#import "UARPUploader.h"

@interface UARPUploaderUARP : UARPUploader {
    NSObject<OS_os_log> *_log;
    uarpControllerObj _coreController;
    uarpControllerCallbacksObj _coreCallbacks;
    uarpControllerAppleObj _appleController;
    uarpPlatformOptionsObj _options;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_txWatchdogTimer;
    NSMutableSet *_accessories;
    NSMutableArray *_assets;
}




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
-(BOOL)supplementalAssetUpdated:(id)arg0 assetName:(id)arg1 error:(*id)arg2 ;
-(BOOL)unsolicitedDynamicAssetForAccessory:(id)arg0 assetTag:(id)arg1 error:(*id)arg2 ;
-(NSInteger)queryProperty:(NSUInteger)arg0 forAccessory:(id)arg1 ;
-(id)init;
-(id)unsolicitedDynamicAssetOffered:(id)arg0 assetTag:(struct UARP4ccTag *)arg1 ;
-(unsigned int)personalizeAsset:(struct uarpControllerAssetObj *)arg0 forAccessory:(id)arg1 ;
-(unsigned int)recvAppleAccessoryInfoForAccessory:(id)arg0 buffer:(struct UARPMsgAccessoryAppleInformationResponse *)arg1 length:(unsigned int)arg2 ;
-(unsigned int)recvPersonalizationInfoResponseForAccessory:(id)arg0 buffer:(struct AppleUARPPersonalizationInfoResponse *)arg1 length:(unsigned int)arg2 ;
-(unsigned int)recvPersonalizationRequestForAccessory:(id)arg0 buffer:(struct AppleUARPPersonalizationRequired *)arg1 length:(unsigned int)arg2 ;
-(unsigned int)recvVendorSpecificMessage:(unsigned short)arg0 forAccessory:(id)arg1 oui:(struct UARPOUI *)arg2 buffer:(char *)arg3 length:(unsigned int)arg4 ;
-(unsigned int)requestBytesInRangeForAccessory:(id)arg0 asset:(id)arg1 bytes:(*void)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4 bytesCopied:(*unsigned int)arg5 offsetUsed:(*unsigned int)arg6 ;
-(unsigned int)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 ;
-(void)applyStagedAssetStatus:(id)arg0 status:(unsigned short)arg1 ;
-(void)assetRelease:(id)arg0 ;
-(void)cancelTxWatchdogTimer;
-(void)dynamicAssetBytesResponded:(id)arg0 asset:(id)arg1 data:(id)arg2 offset:(NSUInteger)arg3 ;
-(void)dynamicAssetFullyTransferred:(id)arg0 asset:(id)arg1 ;
-(void)dynamicAssetOffered:(id)arg0 asset:(id)arg1 ;
-(void)dynamicAssetPreProcessing:(id)arg0 accessory:(id)arg1 flags:(unsigned short)arg2 ;
-(void)handleTxWatchdogTimer;
-(void)processingAck:(id)arg0 asset:(id)arg1 status:(unsigned short)arg2 ;
-(void)processingComplete:(id)arg0 asset:(id)arg1 status:(unsigned short)arg2 ;
-(void)queryFirmwareUpdateResultForAccessory:(id)arg0 ;
-(void)rescindStagedAssetsAck:(id)arg0 ;
-(void)setTxWatchdogTimer;
-(void)solicitDynamicAsset:(id)arg0 forAccessory:(id)arg1 ;
-(void)syncFromAccessory:(id)arg0 ;
-(void)updateInfo:(id)arg0 type:(unsigned int)arg1 length:(unsigned int)arg2 value:(char *)arg3 ;
-(void)versionDiscoveryResponse:(id)arg0 protocolVersion:(unsigned short)arg1 ;


@end


#endif