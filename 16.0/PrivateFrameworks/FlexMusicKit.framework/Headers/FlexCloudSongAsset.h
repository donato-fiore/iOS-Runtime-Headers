// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXCLOUDSONGASSET_H
#define FLEXCLOUDSONGASSET_H



#import "FMSongAsset.h"
#import "FlexCloudManager.h"

@interface FlexCloudSongAsset : FMSongAsset

@property (readonly, weak) FlexCloudManager *cloudManager; // ivar: _cloudManager


-(BOOL)contentUpdateAvaliable;
-(BOOL)isCloudBacked;
-(NSInteger)compatibilityVersionForAssetLocation:(NSUInteger)arg0 ;
-(NSInteger)contentVersionForAssetLocation:(NSUInteger)arg0 ;
-(NSUInteger)assetStatus;
-(id)initWithAssetID:(id)arg0 assetStatus:(NSUInteger)arg1 localURL:(id)arg2 cloudManager:(id)arg3 contentVersion:(NSInteger)arg4 compatibilityVersion:(NSInteger)arg5 ;
-(void)cancelDownload;
-(void)purgeLocalCache;
-(void)requestDownload;
-(void)requestDownloadWithOptions:(id)arg0 ;


@end


#endif