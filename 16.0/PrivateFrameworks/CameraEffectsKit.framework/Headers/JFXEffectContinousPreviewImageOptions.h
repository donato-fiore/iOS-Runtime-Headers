// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXEFFECTCONTINOUSPREVIEWIMAGEOPTIONS_H
#define JFXEFFECTCONTINOUSPREVIEWIMAGEOPTIONS_H



#import "JFXEffectContinousPreviewOptions.h"
#import "JTImage.h"

@interface JFXEffectContinousPreviewImageOptions : JFXEffectContinousPreviewOptions

@property (retain, nonatomic) JTImage *backgroundImage; // ivar: _backgroundImage
@property (readonly, nonatomic) NSUInteger preferredUpdatesPerSecond; // ivar: _preferredUpdatesPerSecond


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initImageOptionsWithFrameRate:(NSUInteger)arg0 ;


@end


#endif