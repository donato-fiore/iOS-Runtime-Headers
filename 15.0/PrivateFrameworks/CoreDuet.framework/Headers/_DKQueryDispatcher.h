// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKQUERYDISPATCHER_H
#define _DKQUERYDISPATCHER_H

@protocol _DKKnowledgeQuerying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DKKnowledgeContentProvider.h"
#import "_DKContentProviderCache.h"

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying>

 {
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    id<_DKKnowledgeQuerying> *_knowledgeStore;
    _DKKnowledgeContentProvider *_knowledgeContentProvider;
}


@property (retain, nonatomic) _DKContentProviderCache *contentProviderCache; // ivar: _contentProviderCache


-(id)executeQuery:(id)arg0 error:(*id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif