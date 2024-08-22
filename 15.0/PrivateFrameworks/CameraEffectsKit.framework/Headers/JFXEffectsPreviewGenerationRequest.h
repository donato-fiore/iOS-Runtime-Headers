// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTSPREVIEWGENERATIONREQUEST_H
#define JFXEFFECTSPREVIEWGENERATIONREQUEST_H

@class NSDictionary, NSArray, PVImageBuffer;

#import <Foundation/Foundation.h>

#import "JFXEffect.h"

@interface JFXEffectsPreviewGenerationRequest : NSObject

@property (nonatomic) PVTransformAnimationInfo animationTransformInfo; // ivar: _animationTransformInfo
@property (nonatomic) unsigned int childCode; // ivar: _childCode
@property (copy, nonatomic) NSDictionary *customRenderingProperties; // ivar: _customRenderingProperties
@property (readonly, nonatomic) NSArray *effectStack; // ivar: _effectStack
@property (readonly, nonatomic) CGSize frameSize; // ivar: _frameSize
@property (readonly, nonatomic) JFXEffect *generatorEffect; // ivar: _generatorEffect
@property (nonatomic) BOOL highQuality; // ivar: _highQuality
@property (readonly, nonatomic) PVImageBuffer *image; // ivar: _image
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (nonatomic) unsigned int parentCode; // ivar: _parentCode
@property (retain, nonatomic) NSArray *pickerPreviewEffectList; // ivar: _pickerPreviewEffectList
@property (nonatomic) int priority; // ivar: _priority
@property (readonly, nonatomic) ? renderTime; // ivar: _renderTime
@property (nonatomic) BOOL scaleAnimationTransformInfoToOutputSize; // ivar: _scaleAnimationTransformInfoToOutputSize
@property (nonatomic) CGAffineTransform userSourceTransform; // ivar: _userSourceTransform


+(struct CGRect )JT_centerRect:(struct CGRect )arg0 aspectRatio:(CGFloat)arg1 ;
+(struct PVTransformAnimationInfo )centerAnimationInfoForOutputSize:(struct CGSize )arg0 imageRect:(struct CGRect )arg1 ;
-(id)generatorJobWithGraphBuilder:(id)arg0 ;
-(id)initWithInput:(id)arg0 effectStack:(id)arg1 outputSize:(struct CGSize )arg2 frameSize:(struct CGSize )arg3 renderTime:(struct ? )arg4 ;
-(id)initWithInput:(id)arg0 effectStack:(id)arg1 outputSize:(struct CGSize )arg2 renderTime:(struct ? )arg3 ;
-(id)initWithInputGenerator:(id)arg0 effectStack:(id)arg1 outputSize:(struct CGSize )arg2 frameSize:(struct CGSize )arg3 renderTime:(struct ? )arg4 ;
-(id)initWithInputGenerator:(id)arg0 effectStack:(id)arg1 outputSize:(struct CGSize )arg2 renderTime:(struct ? )arg3 ;
-(id)placeholderGeneratorBackground;
-(id)sourceIGNodeUsingGraphBuilder:(id)arg0 includeAnimoji:(BOOL)arg1 ;
-(struct CGAffineTransform )JFX_scaleToFitSize:(struct CGSize )arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(struct CGAffineTransform )_scaleAndTransformToFitSize:(struct CGSize )arg0 ;
-(struct CGAffineTransform )sourceTransform;
-(void)centerAnimationInfo;
-(void)setTransformAnimationInfo:(struct PVTransformAnimationInfo )arg0 scaleToOutput:(BOOL)arg1 ;


@end


#endif