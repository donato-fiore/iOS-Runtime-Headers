// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSINGLEPERSONWALLPAPERASSETSUGGESTER_H
#define PGSINGLEPERSONWALLPAPERASSETSUGGESTER_H

@class NSSet, CLSCurationContext, NSEnumerator, NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGSinglePersonWallpaperAssetSuggesterDistancingContext.h"
#import "PGSinglePersonWallpaperAssetSuggesterFilteringContext.h"
#import "PGSinglePersonWallpaperAssetSuggesterScoringContext.h"

@interface PGSinglePersonWallpaperAssetSuggester : NSObject {
    NSSet *_personLocalIdentifiers;
    CLSCurationContext *_curationContext;
    NSObject<OS_os_log> *_loggingConnection;
    NSEnumerator *_suggestedAssetEnumerator;
    NSUInteger _numberOfSuggestedAssets;
}


@property (retain, nonatomic) NSArray *assetFetchPropertySets; // ivar: _assetFetchPropertySets
@property (nonatomic) BOOL bypassesFaceQualityAndCropScoreChecks; // ivar: _bypassesFaceQualityAndCropScoreChecks
@property (retain, nonatomic) PGSinglePersonWallpaperAssetSuggesterDistancingContext *distancingContext; // ivar: _distancingContext
@property (retain, nonatomic) PGSinglePersonWallpaperAssetSuggesterFilteringContext *filteringContext; // ivar: _filteringContext
@property (retain, nonatomic) NSSet *forbiddenAssetUUIDs; // ivar: _forbiddenAssetUUIDs
@property (retain, nonatomic) PGSinglePersonWallpaperAssetSuggesterScoringContext *scoringContext; // ivar: _scoringContext


+(BOOL)candidateAsset:(id)arg0 andFace:(id)arg1 passesPostfilteringWithContext:(id)arg2 curationContext:(id)arg3 bypassFaceQualityAndCropScoreChecks:(BOOL)arg4 statistics:(struct ? *)arg5 ;
+(BOOL)passesFilteringWithAsset:(id)arg0 forTopWallpaperSuggestions:(BOOL)arg1 curationContext:(id)arg2 reason:(*id)arg3 ;
+(id)_assetPredicate;
+(id)prefilteringInternalPredicateWithContext:(id)arg0 forTargetAspectRatio:(CGFloat)arg1 ;
+(id)prefilteringSubpredicatesWithContext:(id)arg0 forTargetAspectRatio:(CGFloat)arg1 ;
-(NSUInteger)expectedNumberOfSuggestedAssets;
-(id)_sortedDedupedCandidatesFromCandidates:(id)arg0 progressBlock:(id)arg1 ;
-(id)assetsFromCandidates:(id)arg0 ;
-(id)initWithPersonLocalIdentifiers:(id)arg0 curationContext:(id)arg1 loggingConnection:(id)arg2 ;
-(id)nextSuggestedAsset;
-(id)unsortedCandidatesFromPersonLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(void)computeSuggestedAssetsWithProgress:(id)arg0 ;


@end


#endif