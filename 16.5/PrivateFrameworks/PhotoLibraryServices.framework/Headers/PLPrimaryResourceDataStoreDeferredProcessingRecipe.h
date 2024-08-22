// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPRIMARYRESOURCEDATASTOREDEFERREDPROCESSINGRECIPE_H
#define PLPRIMARYRESOURCEDATASTOREDEFERREDPROCESSINGRECIPE_H



#import "PLResourceRecipe.h"

@interface PLPrimaryResourceDataStoreDeferredProcessingRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID; // ivar: _recipeID


-(BOOL)_needsVideoFinalizationForImageAsset:(id)arg0 ;
-(BOOL)isMarkedFullSize;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)description;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;


@end


#endif