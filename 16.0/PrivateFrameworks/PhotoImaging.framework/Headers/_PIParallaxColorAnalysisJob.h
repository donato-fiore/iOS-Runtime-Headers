// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXCOLORANALYSISJOB_H
#define _PIPARALLAXCOLORANALYSISJOB_H

@class NURenderJob, NUPurgeableStoragePool, NSMutableArray, NSArray, CIImage;


#import "PIParallaxColorAnalysisRequest.h"

@interface _PIParallaxColorAnalysisJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    NSMutableArray *_renderResources;
}


@property (nonatomic) NSInteger alphaCount; // ivar: _alphaCount
@property (readonly, nonatomic) PIParallaxColorAnalysisRequest *colorAnalysisRequest;
@property (copy, nonatomic) NSArray *dominantColors; // ivar: _dominantColors
@property (copy, nonatomic) NSArray *dominantGrays; // ivar: _dominantGrays
@property (copy, nonatomic) NSArray *dominantHues; // ivar: _dominantHues
@property (retain, nonatomic) CIImage *hueChromaImage; // ivar: _hueChromaImage
@property (nonatomic) ? imageRect; // ivar: _imageRect
@property (nonatomic) CGFloat medianLuminance; // ivar: _medianLuminance


-(BOOL)_computeAllHistograms:(*id)arg0 ;
-(BOOL)_waitForRenderResources:(*id)arg0 ;
-(BOOL)complete:(*id)arg0 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)_beginRenderNormalizedHueChromaImage:(id)arg0 targetGray:(CGFloat)arg1 grayRange:(CGFloat)arg2 chromaMax:(CGFloat)arg3 error:(*id)arg4 ;
-(id)_beginRenderNormalizedHueChromaImage:(id)arg0 targetHue:(CGFloat)arg1 hueRange:(CGFloat)arg2 chromaMin:(CGFloat)arg3 error:(*id)arg4 ;
-(id)_beginRenderingImage:(id)arg0 colorSpace:(id)arg1 format:(id)arg2 error:(*id)arg3 ;
-(id)initWithParallaxColorAnalysisRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(void)_purgeRenderResources;
-(void)cleanUp;


@end


#endif