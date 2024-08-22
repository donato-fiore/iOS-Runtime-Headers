// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMAPPCLIPLAUNCHSOURCE_H
#define BMAPPCLIPLAUNCHSOURCE_H

@class _CDClientContext, NSString, _DKKnowledgeStore;
@protocol BMSourceProtocol;

#import <Foundation/Foundation.h>

#import "BMSource.h"

@interface BMAppClipLaunchSource : NSObject <BMSourceProtocol>

 {
    BMSource *_storeSource;
}


@property (readonly, nonatomic) _CDClientContext *contextStore; // ivar: _contextStore
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore


-(id)initWithStoreSource:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif