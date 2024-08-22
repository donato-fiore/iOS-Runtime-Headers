// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNAMEDENTITYREADWRITECLIENT_H
#define PPNAMEDENTITYREADWRITECLIENT_H


#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"

@interface PPNamedEntityReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(BOOL)_doDeletionSyncCallWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 syncCall:(id)arg2 ;
-(BOOL)_doSyncCallWithError:(*id)arg0 syncCall:(id)arg1 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)donateLocationNamedEntities:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 error:(*id)arg3 ;
-(BOOL)donateMapItem:(id)arg0 forPlaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)donateNamedEntities:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 error:(*id)arg5 ;
-(BOOL)flushDonationsWithError:(*id)arg0 ;
-(BOOL)removeMapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeMapItemsBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;


@end


#endif