// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMMANAGER_H
#define TDREAMMANAGER_H

@class EAGLContext, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "TDreamFramebufferManager.h"

@interface TDreamManager : NSObject {
    EAGLContext *glContext;
    TDreamFramebufferManager *framebufferManager;
    NSMutableDictionary *_contextProgramMap;
    int oldFilterMode;
    int filterMode;
    float BRIGHTNESSPARAM;
    float LOOSEPARAM;
    float SMOOTHPARAM;
    float AUX1INPUT;
    float AUX2INPUT;
    float AUX3INPUT;
    int QUANTIZE_LEVELS;
    float inputAspectRatio;
    IPImage outputImage;
    IPImage inputImage;
    IPImage maskImage;
    CGSize inputTextureSize;
    CGSize smallUseSize;
    CGSize smallUseSizeNoSmooth;
    CGSize largeUseSize;
    float vigneteR;
    float vigneteG;
    float vigneteB;
    float vigneteGaux;
    float vigneteBaux;
    float false1R;
    float false1G;
    float false1B;
    float false2R;
    float false2G;
    float false2B;
    NSArray *lookupsEE;
    NSArray *lookupsBN;
    NSArray *lookups;
    float coloresVignetteLookUpsBN;
    float coloresVignetteLookUpsNORMALES;
    float coloresVignetteLookUpsEspeciales;
    float coloresDobles;
    float coloresVignette;
    BOOL lookUpTextureNeedUpdate;
    int modeLookUps;
    int lookUpIndex;
}




-(BOOL)checkIPImage:(struct IPImage *)arg0 ;
-(BOOL)checkMaskIPImage:(struct IPImage *)arg0 ;
-(BOOL)updateParameters:(struct imageProcessingParams )arg0 ;
-(NSInteger)processTextureOnTexture:(struct IPImage *)arg0 andOutput:(struct IPImage *)arg1 andParams:(struct imageProcessingParams )arg2 ;
-(NSInteger)processTextureOnTexture:(struct IPImage *)arg0 andOutput:(struct IPImage *)arg1 andParams:(struct imageProcessingParams )arg2 withMask:(struct IPImage *)arg3 ;
-(id)glContext;
-(id)init;
-(id)programsForCurrentContext;
-(int)largeBufferCount;
-(int)smallBufferCount;
-(unsigned int)bufferFromCacheNumber:(int)arg0 ;
-(unsigned int)getOutputBufferName;
-(unsigned int)textureFromCacheNumber:(int)arg0 ;
-(void)addImageBufferToPool:(int)arg0 ipImage:(struct IPImage )arg1 ;
-(void)allocatePrograms:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllFilters;
-(void)fillConstants;
-(void)newLookUpFilterMode;
-(void)renderPipeline;
-(void)setBlackFillBasedOnSlider;
-(void)setUniformsAndParameters;


@end


#endif