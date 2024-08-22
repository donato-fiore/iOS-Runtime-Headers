// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYNULLPERSISTABLERECIPEWRITER_H
#define PXSTORYNULLPERSISTABLERECIPEWRITER_H

@class NSError;
@protocol PXStoryPersistableRecipeWriter;

#import <Foundation/Foundation.h>


@interface PXStoryNullPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>



@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)init;
-(id)initWithError:(id)arg0 ;
-(id)writePersistableRecipe:(id)arg0 assetEdits:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif