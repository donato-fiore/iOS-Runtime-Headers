// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXLAYERSTACKDEBUGIMAGECOLLECTOR_H
#define _PIPARALLAXLAYERSTACKDEBUGIMAGECOLLECTOR_H

@class CIImage, NSArray;
@protocol NUImageBuffer;

#import <Foundation/Foundation.h>


@interface _PIParallaxLayerStackDebugImageCollector : NSObject

@property (retain, nonatomic) NSObject<NUImageBuffer> *debugColorAnalysisBuffer; // ivar: _debugColorAnalysisBuffer
@property (retain, nonatomic) CIImage *debugColorAnalysisImage; // ivar: _debugColorAnalysisImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugConfidenceMapBuffer; // ivar: _debugConfidenceMapBuffer
@property (retain, nonatomic) CIImage *debugConfidenceMapImage; // ivar: _debugConfidenceMapImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugInfillBuffer; // ivar: _debugInfillBuffer
@property (retain, nonatomic) CIImage *debugInfillImage; // ivar: _debugInfillImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugInputBuffer; // ivar: _debugInputBuffer
@property (retain, nonatomic) CIImage *debugInputImage; // ivar: _debugInputImage
@property (retain, nonatomic) NSArray *debugIntermediateLayoutBuffers; // ivar: _debugIntermediateLayoutBuffers
@property (retain, nonatomic) NSArray *debugIntermediateLayoutImages; // ivar: _debugIntermediateLayoutImages
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugLayoutBuffer; // ivar: _debugLayoutBuffer
@property (retain, nonatomic) CIImage *debugLayoutImage; // ivar: _debugLayoutImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugLocalConfidenceBuffer; // ivar: _debugLocalConfidenceBuffer
@property (retain, nonatomic) CIImage *debugLocalConfidenceImage; // ivar: _debugLocalConfidenceImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugMatteBuffer; // ivar: _debugMatteBuffer
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugMatteCropBuffer; // ivar: _debugMatteCropBuffer
@property (retain, nonatomic) CIImage *debugMatteCropImage; // ivar: _debugMatteCropImage
@property (retain, nonatomic) CIImage *debugMatteImage; // ivar: _debugMatteImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *debugPreviewBuffer; // ivar: _debugPreviewBuffer
@property (retain, nonatomic) CIImage *debugPreviewImage; // ivar: _debugPreviewImage
@property (retain, nonatomic) NSObject<NUImageBuffer> *flattenedBackgroundForDebugPreview; // ivar: _flattenedBackgroundForDebugPreview
@property (retain, nonatomic) NSObject<NUImageBuffer> *flattenedForegroundForDebugPreview; // ivar: _flattenedForegroundForDebugPreview


-(id)resultLayersWithRenderer:(id)arg0 ;
-(void)prepareImagesForItem:(id)arg0 renderer:(id)arg1 layout:(id)arg2 style:(id)arg3 inputImage:(id)arg4 matteImage:(id)arg5 infillImage:(id)arg6 foregroundImage:(id)arg7 backgroundImage:(id)arg8 ;
-(void)renderImagesWithRenderer:(id)arg0 ;


@end


#endif