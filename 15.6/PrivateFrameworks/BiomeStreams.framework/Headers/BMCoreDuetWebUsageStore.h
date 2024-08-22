// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMCOREDUETWEBUSAGESTORE_H
#define BMCOREDUETWEBUSAGESTORE_H

@class _CDClientContext;
@protocol BMCoreDuetWebUsageStore, _DKKnowledgeSaving;

#import <Foundation/Foundation.h>


@interface BMCoreDuetWebUsageStore : NSObject <BMCoreDuetWebUsageStore>



@property (readonly, nonatomic) _CDClientContext *contextStore; // ivar: _contextStore
@property (readonly, nonatomic) NSObject<_DKKnowledgeSaving> *knowledgeStore; // ivar: _knowledgeStore


-(BOOL)addContextValue:(id)arg0 toArrayAtKeyPath:(id)arg1 ;
-(BOOL)saveKnowledgeEvent:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(void)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(void)removeObjects:(id)arg0 fromArrayAtKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif