// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTCONTINOUSPREVIEWOPTIONS_H
#define JFXEFFECTCONTINOUSPREVIEWOPTIONS_H

@class NSArray;


#import "JFXEffectPreviewOptions.h"

@interface JFXEffectContinousPreviewOptions : JFXEffectPreviewOptions

@property (nonatomic) NSUInteger backgroundType; // ivar: _backgroundType
@property (nonatomic) ? effectAnimationDuration; // ivar: _effectAnimationDuration
@property (retain, nonatomic) NSArray *effectsToApplyToBackground; // ivar: _effectsToApplyToBackground
@property (nonatomic) BOOL loopAnimation; // ivar: _loopAnimation
@property (nonatomic) unsigned int maxFramesRenderedAtATime; // ivar: _maxFramesRenderedAtATime
@property (copy, nonatomic) id *renderPropertiesConfigurationBlock; // ivar: _renderPropertiesConfigurationBlock


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initContinousPreviewOptions;


@end


#endif