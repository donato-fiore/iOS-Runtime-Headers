// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEVIDEOTRIMBURNINUTILITY_H
#define PEVIDEOTRIMBURNINUTILITY_H


#import <Foundation/Foundation.h>


@interface PEVideoTrimBurnInUtility : NSObject



+(id)_compositionControllerWithNormalizedTemporalAdjustmentsForBurnedInTrim:(id)arg0 trimController:(id)arg1 cinematographyScript:(id)arg2 error:(*id)arg3 ;
+(id)_editSourceForContentEditingInput:(id)arg0 error:(*id)arg1 ;
+(id)_error:(NSInteger)arg0 description:(id)arg1 ;
+(id)_fileExtension;
+(id)_fileType;
+(id)_renderURLForAssetFilename:(id)arg0 error:(*id)arg1 ;
+(id)_trimOnlyCompositionControllerFor:(id)arg0 keepOrientationAdjustment:(BOOL)arg1 ;
+(void)_contentEditingInputFor:(id)arg0 completion:(id)arg1 ;
+(void)_duplicateAsset:(id)arg0 withNewRenderURL:(id)arg1 asShotCompositionController:(id)arg2 completion:(id)arg3 ;
+(void)_renderComposition:(id)arg0 toURL:(id)arg1 completion:(id)arg2 ;
+(void)burnInTrimToNewAsset:(id)arg0 compositionController:(id)arg1 asShotCompositionController:(id)arg2 cinematographyScript:(id)arg3 keepOrientationAdjustmentForRender:(BOOL)arg4 queue:(id)arg5 completion:(id)arg6 ;


@end


#endif