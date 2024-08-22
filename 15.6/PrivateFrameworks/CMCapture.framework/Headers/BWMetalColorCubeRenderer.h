// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMETALCOLORCUBERENDERER_H
#define BWMETALCOLORCUBERENDERER_H

@class NSBundle, NSString;
@protocol BWFilterRenderer, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "BWColorLookupCache.h"

@interface BWMetalColorCubeRenderer : NSObject <BWFilterRenderer>

 {
    NSBundle *_bundle;
    FigColorCubeMetalFilter" _filters;
    NSData" _currentForegroundColorLookupTables;
    NSData" _currentBackgroundColorLookupTables;
    BWInterpolatedColorLookupTableEntry _interpolatedForegroundColorLookupTables;
    BWInterpolatedColorLookupTableEntry _interpolatedBackgroundColorLookupTables;
    BWColorLookupCache *_colorLookupCache;
    id<MTLCommandQueue> *_mtlCommandQueue;
}


@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) short type;


+(id)bundle;
+(void)initialize;
-(id)_interpolatedLookupTableForEntry:(struct BWInterpolatedColorLookupTableEntry *)arg0 inputLookupTable:(id)arg1 strength:(float)arg2 ;
-(id)initWithMetalCommandQueue:(id)arg0 mixInGammaDomain:(BOOL)arg1 ;
-(int)_loadAndConfigureFilterBundle;
-(int)prepareForRenderingWithParameters:(id)arg0 inputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)renderUsingParameters:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 originalPixelBuffer:(struct __CVBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 completionHandler:(id)arg5 ;


@end


#endif