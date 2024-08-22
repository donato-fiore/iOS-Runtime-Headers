// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUSICWRAPPER_H
#define PGMUSICWRAPPER_H


#import <Foundation/Foundation.h>


@interface PGMusicWrapper : NSObject



+(BOOL)cacheRemoveAllForPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(id)cacheStatusWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(id)generateMusicCurationDebugInformationForAssetCollection:(id)arg0 graphManager:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(id)generateMusicCurationDebugInformationForSongWithAdamID:(id)arg0 graphManager:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(void)fetchMusicCatalogAdamIDsForPurchasedSongID:(id)arg0 inflationContext:(id)arg1 progressReporter:(id)arg2 completionHandler:(id)arg3 ;
+(void)fetchSongDisplayMetadataJSONForAdamIDs:(id)arg0 inflationContext:(id)arg1 progressReporter:(id)arg2 completionHandler:(id)arg3 ;
+(void)requestFlexMusicCurationDebugInformationForAssetCollection:(id)arg0 reply:(id)arg1 ;
+(void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg0 reply:(id)arg1 ;
+(void)requestFlexMusicCurationForAssetCollection:(id)arg0 curationOptions:(id)arg1 photoLibrary:(id)arg2 reply:(id)arg3 ;
+(void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg0 curationOptions:(id)arg1 photoLibrary:(id)arg2 reply:(id)arg3 ;
+(void)requestMusicCurationForAssetCollection:(id)arg0 curationOptions:(id)arg1 graphManager:(id)arg2 reply:(id)arg3 ;
+(void)requestMusicCurationForAssetFetchResult:(id)arg0 curationOptions:(id)arg1 graphManager:(id)arg2 reply:(id)arg3 ;


@end


#endif