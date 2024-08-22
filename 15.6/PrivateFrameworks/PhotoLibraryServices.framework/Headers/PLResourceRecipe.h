// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLRESOURCERECIPE_H
#define PLRESOURCERECIPE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLResourceRecipe : NSObject <NSCopying>





+(Class)classFromRecipeID:(unsigned int)arg0 ;
+(id)recipeFromID:(unsigned int)arg0 ;
-(BOOL)colorSpaceIsNativeForDisplay;
-(BOOL)isDerivative;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMarkedFullSize;
-(NSUInteger)hash;
-(id)chooseIngredientsFrom:(id)arg0 version:(unsigned int)arg1 ;
-(id)codecFourCharCodeName;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expectedFileURLForVersion:(unsigned int)arg0 asset:(id)arg1 ;
-(id)expectedSizeFromWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(id)maxPixelCountForAssetWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)recipeErrorWithCode:(NSInteger)arg0 version:(unsigned int)arg1 underlyingError:(id)arg2 debugDescription:(id)arg3 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)uti;
-(unsigned int)recipeID;
-(unsigned short)recipeClassID;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;
-(void)populateAdjustedRecipeIngredients:(id)arg0 asset:(id)arg1 version:(unsigned int)arg2 ;


@end


#endif