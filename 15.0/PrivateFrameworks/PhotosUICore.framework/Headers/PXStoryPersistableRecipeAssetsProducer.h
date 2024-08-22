// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPERSISTABLERECIPEASSETSPRODUCER_H
#define PXSTORYPERSISTABLERECIPEASSETSPRODUCER_H

@protocol PXStoryAssetsProducer, PFStoryRecipe, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryPersistableRecipeAssetsProducer : NSObject <PXStoryAssetsProducer>



@property (readonly, nonatomic) NSObject<PFStoryRecipe> *persistableRecipe; // ivar: _persistableRecipe
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)initWithPersistableRecipe:(id)arg0 ;
-(id)requestAssetsWithOptions:(NSUInteger)arg0 storyQueue:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif