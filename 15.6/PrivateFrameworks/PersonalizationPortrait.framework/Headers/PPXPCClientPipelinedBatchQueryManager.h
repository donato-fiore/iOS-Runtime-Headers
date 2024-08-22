// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPXPCCLIENTPIPELINEDBATCHQUERYMANAGER_H
#define PPXPCCLIENTPIPELINEDBATCHQUERYMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPXPCClientPipelinedBatchQueryManager : NSObject {
    uint8_t _queryId;
    NSMutableDictionary *_queryContexts;
    NSObject<OS_dispatch_queue> *_queue;
}




+(void)assertBatch:(id)arg0 forQueryName:(id)arg1 hasExpectedContainedType:(Class)arg2 ;
// -(BOOL)syncExecuteQueryWithName:(id)arg0 error:(*id)arg1 queryInitializer:(id)arg2 handleBatch:(unk)arg3  ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)cancelPendingQueriesWithError:(id)arg0 ;
-(void)handleReplyWithName:(id)arg0 batch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(NSUInteger)arg4 completion:(id)arg5 ;


@end


#endif