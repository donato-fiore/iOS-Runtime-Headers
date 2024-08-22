// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLOCATIONREADONLYCLIENT_H
#define PPLOCATIONREADONLYCLIENT_H

@protocol PPLocationClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"
#import "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPLocationReadOnlyClient : NSObject <PPLocationClientProtocol>

 {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}




+(id)sharedInstance;
-(BOOL)locationRecordsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(BOOL)rankedLocationsWithQuery:(id)arg0 error:(*id)arg1 handleBatch:(id)arg2 ;
-(id)_remoteObjectProxy;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_unblockPendingQueries;
-(void)locationBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)locationRecordBatch:(id)arg0 isLast:(BOOL)arg1 error:(id)arg2 queryId:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif