// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPRIMARYRESOURCEDATASTORELOCALVIDEOKEYFRAMERECIPE_H
#define PLPRIMARYRESOURCEDATASTORELOCALVIDEOKEYFRAMERECIPE_H

@class NSMutableOrderedSet, NSMutableSet;


#import "PLResourceRecipe.h"

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
    os_unfair_lock_s _jobLock;
    NSMutableOrderedSet *_jobQueue;
    NSMutableSet *_inflightJobs;
}




+(void)generateKeyFrameFromVideoURL:(id)arg0 destinationURL:(id)arg1 time:(struct ? )arg2 completion:(id)arg3 ;
-(id)_nextJobAfterCompletingInflightJob:(id)arg0 ;
-(id)chooseIngredientsFrom:(id)arg0 version:(unsigned int)arg1 ;
-(id)codecFourCharCodeName;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(unsigned int)recipeID;
-(void)_generateAndStoreForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progress:(*id)arg2 completion:(id)arg3 ;
-(void)_handleKeyFrameGeneratedWithSuccess:(BOOL)arg0 error:(id)arg1 asset:(id)arg2 destinationURL:(id)arg3 completion:(id)arg4 ;
-(void)_runJob:(id)arg0 ;
-(void)generateAndStoreForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progress:(*id)arg2 completion:(id)arg3 ;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;


@end


#endif