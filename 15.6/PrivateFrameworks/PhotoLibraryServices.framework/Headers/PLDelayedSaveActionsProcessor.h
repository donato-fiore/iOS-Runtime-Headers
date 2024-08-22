// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDELAYEDSAVEACTIONSPROCESSOR_H
#define PLDELAYEDSAVEACTIONSPROCESSOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLDelayedSaveActionsProcessor : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_queue> *_coreDuetCallback;
}




-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_deleteUUIDs:(id)arg0 fromCoreDuetStreams:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg0 library:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedAssetsForDuetDelete:(id)arg0 transaction:(id)arg1 ;
-(void)_processDelayedAssetsForFileSystemPersistency:(id)arg0 library:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedCloudFeedAlbumUpdates:(id)arg0 assetInserts:(id)arg1 assetUpdates:(id)arg2 commentInserts:(id)arg3 invitationRecordUpdates:(id)arg4 deletionEntries:(id)arg5 transaction:(id)arg6 ;
-(void)_processDelayedDupeAnalysisNormalInserts:(id)arg0 cloudInserts:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedFeaturedContentUpdateAndWidgetTimelineReload:(BOOL)arg0 shouldReloadWidgetTimeline:(BOOL)arg1 library:(id)arg2 transaction:(id)arg3 ;
-(void)_processDelayedImportSessionCountsAndDateRangeUpdates:(id)arg0 library:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedMemoriesAssetUpdate:(id)arg0 library:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedMemoriesForDuetDelete:(id)arg0 transaction:(id)arg1 ;
-(void)_processDelayedMomentChangesWithTransaction:(id)arg0 ;
-(void)_processDelayedSearchIndexUpdates:(id)arg0 transaction:(id)arg1 ;
-(void)_processDelayedWidgetTimelineReload:(BOOL)arg0 library:(id)arg1 transaction:(id)arg2 ;
-(void)processDelayedDeletionsFromChangeHubEvent:(id)arg0 library:(id)arg1 transaction:(id)arg2 ;
-(void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg0 ;
-(void)processDelayedSaveActionsDetail:(id)arg0 withPhotoLibrary:(id)arg1 transaction:(id)arg2 ;


@end


#endif