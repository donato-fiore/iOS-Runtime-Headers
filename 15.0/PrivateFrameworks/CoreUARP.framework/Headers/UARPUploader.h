// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPUPLOADER_H
#define UARPUPLOADER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPController.h"

@interface UARPUploader : NSObject {
    NSObject<OS_os_log> *_xpcLog;
}


@property (readonly, weak) UARPController *controller; // ivar: _controller


-(BOOL)addAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyStagedAssetsForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelAssetStagingForAccessory:(id)arg0 asset:(id)arg1 ;
-(BOOL)genericNotification:(id)arg0 notificationName:(id)arg1 error:(*id)arg2 ;
-(BOOL)offerAssetToAccessory:(id)arg0 asset:(id)arg1 error:(*id)arg2 ;
-(BOOL)pauseAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)recvDataFromAccessory:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)rescindStagedAssetsForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)resumeAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)supplementalAssetUpdated:(id)arg0 assetName:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)firmwareStagingComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)firmwareStagingDataBlockTransferred:(id)arg0 assetID:(id)arg1 offset:(unsigned int)arg2 blockSize:(unsigned int)arg3 ;
-(void)firmwareStagingProgress:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)stagedFirmwareApplicationComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)stagedFirmwareRescindComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;


@end


#endif