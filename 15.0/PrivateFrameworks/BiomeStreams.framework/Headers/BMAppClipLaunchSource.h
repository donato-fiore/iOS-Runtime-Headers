// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMAPPCLIPLAUNCHSOURCE_H
#define BMAPPCLIPLAUNCHSOURCE_H

@class _CDClientContext, _DKKnowledgeStore;


#import "BMStoreSource.h"

@interface BMAppClipLaunchSource : BMStoreSource

@property (readonly, nonatomic) _CDClientContext *contextStore; // ivar: _contextStore
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore


-(id)initWithIdentifier:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif