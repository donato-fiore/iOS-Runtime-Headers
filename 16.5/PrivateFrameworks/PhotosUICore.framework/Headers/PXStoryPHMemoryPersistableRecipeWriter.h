// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPHMEMORYPERSISTABLERECIPEWRITER_H
#define PXSTORYPHMEMORYPERSISTABLERECIPEWRITER_H

@class PHMemory;
@protocol PXStoryPersistableRecipeWriter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryPHMemoryPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>



@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)initWithMemory:(id)arg0 ;
-(id)writePersistableRecipe:(id)arg0 assetEdits:(id)arg1 undoManager:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif