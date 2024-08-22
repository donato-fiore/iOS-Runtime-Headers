// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGZEROKEYWORDCOMPUTER_H
#define PGZEROKEYWORDCOMPUTER_H

@class PHPhotoLibrary, CLSSceneTaxonomyHierarchy;

#import <Foundation/Foundation.h>

#import "PGCurationManager.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGSearchComputationCache.h"

@interface PGZeroKeywordComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PGCurationManager *_curationManager;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}


@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWhereMeIsPresent; // ivar: _momentNodesWhereMeIsPresent
@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache; // ivar: _searchComputationCache
@property (readonly, nonatomic) BOOL shouldFilterMomentNodesWithPresence; // ivar: _shouldFilterMomentNodesWithPresence


+(id)contextualHolidayZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
+(id)zeroKeywordLog;
-(BOOL)_conflictBetweenLocationOrAreaNode:(id)arg0 andOtherLocationOrAreaNodes:(id)arg1 ;
-(id)_locationBasedContextualLocationNodeInGraph:(id)arg0 withLocation:(id)arg1 date:(id)arg2 locationHelper:(id)arg3 progressBlock:(id)arg4 ;
-(id)_timeBasedContextualLocationNodeInGraph:(id)arg0 withDate:(id)arg1 locationHelper:(id)arg2 progressBlock:(id)arg3 ;
-(id)_tripZeroKeywordWithGraph:(id)arg0 curationContext:(id)arg1 score:(*CGFloat)arg2 ;
-(id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg0 ;
-(id)_zeroKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 progressBlock:(id)arg3 ;
-(id)contextualDateZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 ;
-(id)contextualLocationNodesWithGraph:(id)arg0 options:(id)arg1 locationHelper:(id)arg2 progressBlock:(id)arg3 ;
-(id)contextualMeaningAndTripZeroKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 progressBlock:(id)arg3 ;
-(id)contextualPersonZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)contextualSceneZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)contextualSeasonZeroKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 ;
-(id)contextualSocialGroupZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)densestCloseLocationNodeForNode:(id)arg0 locationMask:(NSUInteger)arg1 locationHelper:(id)arg2 ;
-(id)eventZeroKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 progressBlock:(id)arg3 ;
-(id)initWithPhotoLibrary:(id)arg0 curationManager:(id)arg1 searchComputationCache:(id)arg2 ;
-(id)locationZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg0 collectionUUIDsToAvoid:(id)arg1 curationContext:(id)arg2 ;
-(id)momentNodesOverlappingLocalDateInterval:(id)arg0 inGraph:(id)arg1 ;
-(id)peopleZeroKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 progressBlock:(id)arg3 ;
-(id)sceneZeroKeywordsWithGraph:(id)arg0 options:(id)arg1 progressBlock:(id)arg2 ;
-(id)socialGroupKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 progressBlock:(id)arg3 ;
-(id)tripRankedKeywordWithGraph:(id)arg0 curationContext:(id)arg1 ;
-(id)tripZeroKeywordWithGraph:(id)arg0 curationContext:(id)arg1 ;
-(id)zeroKeywordsWithGraph:(id)arg0 curationContext:(id)arg1 options:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif