// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


@property (nonatomic) BOOL shouldOperateOnHighResolutionImages; // ivar: _shouldOperateOnHighResolutionImages


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(id)_generateMattingMetadata:(id)arg0 ;
-(id)init;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
-(void)_processDataInBackgound:(id)arg0 ;
-(void)dealloc;
-(void)prepare:(BOOL)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif