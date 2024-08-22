// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMOBILEASSETMANAGER_H
#define HMDMOBILEASSETMANAGER_H

@class NSBackgroundActivityScheduler;
@protocol HMDMobileAssetManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDMobileAssetManager : NSObject

@property (weak, nonatomic) NSObject<HMDMobileAssetManagerDelegate> *delegate; // ivar: _delegate
@property BOOL indexDownloaded; // ivar: _indexDownloaded
@property (readonly, nonatomic) NSBackgroundActivityScheduler *scheduler; // ivar: _scheduler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(void)_downloadCatalogAndUpdateMetadataIfAble;
-(void)_downloadNewAsset:(id)arg0 availableVersion:(NSUInteger)arg1 newVersion:(NSUInteger)arg2 ;
-(void)_handleMetadataAssetUpdated;
-(void)_installAvailableAsset:(id)arg0 version:(NSUInteger)arg1 ;
-(void)_updateMetadata;
-(void)handleMetadataAssetUpdated;
-(void)purgeAllInstalledAssets;


@end


#endif