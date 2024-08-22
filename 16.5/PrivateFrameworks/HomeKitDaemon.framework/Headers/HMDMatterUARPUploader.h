// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMATTERUARPUPLOADER_H
#define HMDMATTERUARPUPLOADER_H

@class UARPUploader;



@interface HMDMatterUARPUploader : UARPUploader



-(BOOL)accessoryReachable:(id)arg0 error:(*id)arg1 ;
-(BOOL)accessoryUnreachable:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyStagedAssetsForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelAssetStagingForAccessory:(id)arg0 asset:(id)arg1 ;
-(BOOL)offerAssetToAccessory:(id)arg0 asset:(id)arg1 error:(*id)arg2 ;
-(BOOL)pauseAssetTransfersForAccessory:(id)arg0 ;
-(BOOL)recvDataFromAccessory:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)rescindStagedAssetsForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)resumeAssetTransfersForAccessory:(id)arg0 ;


@end


#endif