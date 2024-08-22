// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPHMEMORYPERSISTABLERECIPEPRODUCER_H
#define PXSTORYPHMEMORYPERSISTABLERECIPEPRODUCER_H

@class PHMemory;
@protocol PXStoryPersistableRecipeProducer, PXDisplayAsset, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryPHMemoryPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer>



@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_persistableRecipeForMemory:(id)arg0 keyAsset:(id)arg1 miroDataUsed:(*id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithMemory:(id)arg0 keyAsset:(id)arg1 ;
-(id)requestPersistableRecipeWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif