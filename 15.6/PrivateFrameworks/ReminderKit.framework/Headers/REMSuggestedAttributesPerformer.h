// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSUGGESTEDATTRIBUTESPERFORMER_H
#define REMSUGGESTEDATTRIBUTESPERFORMER_H

@protocol REMXPCSuggestedAttributesPerformer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMSuggestedAttributesPerformer : NSObject

@property (retain, nonatomic) NSObject<REMXPCSuggestedAttributesPerformer> *q_cachedXPCPerformer; // ivar: _q_cachedXPCPerformer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) REMStore *store; // ivar: _store


-(id)initWithQueue:(id)arg0 store:(id)arg1 ;
-(id)q_resolveSuggestedAttributesPerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)q_syncSuggestedAttributesPerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)resultFromPerformingSwiftInvocation:(id)arg0 parametersData:(id)arg1 storages:(id)arg2 error:(*id)arg3 ;
-(void)preWarmModels;


@end


#endif