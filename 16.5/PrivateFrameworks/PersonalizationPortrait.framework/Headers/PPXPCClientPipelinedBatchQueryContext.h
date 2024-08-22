// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPXPCCLIENTPIPELINEDBATCHQUERYCONTEXT_H
#define PPXPCCLIENTPIPELINEDBATCHQUERYCONTEXT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPXPCClientPipelinedBatchQueryContext : NSObject {
    BOOL _stop;
    id *_finalizeCall;
    atomic_flag _calledFinalizeBlock;
}


@property (copy, nonatomic) id *handleBatch; // ivar: _handleBatch
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)description;
-(void)finalizeCallWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)setFinalizeCall:(id)arg0 ;


@end


#endif