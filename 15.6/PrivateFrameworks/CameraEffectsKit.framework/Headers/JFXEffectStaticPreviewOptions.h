// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXEFFECTSTATICPREVIEWOPTIONS_H
#define JFXEFFECTSTATICPREVIEWOPTIONS_H



#import "JFXEffectPreviewOptions.h"
#import "JTImage.h"

@interface JFXEffectStaticPreviewOptions : JFXEffectPreviewOptions

@property (nonatomic) BOOL dontCache; // ivar: _dontCache
@property (nonatomic) BOOL dontCacheToDisk; // ivar: _dontCacheToDisk
@property (nonatomic) BOOL dontUseThumbnailAssetWhenAvailable; // ivar: _dontUseThumbnailAssetWhenAvailable
@property (retain, nonatomic) JTImage *renderBackgroundImage; // ivar: _renderBackgroundImage
@property (copy, nonatomic) id *renderPropertiesConfigurationBlock; // ivar: _renderPropertiesConfigurationBlock
@property (nonatomic) ? renderRange; // ivar: _renderRange
@property (nonatomic) ? renderTime; // ivar: _renderTime
@property (nonatomic) CGRect renderedImageCropRect; // ivar: _renderedImageCropRect


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initStaticPreviewOptions;


@end


#endif