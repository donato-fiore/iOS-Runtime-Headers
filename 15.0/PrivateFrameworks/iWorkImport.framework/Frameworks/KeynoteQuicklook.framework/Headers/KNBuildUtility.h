// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNBUILDUTILITY_H
#define KNBUILDUTILITY_H


#import <Foundation/Foundation.h>


@interface KNBuildUtility : NSObject



+(BOOL)animationInfo:(id)arg0 onInfo:(id)arg1 canRunSimultaneouslyWithAnimationInfo:(id)arg2 onInfo:(id)arg3 ;
+(NSInteger)sharedAnimationTypeForBuildChunks:(id)arg0 ;
+(NSInteger)sharedAnimationTypeForBuilds:(id)arg0 ;
+(NSUInteger)countOfInfosThatSupportContentBuilds:(id)arg0 ;
+(id)UUIDToTSPObjectMapForTSPObjects:(id)arg0 ;
+(id)buildUUIDToChunkIdentifiersMapForChunkIdentifiers:(id)arg0 ;
+(id)buildsForChunks:(id)arg0 ;
+(id)buildsToChunksMapForBuilds:(id)arg0 chunks:(id)arg1 ;
+(id)buildsToChunksMapForChunks:(id)arg0 ;
+(id)chunksForInfos:(id)arg0 ;
+(id)chunksInBuilds:(id)arg0 ;
+(id)identifiersForChunks:(id)arg0 ;
+(id)nonNilChunkIdentifierFromPossiblyNilChunk:(id)arg0 ;
+(id)orderedBuildsFromUnorderedBuilds:(id)arg0 ;
+(id)uniqueBuildsOrderedByChunks:(id)arg0 ;
+(id)validIdentifierForChunkToInsertAfterFromPossiblyInvalidIdentifier:(id)arg0 build:(id)arg1 ;


@end


#endif