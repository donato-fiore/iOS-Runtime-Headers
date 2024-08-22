// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPHASSETCOLLECTIONPERSISTABLERECIPEWRITER_H
#define PXSTORYPHASSETCOLLECTIONPERSISTABLERECIPEWRITER_H

@class PHAssetCollection;
@protocol PXStoryPersistableRecipeWriter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryPHAssetCollectionPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)writePersistableRecipe:(id)arg0 assetEdits:(id)arg1 undoManager:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif