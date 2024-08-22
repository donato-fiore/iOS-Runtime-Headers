// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMLIMAGEMATTINGMETADATATECHNIQUE_H
#define ARMLIMAGEMATTINGMETADATATECHNIQUE_H

@protocol OS_dispatch_queue;


#import "ARImageBasedTechnique.h"
#import "ARImageScalingTechnique.h"

@interface ARMLImageMattingMetadataTechnique : ARImageBasedTechnique {
    BOOL _enableDoubleMLResolutionForIPad;
    ARImageScalingTechnique *_mattingImageScalingTechnique;
    *__CVPixelBufferPool _bgraMattingPixelBufferPool;
    *vImageCVImageFormat _cvImageFormatRef;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _deterministic;
}




-(CGFloat)requiredTimeInterval;
-(id)_generateMattingMetadata:(id)arg0 ;
-(id)init;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
-(void)dealloc;
-(void)prepare:(BOOL)arg0 ;


@end


#endif