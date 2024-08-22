// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOTRIMBURNINUTILITY_H
#define PXVIDEOTRIMBURNINUTILITY_H


#import <Foundation/Foundation.h>


@interface PXVideoTrimBurnInUtility : NSObject



+(id)_compositionControllerWithNormalizedTemporalAdjustmentsForBurnedInTrim:(id)arg0 ;
+(id)_editSourceForContentEditingInput:(id)arg0 error:(*id)arg1 ;
+(id)_error:(NSInteger)arg0 description:(id)arg1 ;
+(id)_fileExtension;
+(id)_fileType;
+(id)_renderURLForAssetFilename:(id)arg0 ;
+(id)_trimOnlyCompositionControllerFor:(id)arg0 keepOrientationAdjustment:(BOOL)arg1 ;
+(void)_contentEditingInputFor:(id)arg0 completion:(id)arg1 ;
+(void)_duplicateAsset:(id)arg0 withNewRenderURL:(id)arg1 completion:(id)arg2 ;
+(void)_renderComposition:(id)arg0 toURL:(id)arg1 completion:(id)arg2 ;
+(void)burnInTrimToNewAsset:(id)arg0 compositionController:(id)arg1 keepOrientationAdjustmentForRender:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;


@end


#endif