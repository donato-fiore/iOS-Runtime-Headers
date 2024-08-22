// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPERSISTABLERECIPERESULT_H
#define PXSTORYPERSISTABLERECIPERESULT_H

@protocol PFStoryRecipe;

#import <Foundation/Foundation.h>

#import "PXStoryMiroMemoryConverter.h"

@interface PXStoryPersistableRecipeResult : NSObject

@property (readonly, nonatomic) PXStoryMiroMemoryConverter *miroInfo; // ivar: _miroInfo
@property (readonly, nonatomic) NSObject<PFStoryRecipe> *recipe; // ivar: _recipe


-(id)init;
-(id)initWithPersistableRecipe:(id)arg0 ;
-(id)initWithPersistableRecipe:(id)arg0 miroInfo:(id)arg1 ;


@end


#endif