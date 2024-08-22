// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPASSTHROUGHPERSISTABLERECIPEPRODUCER_H
#define PXSTORYPASSTHROUGHPERSISTABLERECIPEPRODUCER_H

@protocol PXStoryPersistableRecipeProducer, PFStoryRecipe;

#import <Foundation/Foundation.h>


@interface PXStoryPassthroughPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer>



@property (readonly, nonatomic) NSObject<PFStoryRecipe> *persistableRecipe; // ivar: _persistableRecipe


-(id)init;
-(id)initWithPersistableRecipe:(id)arg0 ;
-(id)requestPersistableRecipeWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif