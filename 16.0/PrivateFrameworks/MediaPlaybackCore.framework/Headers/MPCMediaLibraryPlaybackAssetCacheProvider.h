// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMEDIALIBRARYPLAYBACKASSETCACHEPROVIDER_H
#define MPCMEDIALIBRARYPLAYBACKASSETCACHEPROVIDER_H

@class MPMediaLibrary, NSString;
@protocol MPCModelPlaybackAssetCacheProviding;

#import <Foundation/Foundation.h>


@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding>

 {
    MPMediaLibrary *_mediaLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_downloadedAssetDestinationDirectoryForMediaLibrary:(id)arg0 ;
+(id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg0 ;
+(id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg0 ;
+(id)deviceLibraryProviderWithUserIdentity:(id)arg0 ;
-(BOOL)isUnderDailyCacheAssetDownloadLimit;
-(NSInteger)_persistentIDForModelObject:(id)arg0 ;
-(id)_initWithMediaLibrary:(id)arg0 ;
-(void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)didCacheNewAssetToDestinationURL:(id)arg0 ;
-(void)getPlaybackAssetDestinationURL:(*id)arg0 sharedCacheURL:(*id)arg1 purgeable:(BOOL)arg2 purchaseBundleDestinationURL:(*id)arg3 assetQualityType:(NSInteger)arg4 fileName:(id)arg5 pathExtension:(id)arg6 ;
-(void)setPlaybackAssetCacheFileAsset:(id)arg0 forGenericObject:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif