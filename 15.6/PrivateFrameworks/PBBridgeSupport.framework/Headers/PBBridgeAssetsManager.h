// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBBRIDGEASSETSMANAGER_H
#define PBBRIDGEASSETSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBBridgeAssetsManager : NSObject

@property (copy, nonatomic) id *allAssetsDownloadCompletion; // ivar: _allAssetsDownloadCompletion
@property (copy, nonatomic) id *assetDownloadCompletion; // ivar: _assetDownloadCompletion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSUInteger)hardwareGenerationForProductType:(id)arg0 ;
-(id)_assetQueryForDeviceAttributes:(NSUInteger)arg0 deviceAttributes:(id)arg1 atlasDetails:(id)arg2 ;
-(id)_assetQueryForType:(NSUInteger)arg0 forDevice:(id)arg1 atlasDetails:(id)arg2 ;
-(id)_gatherQueries:(id)arg0 withAtlas:(id)arg1 ;
-(id)init;
-(void)_beginDownloadsForAssets:(id)arg0 ;
-(void)_beginPullingAssetsForDeviceAttributes:(id)arg0 completion:(id)arg1 ;
-(void)_checkAssetDownloadStateWithAssets:(id)arg0 ;
-(void)_runAssetQuery:(id)arg0 completion:(id)arg1 ;
-(void)_runMultipleAssetQueries:(id)arg0 completion:(id)arg1 ;
-(void)beginPullingAssetsForAdvertisingName:(id)arg0 completion:(id)arg1 ;
-(void)beginPullingAssetsForDevice:(id)arg0 completion:(id)arg1 ;
-(void)beginPullingAssetsForDeviceMaterial:(NSUInteger)arg0 size:(NSUInteger)arg1 branding:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)purgeAllAssetsLocalOnly:(BOOL)arg0 ;


@end


#endif