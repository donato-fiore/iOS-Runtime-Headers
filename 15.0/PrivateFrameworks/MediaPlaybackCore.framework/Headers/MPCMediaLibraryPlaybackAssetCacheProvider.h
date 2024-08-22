// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg0 ;
+(id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg0 ;
+(id)deviceLibraryProviderWithUserIdentity:(id)arg0 ;
-(NSInteger)_persistentIDForModelObject:(id)arg0 ;
-(id)_initWithMediaLibrary:(id)arg0 ;
-(void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getPlaybackAssetCacheDestinationURL:(*id)arg0 purchaseBundleDestinationURL:(*id)arg1 forGenericObject:(id)arg2 assetQualityType:(NSInteger)arg3 pathExtension:(id)arg4 ;
-(void)setPlaybackAssetCacheFileAsset:(id)arg0 forGenericObject:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif