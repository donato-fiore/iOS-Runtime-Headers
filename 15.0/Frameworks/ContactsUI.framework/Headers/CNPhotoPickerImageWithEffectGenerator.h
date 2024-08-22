// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERIMAGEWITHEFFECTGENERATOR_H
#define CNPHOTOPICKERIMAGEWITHEFFECTGENERATOR_H


#import <Foundation/Foundation.h>


@interface CNPhotoPickerImageWithEffectGenerator : NSObject



+(id)coreImageFilterDisplayNames;
+(id)coreImageFilterNames;
+(id)displayNameForFilterNamed:(id)arg0 ;
+(id)imageByApplyingEffect:(id)arg0 withContext:(id)arg1 toImage:(id)arg2 withSize:(struct CGSize )arg3 ;
+(id)imageByApplyingEffect:(id)arg0 withContext:(id)arg1 toImageData:(id)arg2 ;
+(void)imagesByApplyingEffectsToImageData:(id)arg0 withScaleFactor:(CGFloat)arg1 originalImageScale:(CGFloat)arg2 cropRect:(struct CGRect )arg3 completion:(id)arg4 ;


@end


#endif