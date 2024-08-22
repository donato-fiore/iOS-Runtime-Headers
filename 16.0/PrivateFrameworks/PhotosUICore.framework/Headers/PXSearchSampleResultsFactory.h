// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHSAMPLERESULTSFACTORY_H
#define PXSEARCHSAMPLERESULTSFACTORY_H


#import <Foundation/Foundation.h>


@interface PXSearchSampleResultsFactory : NSObject



+(NSUInteger)_randomAssetCount:(NSUInteger)arg0 ;
+(id)_albumSubtitles;
+(id)_albumTitles;
+(id)_categoryTitles;
+(id)_memorySubtitles;
+(id)_memoryTitles;
+(id)_momentSubtitles;
+(id)_momentTitles;
+(id)_personTitles;
+(id)_placeTitles;
+(id)_uniqueSampleUUID;
+(id)sampleAlbumResults;
+(id)sampleAssetResults;
+(id)sampleMemoryResults;
+(id)sampleMomentResults;
+(id)samplePersonResults;
+(id)samplePlaceResults;
+(id)sampleSceneResults;


@end


#endif