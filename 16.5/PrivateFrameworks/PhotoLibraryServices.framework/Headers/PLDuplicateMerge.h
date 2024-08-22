// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEMERGE_H
#define PLDUPLICATEMERGE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"
#import "PLDuplicateMergeCrashRecovery.h"
#import "PLManagedAsset.h"
#import "PLDuplicateAsset.h"

@interface PLDuplicateMerge : NSObject {
    PLPhotoLibrary *_library;
    NSArray *_sourceAssets;
    PLDuplicateMergeCrashRecovery *_mergeCrashRecovery;
}


@property (readonly) PLManagedAsset *asset;
@property (retain) PLDuplicateAsset *targetAsset; // ivar: _targetAsset


+(BOOL)mergeAssets:(id)arg0 targetAssetOID:(id)arg1 photolibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)_isRecentlyModifiedSourceAsset:(id)arg0 ;
-(BOOL)_isValidForDateCreatedOverwriteWithSource:(id)arg0 ;
-(BOOL)_isValidForLocationOverwriteWithSource:(id)arg0 ;
-(BOOL)_isValidForOverwriteWithSourceProperty:(id)arg0 targetProperty:(id)arg1 ;
-(BOOL)_isValidForTimezoneOverwriteWithSource:(id)arg0 ;
-(BOOL)_isValidForTitleOverwriteWithSource:(id)arg0 ;
-(BOOL)_mergeAdjustmentsFromSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)_mergeResourcesFromSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)mergeWithError:(*id)arg0 ;
-(id)initWithSourceAssets:(id)arg0 targetAsset:(id)arg1 photolibrary:(id)arg2 ;
-(void)_mergeAlbumRelationshipsFromSource:(id)arg0 ;
-(void)_mergeCaptionFromSource:(id)arg0 ;
-(void)_mergeDateFromSource:(id)arg0 ;
-(void)_mergeFaceRelationshipsFromSource:(id)arg0 ;
-(void)_mergeFavoriteFromSource:(id)arg0 ;
-(void)_mergeKeywordsFromSource:(id)arg0 ;
-(void)_mergeLocationFromSource:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_mergeMemoryRelationshipsFromSource:(id)arg0 ;
-(void)_mergeMetadataFromSource:(id)arg0 ;
-(void)_mergeResourceMetadataFromSource:(id)arg0 ;
-(void)_mergeSharedLibraryMetadataFromSource:(id)arg0 ;
-(void)_mergeTimezoneFromSource:(id)arg0 ;
-(void)_mergeTitleFromSource:(id)arg0 ;
-(void)_preFileCloneChecksForURL:(id)arg0 ;
-(void)_resetMediaAnalysisStateWithType:(NSInteger)arg0 ;
-(void)_setDCIMFilenameFromSource:(id)arg0 ;
-(void)_setUBFFilenameFromDuplicateSource:(id)arg0 ;


@end


#endif