// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNAMEDENTITYREADONLYCLIENT_H
#define PPNAMEDENTITYREADONLYCLIENT_H

@protocol PPNamedEntityClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)namedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)rankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(id)_remoteObjectProxy;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)mapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(void)_unblockPendingQueries;
-(void)namedEntityBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)namedEntityRecordBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif