// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPXPCNAMEDENTITYSTORE_H
#define PPXPCNAMEDENTITYSTORE_H

@class NSDate;


#import "PPNamedEntityStore.h"
#import "PPRecordMonitoringHelper.h"
#import "PPClientFeedbackHelper.h"

@interface PPXPCNamedEntityStore : PPNamedEntityStore {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
    NSDate *_lastCallDate;
}




-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThan:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)donateLocationNamedEntities:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 error:(*id)arg3 ;
-(BOOL)donateMapItem:(id)arg0 forPlaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)donateNamedEntities:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 error:(*id)arg5 ;
-(BOOL)flushDonationsWithError:(*id)arg0 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterRankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeMapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeMapItemsBeforeCutoffDate:(id)arg0 error:(*id)arg1 ;
-(id)_getLastCallDate;
-(id)_init;
-(id)_recordGenerator:(SEL)arg0 ;
-(id)clientIdentifier;
-(id)mapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(id)namedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 ;
-(void)_loadNamedEntityRecordsWithDelegate:(id)arg0 ;
-(void)_sendChangesToDelegates;
-(void)_sendResetToAllDelegates;
-(void)_setLastCallDate;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)setClientIdentifier:(id)arg0 ;


@end


#endif