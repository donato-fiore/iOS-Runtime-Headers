// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIMARYRESOURCEDATASTORELOCALVIDEOKEYFRAMERECIPE_H
#define PLPRIMARYRESOURCEDATASTORELOCALVIDEOKEYFRAMERECIPE_H



#import "PLResourceRecipe.h"
#import "PLLocalVideoKeyFrameJobQueue.h"

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
    PLLocalVideoKeyFrameJobQueue *_jobQueue;
}




+(void)generateKeyFrameFromVideoURL:(id)arg0 destinationURL:(id)arg1 time:(struct ? )arg2 completion:(id)arg3 ;
+(void)generateKeyFrameFromVideoURL:(id)arg0 time:(struct ? )arg1 completion:(id)arg2 ;
-(id)chooseIngredientsFrom:(id)arg0 version:(unsigned int)arg1 ;
-(id)codecFourCharCodeName;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(unsigned int)recipeID;
-(void)_generateAndStoreForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progress:(*id)arg2 completion:(id)arg3 ;
-(void)_handleJobFinished:(id)arg0 withMutatedMoc:(id)arg1 error:(id)arg2 storedRecipes:(id)arg3 affectedRecipes:(id)arg4 sourceMetadata:(id)arg5 ;
-(void)_handleKeyFrameGeneratedWithSuccess:(BOOL)arg0 error:(id)arg1 asset:(id)arg2 destinationURL:(id)arg3 completion:(id)arg4 ;
-(void)_runNextJob;
-(void)generateAndStoreForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progress:(*id)arg2 completion:(id)arg3 ;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;


@end


#endif