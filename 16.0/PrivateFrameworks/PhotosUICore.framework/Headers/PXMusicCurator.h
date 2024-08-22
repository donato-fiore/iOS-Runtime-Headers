// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMUSICCURATOR_H
#define PXMUSICCURATOR_H


#import <Foundation/Foundation.h>


@interface PXMusicCurator : NSObject



+(id)_fetchFlexMusicAssetsWithIdentifiers:(id)arg0 ;
+(id)_invalidPhotoAnalysisClientError;
+(id)_parseAppleMusicAssetsFromJSONArray:(id)arg0 photoLibrary:(id)arg1 ;
+(id)_parseAppleMusicCurationInfoFromJSONDictionary:(id)arg0 ;
+(id)_requestDebugInformationForAppleMusicAsset:(id)arg0 assetCollection:(id)arg1 resultHandler:(id)arg2 ;
+(id)_requestDebugInformationForFlexMusicAsset:(id)arg0 assetCollection:(id)arg1 resultHandler:(id)arg2 ;
+(id)_requestQueue;
+(id)bestLocallyAvailableAudioAssetForAssetCollection:(id)arg0 ;
+(id)log;
+(id)requestAppleMusicCurationForAssetCollection:(id)arg0 recentlyUsedAdamIDs:(id)arg1 resultHandler:(id)arg2 ;
+(id)requestAudioAssetFetchResultForAdamIDs:(id)arg0 requestOptions:(id)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
+(id)requestAudioAssetIdentifierForPurchasedSongID:(id)arg0 requestOptions:(id)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
+(id)requestDebugInformationForAudioAsset:(id)arg0 assetCollection:(id)arg1 resultHandler:(id)arg2 ;
+(id)requestFlexMusicCurationForAssetCollection:(id)arg0 recentlyUsedFlexSongIDs:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif