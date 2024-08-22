// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTEXTRECENTSCACHE_H
#define CKCONTEXTRECENTSCACHE_H

@class BMUserActivityMetadataStream, NSXPCConnection, NSString, BMUserFocusComputedModeStream, BPSSink;
@protocol OS_dispatch_queue, OS_os_transaction, CKContextRecentsCacheDelegate;

#import <Foundation/Foundation.h>


@interface CKContextRecentsCache : NSObject {
    BMUserActivityMetadataStream *_stream;
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSXPCConnection *_serviceConnection;
    id *_deferredMaintenanceTaskBlock;
    NSObject<OS_os_transaction> *_deferredMaintenanceTransaction;
    NSString *_latestActivity;
    NSUInteger _configuration;
    BMUserFocusComputedModeStream *_computedModeStream;
    NSObject<OS_dispatch_queue> *_computedFocusModeQueue;
    BPSSink *_computedModeSink;
}


@property (weak, nonatomic) NSObject<CKContextRecentsCacheDelegate> *delegate; // ivar: _delegate


-(BOOL)_constellationResult:(id)arg0 intersectsWithRecent:(id)arg1 ;
-(BOOL)_recent:(id)arg0 matchesKeywords:(id)arg1 ;
-(NSUInteger)_maximumNumberOfItemsToRetrieve;
-(id)_associatedTopicIdsForRecent:(id)arg0 ;
-(id)_associatedTopicTitlesForRecent:(id)arg0 ;
-(id)_establishServiceConnectionIfNecessary;
-(id)_modeUUIDStringForComputedModeEvent:(id)arg0 ;
-(id)_relativeDateStringForRecent:(id)arg0 ;
-(id)initWithCacheConfiguration:(NSUInteger)arg0 ;
-(void)_groupActivitiesByAppIntoSectionsWithRecents:(id)arg0 limit:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)_groupActivitiesByConstellationIntoSectionsWithRecents:(id)arg0 limit:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)_groupActivitiesByDateIntoSectionsWithRecents:(id)arg0 limit:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)_groupActivitiesByModeIntoSectionsWithRecents:(id)arg0 limit:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)_modeDidChangeToModeWithModeUUIDString:(id)arg0 ;
-(void)_performMaintenanceTasks;
-(void)_performMaintenanceTasksForRecents:(id)arg0 ;
-(void)_pruneLocalMetadataForRecents:(id)arg0 ;
-(void)_pruneRecentsFromUnusedAppsForRecents:(id)arg0 ;
-(void)_registerComputedModeStream;
-(void)_scheduleDeferredMaintenanceTasks;
-(void)_updateLatestFocusMode;
-(void)allRecentsWithReply:(id)arg0 ;
-(void)dealloc;
-(void)insertUserActivityData:(id)arg0 preferredTitle:(id)arg1 bundleId:(id)arg2 topics:(id)arg3 hasAssociatedImageRepresentation:(BOOL)arg4 uuid:(id)arg5 ;
-(void)pruneRecentsForBundleIdentifiers:(id)arg0 ;
-(void)removeAllRecentsWithReply:(id)arg0 ;
-(void)removeRecentWithUUID:(id)arg0 ;
-(void)removeRecentsMatchingRecent:(id)arg0 ;
-(void)retrieveImageDataForRecentWithUUID:(id)arg0 withReply:(id)arg1 ;
-(void)retrieveRecentMatchingUUID:(id)arg0 withReply:(id)arg1 ;
-(void)retrieveRecentsBetweenStartDate:(id)arg0 endDate:(id)arg1 withReply:(id)arg2 ;
-(void)retrieveRecentsCatalogWithStyle:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)retrieveRecentsForPredictionWithReply:(id)arg0 ;
-(void)retrieveRecentsMatchingBundleIdentifier:(id)arg0 withReply:(id)arg1 ;
-(void)retrieveRecentsMatchingMode:(id)arg0 withReply:(id)arg1 ;
-(void)retrieveRecentsMatchingStrings:(id)arg0 withReply:(id)arg1 ;
-(void)retrieveRecentsMatchingTopicIds:(id)arg0 titles:(id)arg1 withReply:(id)arg2 ;
-(void)warm;


@end


#endif