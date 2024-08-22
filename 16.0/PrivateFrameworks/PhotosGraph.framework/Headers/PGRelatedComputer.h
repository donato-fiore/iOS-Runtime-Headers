// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGRELATEDCOMPUTER_H
#define PGRELATEDCOMPUTER_H

@class NSSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGRelatedComputer : NSObject {
    PGManagerWorkingContext *_workingContext;
    NSSet *_blockedFeatures;
    NSObject<OS_os_log> *_loggingConnection;
}




+(id)searchNodesInGraph:(id)arg0 forAsset:(id)arg1 inMoment:(id)arg2 ;
+(id)stringFromPGRelatedType:(NSUInteger)arg0 ;
-(BOOL)exportMatchingResultsForAsset:(id)arg0 relatedType:(NSUInteger)arg1 toURL:(id)arg2 error:(*id)arg3 ;
-(BOOL)exportMatchingResultsForMoment:(id)arg0 relatedType:(NSUInteger)arg1 toURL:(id)arg2 error:(*id)arg3 ;
-(id)_diverseResultsFromMatchingResults:(id)arg0 inGraph:(id)arg1 timeShuffleDate:(id)arg2 matchingOptions:(id)arg3 options:(id)arg4 ;
-(id)_fileURLForMomentNode:(id)arg0 inGraph:(id)arg1 relatedType:(NSUInteger)arg2 focusOnAsset:(id)arg3 toURL:(id)arg4 ;
-(id)_postProcessMatchingResults:(id)arg0 inGraph:(id)arg1 matchingOptions:(id)arg2 options:(id)arg3 ;
-(id)_referenceAssetWithLocalIdentifier:(id)arg0 ;
-(id)_relatedCollectionBetweenHighlight:(id)arg0 andAssetCollection:(id)arg1 relatedType:(NSUInteger)arg2 needsDebugInfo:(BOOL)arg3 needsDiversityInfo:(BOOL)arg4 ;
-(id)_relatedCollectionBetweenMoment:(id)arg0 andAssetCollection:(id)arg1 relatedType:(NSUInteger)arg2 needsDebugInfo:(BOOL)arg3 needsDiversityInfo:(BOOL)arg4 ;
-(id)_relatedCollectionsForDefaultAssetCollection:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 assetCollectionForKeywords:(id)arg3 curationContext:(id)arg4 error:(*id)arg5 ;
-(id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 assetCollectionForKeywords:(id)arg3 curationContext:(id)arg4 error:(*id)arg5 ;
-(id)_stringFromRelatedType:(NSUInteger)arg0 ;
-(id)_tripsForTargetDomain:(unsigned short)arg0 inGraph:(id)arg1 ;
-(id)_upNextCollectionsForAssetCollection:(id)arg0 options:(id)arg1 curationContext:(id)arg2 error:(*id)arg3 ;
-(id)_weekendsForTargetDomain:(unsigned short)arg0 inGraph:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 blockedFeatures:(id)arg1 ;
-(id)relatedCollectionBetweenAsset:(id)arg0 andAssetCollection:(id)arg1 relatedType:(NSUInteger)arg2 needsDebugInfo:(BOOL)arg3 ;
-(id)relatedCollectionBetweenAssetCollection:(id)arg0 andAssetCollection:(id)arg1 relatedType:(NSUInteger)arg2 curationContext:(id)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)relatedCollectionsForAsset:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)relatedCollectionsForAssetCollection:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 curationContext:(id)arg3 error:(*id)arg4 ;
-(id)relatedCollectionsForDefaultAssetCollection:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 curationContext:(id)arg3 error:(*id)arg4 ;
-(id)relatedCollectionsForHighlight:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 generateTitles:(BOOL)arg3 error:(*id)arg4 ;
-(id)relatedCollectionsForMemoryTripOrWeekend:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 curationContext:(id)arg3 error:(*id)arg4 ;
-(id)relatedCollectionsForMoment:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)relatedCollectionsForMoment:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 generateTitles:(BOOL)arg3 error:(*id)arg4 ;
-(id)relatedCollectionsForPersonLocalIdentifiers:(id)arg0 relatedType:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)_generateTitleForRelatedResults:(id)arg0 withGraph:(id)arg1 referenceEvent:(id)arg2 referenceAsset:(id)arg3 ;


@end


#endif