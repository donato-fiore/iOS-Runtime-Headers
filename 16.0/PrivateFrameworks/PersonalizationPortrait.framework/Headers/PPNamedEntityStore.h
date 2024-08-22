// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPNAMEDENTITYSTORE_H
#define PPNAMEDENTITYSTORE_H

@class NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>


@interface PPNamedEntityStore : NSObject <PPFeedbackAccepting, PPClientStore>



@property (retain, nonatomic) NSString *clientIdentifier;


+(id)defaultStore;
+(id)new;
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
-(id)_initFromSubclass;
-(id)init;
-(id)mapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(id)namedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif