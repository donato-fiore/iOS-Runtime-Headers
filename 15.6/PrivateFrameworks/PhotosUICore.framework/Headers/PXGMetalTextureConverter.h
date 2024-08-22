// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGMETALTEXTURECONVERTER_H
#define PXGMETALTEXTURECONVERTER_H

@class NSMutableSet, NSString, CIContext;
@protocol PXGTextureConverter, PXGMetalTextureConverterDelegate, MTLDeviceSPI, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGColorProgramLibrary.h"
#import "PXGMetalTextureCache.h"
#import "PXGImageTexture.h"

@interface PXGMetalTextureConverter : NSObject <PXGTextureConverter>

 {
    NSInteger _screenPixelCount;
    NSMutableSet *_failedPixelFormats;
}


@property (readonly, nonatomic) PXGColorProgramLibrary *colorProgramLibrary; // ivar: _colorProgramLibrary
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGMetalTextureConverterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *CGColorSpace destinationColorSpace; // ivar: _destinationColorSpace
@property (readonly, nonatomic) NSUInteger destinationColorSpaceName; // ivar: _destinationColorSpaceName
@property (retain, nonatomic) NSObject<MTLDeviceSPI> *device; // ivar: _device
@property (readonly, nonatomic) BOOL hasExtendedColorTarget; // ivar: _hasExtendedColorTarget
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) int presentationType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) CIContext *renderContext; // ivar: _renderContext
@property (readonly, nonatomic) PXGMetalTextureCache *renderTextureCache; // ivar: _renderTextureCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedContentTypes;
@property (readonly, nonatomic) PXGImageTexture *transparentTexture; // ivar: _transparentTexture
@property (readonly, nonatomic) *__CVMetalTextureCache videoTextureCache; // ivar: _videoTextureCache


-(id)_applyAdjustment:(id)arg0 toMetalTexture:(id)arg1 options:(struct ? )arg2 ;
-(id)_createTextureFromCIImage:(id)arg0 source:(id)arg1 options:(struct ? )arg2 ;
-(id)_createTransparentTexture;
-(id)applyAdjustment:(id)arg0 toTexture:(id)arg1 options:(struct ? )arg2 ;
-(id)createAtlasForTextureAtlasManager:(id)arg0 ;
-(id)createPayloadTextureFromPayload:(id)arg0 ;
-(id)createTextureAtlasManagerForImageDataSpec:(struct ? )arg0 ;
-(id)createTextureFromCGImage:(struct CGImage *)arg0 transform:(struct ? )arg1 options;
-(id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg0 transform:(struct ? )arg1 options:(*id)arg2 error;
-(id)init;
-(id)initWithDevice:(id)arg0 destinationColorspaceName:(NSUInteger)arg1 layoutQueue:(id)arg2 ;
-(void)dealloc;


@end


#endif