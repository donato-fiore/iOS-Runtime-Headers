// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCOREDUETMEDIAUSAGESTORE_H
#define BMCOREDUETMEDIAUSAGESTORE_H

@class _CDClientContext;
@protocol BMCoreDuetMediaUsageStore, _DKKnowledgeSaving;

#import <Foundation/Foundation.h>


@interface BMCoreDuetMediaUsageStore : NSObject <BMCoreDuetMediaUsageStore>



@property (readonly, nonatomic) _CDClientContext *contextStore; // ivar: _contextStore
@property (readonly, nonatomic) NSObject<_DKKnowledgeSaving> *knowledgeStore; // ivar: _knowledgeStore


-(BOOL)addContextValue:(id)arg0 toArrayAtKeyPath:(id)arg1 ;
-(BOOL)saveKnowledgeEvent:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;


@end


#endif