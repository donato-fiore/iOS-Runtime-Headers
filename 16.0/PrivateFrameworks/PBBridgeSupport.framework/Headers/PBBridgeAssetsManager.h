// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBRIDGEASSETSMANAGER_H
#define PBBRIDGEASSETSMANAGER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBBridgeAssetsManager : NSObject

@property (copy, nonatomic) id *allAssetsDownloadCompletion; // ivar: _allAssetsDownloadCompletion
@property (copy, nonatomic) id *assetDownloadCompletion; // ivar: _assetDownloadCompletion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (retain, nonatomic) NSDictionary *deviceAttributes; // ivar: _deviceAttributes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(NSUInteger)hardwareGenerationForProductType:(id)arg0 ;
-(id)_assetQueries:(id)arg0 atlas:(id)arg1 ;
-(id)_assetQueryForBridgeLaunchSplash;
-(id)_assetQueryForDeviceAttributes:(NSUInteger)arg0 deviceAttributes:(id)arg1 ;
-(id)_assetQueryForFamilySetupImage;
-(id)init;
-(void)_beginAssetDownloads:(id)arg0 ;
-(void)_beginPullingAssetsForDeviceAttributes:(id)arg0 completion:(id)arg1 ;
-(void)_downloadAtlasAsset:(id)arg0 ;
-(void)_linkDownloadedAsset:(id)arg0 ;
-(void)_queryForImageAssets:(id)arg0 ;
-(void)_runAssetQuery:(id)arg0 completion:(id)arg1 ;
-(void)_runNextQuery:(id)arg0 ;
-(void)_runQueries:(id)arg0 withCompletion:(id)arg1 ;
-(void)_startAssetDownload:(id)arg0 ;
-(void)_startAtlasDownloadAndQueryOnSuccess:(id)arg0 ;
-(void)beginPullingAssetsForAdvertisingName:(id)arg0 completion:(id)arg1 ;
-(void)beginPullingAssetsForDevice:(id)arg0 completion:(id)arg1 ;
-(void)beginPullingAssetsForDeviceMaterial:(NSUInteger)arg0 size:(NSUInteger)arg1 branding:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)purgeAllAssetsLocalOnly:(BOOL)arg0 ;


@end


#endif