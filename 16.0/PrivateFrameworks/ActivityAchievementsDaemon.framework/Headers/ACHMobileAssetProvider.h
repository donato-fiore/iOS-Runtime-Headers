// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHMOBILEASSETPROVIDER_H
#define ACHMOBILEASSETPROVIDER_H

@class _HKMobileAssetDownloadManager, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface ACHMobileAssetProvider : NSObject

@property (nonatomic) CGFloat downloadDelayOverride; // ivar: _downloadDelayOverride
@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager; // ivar: _mobileAssetDownloadManager
@property (retain, nonatomic) NSUserDefaults *nanoUserDefaults; // ivar: _nanoUserDefaults


-(BOOL)_assetIsInstalled:(id)arg0 ;
-(CGFloat)_downloadDelay;
-(NSInteger)downloadedAssetDiskUsageInBytes;
-(NSInteger)purgeAllDownloadedAssets;
-(id)_assetsGroupedByUniqueNameAndType:(id)arg0 ;
-(id)_compatibilityVersionQueryParameters;
-(id)init;
-(id)initWithMobileAssetDownloadManager:(id)arg0 ;
-(void)_downloadAssets:(id)arg0 withCompletion:(id)arg1 ;
-(void)_downloadRemoteAssets:(id)arg0 installedAssets:(id)arg1 ;
-(void)_downloadRemoteCatalogAndAssets;
-(void)_fetchLocalAssetsWithCompletion:(id)arg0 ;
-(void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)arg0 completion:(id)arg1 ;
-(void)_processAssets:(id)arg0 completion:(id)arg1 ;
-(void)_removeAssets:(id)arg0 ;
-(void)availableAssetsWithCompletion:(id)arg0 ;
-(void)downloadRemoteCatalog;


@end


#endif