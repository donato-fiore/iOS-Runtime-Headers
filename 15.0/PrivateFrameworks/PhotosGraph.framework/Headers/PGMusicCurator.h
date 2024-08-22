// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMUSICCURATOR_H
#define PGMUSICCURATOR_H


#import <Foundation/Foundation.h>


@interface PGMusicCurator : NSObject



+(id)curateMusicForFeatures:(id)arg0 context:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(id)extractMusicCurationFeaturesForAssets:(id)arg0 graph:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
+(id)extractMusicCurationFeaturesForEnrichedMemory:(id)arg0 graph:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
+(id)extractMusicCurationFeaturesForMemory:(id)arg0 graph:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
+(id)generateDebugInformationForAssetCollection:(id)arg0 graph:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(*id)arg4 ;
+(id)generateDebugInformationForSongWithAdamID:(id)arg0 context:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
+(void)fetchSongDisplayMetadataJSONForAdamIDs:(id)arg0 inflationContext:(id)arg1 progressReporter:(id)arg2 completionHandler:(id)arg3 ;
+(void)inflateDisplayMetadataForMusicCuration:(id)arg0 inflationContext:(id)arg1 progressReporter:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;


@end


#endif