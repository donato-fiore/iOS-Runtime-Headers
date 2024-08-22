// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIMARYRESOURCEDATASTOREDATARECIPE_H
#define PLPRIMARYRESOURCEDATASTOREDATARECIPE_H



#import "PLResourceRecipe.h"

@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID; // ivar: _recipeID


-(id)chooseIngredientsFrom:(id)arg0 version:(unsigned int)arg1 ;
-(id)codecFourCharCodeName;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)description;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)uti;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;


@end


#endif