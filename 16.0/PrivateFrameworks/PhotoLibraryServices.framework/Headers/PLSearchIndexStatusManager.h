// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHINDEXSTATUSMANAGER_H
#define PLSEARCHINDEXSTATUSMANAGER_H


#import <Foundation/Foundation.h>


@interface PLSearchIndexStatusManager : NSObject



+(BOOL)_saveSearchIndexingRebuildInfo:(id)arg0 library:(id)arg1 ;
+(BOOL)_writeSearchIndexingStatusPlistToDisk:(id)arg0 library:(id)arg1 ;
+(BOOL)isSearchIndexingStateInSyncWithSpotlightClientState:(id)arg0 ;
+(BOOL)saveCurrentSearchIndexInfoForPhotoLibrary:(id)arg0 sceneTaxonomyDigests:(id)arg1 ;
+(BOOL)saveSearchIndexIsRebuilding:(BOOL)arg0 library:(id)arg1 ;
+(BOOL)saveSearchIndexingSyncToken:(id)arg0 library:(id)arg1 ;
+(BOOL)saveSpotlightRequestedRebuildForPhotoLibrary:(id)arg0 ;
+(BOOL)searchIndexIsRebuildingForLibrary:(id)arg0 ;
+(NSUInteger)currentSearchIndexVersion;
+(id)_searchIndexingStatusPlistForLibrary:(id)arg0 ;
+(id)_searchIndexingStatusPlistPathForLibrary:(id)arg0 ;
+(id)currentSearchIndexingSyncTokenForLibrary:(id)arg0 ;
+(id)lastSearchIndexingSyncTokenForLibrary:(id)arg0 ;
+(id)searchIndexingRebuildInfoForLibrary:(id)arg0 ;


@end


#endif