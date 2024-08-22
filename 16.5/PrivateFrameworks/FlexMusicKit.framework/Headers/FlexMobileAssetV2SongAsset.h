// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLEXMOBILEASSETV2SONGASSET_H
#define FLEXMOBILEASSETV2SONGASSET_H

@class NSString;


#import "FlexCloudSongAsset.h"

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset

@property (readonly) NSString *mobileAssetID; // ivar: _mobileAssetID


-(BOOL)contentUpdateAvaliable;
-(NSInteger)compatibilityVersionForAssetLocation:(NSUInteger)arg0 ;
-(NSInteger)contentVersionForAssetLocation:(NSUInteger)arg0 ;
-(NSUInteger)assetStatus;
-(id)_metadataForAssetWithNewestContentVersion;
-(id)initWithAssetID:(id)arg0 asset:(id)arg1 localURL:(id)arg2 cloudManager:(id)arg3 contentVersion:(NSInteger)arg4 compatibilityVersion:(NSInteger)arg5 ;
-(id)mobileAsset;


@end


#endif