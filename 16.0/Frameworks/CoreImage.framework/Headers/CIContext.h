// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICONTEXT_H
#define CICONTEXT_H


#import <Foundation/Foundation.h>


@interface CIContext : NSObject {
    *void _priv;
}


@property (readonly) *void _internalContext;
@property (readonly) NSUInteger identifier;
@property (readonly, nonatomic) *CGColorSpace workingColorSpace;
@property (readonly, nonatomic) int workingFormat;


+(*void)internalCLContextWithOptions:(id)arg0 ;
+(*void)internalCLContextWithOptions:(id)arg0 glContext:(*void)arg1 ;
+(*void)internalContextWithEAGLContext:(id)arg0 options:(id)arg1 ;
+(*void)internalContextWithMTLCommandQueue:(id)arg0 options:(id)arg1 ;
+(*void)internalContextWithMTLDevice:(id)arg0 options:(id)arg1 ;
+(*void)internalGLContextWithOptions:(id)arg0 ;
+(BOOL)loadArchive:(id)arg0 ;
+(id)_singletonContext;
+(id)context;
+(id)contextWithCGContext:(struct CGContext *)arg0 options:(id)arg1 ;
+(id)contextWithEAGLContext:(id)arg0 ;
+(id)contextWithEAGLContext:(id)arg0 options:(id)arg1 ;
+(id)contextWithMTLCommandQueue:(id)arg0 ;
+(id)contextWithMTLCommandQueue:(id)arg0 options:(id)arg1 ;
+(id)contextWithMTLDevice:(id)arg0 ;
+(id)contextWithMTLDevice:(id)arg0 options:(id)arg1 ;
+(id)contextWithOptions:(id)arg0 ;
+(int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg0 toBitmap:(*void)arg1 rowBytes:(NSInteger)arg2 bounds:(struct CGRect )arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 ;
+(struct CGColorSpace *)defaultGrayColorSpace;
+(struct CGColorSpace *)defaultRGBColorSpace;
+(struct CGColorSpace *)defaultWorkingColorSpace;
+(void)clearArchives;
+(void)purgeArchive:(id)arg0 ;
-(BOOL)_isCGBackedContext;
-(BOOL)_isGLBackedContext;
-(BOOL)isMetalBased;
-(BOOL)isOpenCLBased;
-(BOOL)isOpenGLBased;
-(BOOL)loadArchive:(id)arg0 ;
-(BOOL)measureRequirementsOf:(id)arg0 query:(int)arg1 results:(struct CGRect *)arg3 ;
-(BOOL)prepareRender:(id)arg0 fromRect:(struct CGRect )arg1 toDestination:(id)arg2 atPoint:(struct CGPoint )arg3 error:(*id)arg4 ;
-(BOOL)testArchive:(id)arg0 ;
-(BOOL)writeHEIF10RepresentationOfImage:(id)arg0 toURL:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)writeHEIFRepresentationOfImage:(id)arg0 toURL:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(*id)arg5 ;
-(BOOL)writeJPEGRepresentationOfImage:(id)arg0 toURL:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)writePNGRepresentationOfImage:(id)arg0 toURL:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(*id)arg5 ;
-(BOOL)writeTIFFRepresentationOfImage:(id)arg0 toURL:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)maximumInputImageSize;
-(NSUInteger)maximumOutputImageSize;
-(id)HEIF10RepresentationOfImage:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)HEIFRepresentationOfImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 ;
-(id)JPEGRepresentationOfImage:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 options:(id)arg2 ;
-(id)PNGRepresentationOfImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 ;
-(id)TIFFRepresentationOfImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 ;
-(id)_HEIFRepresentationOfImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)_JPEGRepresentationOfImage:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_PNGRepresentationOfImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)_TIFFRepresentationOfImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)_createClone;
-(id)_dataRepresentationOfImage:(id)arg0 UTIType:(id)arg1 format:(int)arg2 premultiplied:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 addAuxData:(BOOL)arg6 keysToMerge:(id)arg7 error:(*id)arg8 ;
-(id)_initWithInternalRepresentation:(*void)arg0 ;
-(id)_pdfDataRepresentation;
-(id)_startTaskToRender:(id)arg0 toDestination:(id)arg1 forPrepareRender:(BOOL)arg2 forClear:(BOOL)arg3 error:(*id)arg4 ;
-(id)clientCommandQueue;
-(id)createColorCubeDataForFilters:(id)arg0 dimension:(int)arg1 ;
-(id)createColorCubeDataForFilters:(id)arg0 dimension:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 ;
-(id)depthBlurEffectFilterForImage:(id)arg0 disparityImage:(id)arg1 portraitEffectsMatte:(id)arg2 hairSemanticSegmentation:(id)arg3 glassesMatte:(id)arg4 gainMap:(id)arg5 orientation:(unsigned int)arg6 options:(id)arg7 ;
-(id)depthBlurEffectFilterForImage:(id)arg0 disparityImage:(id)arg1 portraitEffectsMatte:(id)arg2 hairSemanticSegmentation:(id)arg3 orientation:(unsigned int)arg4 options:(id)arg5 ;
-(id)depthBlurEffectFilterForImage:(id)arg0 disparityImage:(id)arg1 portraitEffectsMatte:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4 ;
-(id)depthBlurEffectFilterForImageData:(id)arg0 options:(id)arg1 ;
-(id)depthBlurEffectFilterForImageURL:(id)arg0 options:(id)arg1 ;
-(id)description;
-(id)device;
-(id)flatten:(id)arg0 fromRect:(struct CGRect )arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(id)init;
-(id)initWithCGContext:(struct CGContext *)arg0 options:(id)arg1 ;
-(id)initWithEAGLContext:(id)arg0 ;
-(id)initWithEAGLContext:(id)arg0 options:(id)arg1 ;
-(id)initWithMTLCommandQueue:(id)arg0 options:(id)arg1 ;
-(id)initWithMTLDevice:(id)arg0 options:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)internalCommandQueue;
-(id)objectForKey:(id)arg0 ;
-(id)startTaskToClear:(id)arg0 error:(*id)arg1 ;
-(id)startTaskToRender:(id)arg0 fromRect:(struct CGRect )arg1 toDestination:(id)arg2 atPoint:(struct CGPoint )arg3 error:(*id)arg4 ;
-(id)startTaskToRender:(id)arg0 toDestination:(id)arg1 error:(*id)arg2 ;
-(struct CGAffineTransform )CTM;
-(struct CGColorSpace *)_outputColorSpace;
-(struct CGImage *)_createCGImage:(id)arg0 fromRect:(struct CGRect )arg1 format:(int)arg2 premultiplied:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(struct Trilean )arg5 renderCallback:(id)arg6 ;
-(struct CGImage *)createCGImage:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(struct CGImage *)createCGImage:(id)arg0 fromRect:(struct CGRect )arg1 format:(int)arg2 ;
-(struct CGImage *)createCGImage:(id)arg0 fromRect:(struct CGRect )arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(struct CGImage *)createCGImage:(id)arg0 fromRect:(struct CGRect )arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 deferred:(BOOL)arg4 ;
-(struct CGImage *)createCGImage:(id)arg0 fromRect:(struct CGRect )arg1 format:(int)arg2 premultiplied:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(BOOL)arg5 renderCallback:(id)arg6 ;
-(struct CGLayer *)createCGLayerWithSize:(struct CGSize )arg0 info:(struct __CFDictionary *)arg1 ;
-(struct CGRect )bounds;
-(struct CGSize )inputImageMaximumSize;
-(struct CGSize )outputImageMaximumSize;
-(struct __IOSurface *)createIOSurface:(id)arg0 ;
-(struct __IOSurface *)createIOSurface:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(void)_gpuContextCheck;
-(void)_insertEventMarker:(char *)arg0 ;
-(void)_performFaceDetection:(id)arg0 image:(id)arg1 orientation:(int)arg2 filter:(id)arg3 ;
-(void)abort;
-(void)clearCaches;
-(void)dealloc;
-(void)drawImage:(id)arg0 atPoint:(struct CGPoint )arg1 fromRect:(struct CGRect )arg2 ;
-(void)drawImage:(id)arg0 inRect:(struct CGRect )arg1 fromRect:(struct CGRect )arg2 ;
-(void)invalidate;
-(void)lock;
-(void)reclaimResources;
-(void)render:(id)arg0 ;
-(void)render:(id)arg0 toBitmap:(*void)arg1 rowBytes:(NSInteger)arg2 bounds:(struct CGRect )arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 ;
-(void)render:(id)arg0 toCVPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)render:(id)arg0 toCVPixelBuffer:(struct __CVBuffer *)arg1 bounds:(struct CGRect )arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(void)render:(id)arg0 toIOSurface:(struct __IOSurface *)arg1 bounds:(struct CGRect )arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(void)render:(id)arg0 toMTLTexture:(id)arg1 commandBuffer:(id)arg2 bounds:(struct CGRect )arg3 colorSpace:(struct CGColorSpace *)arg4 ;
-(void)render:(id)arg0 toTexture:(unsigned int)arg1 bounds:(struct CGRect )arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(void)render:(id)arg0 toTexture:(unsigned int)arg1 target:(unsigned int)arg2 bounds:(struct CGRect )arg3 colorSpace:(struct CGColorSpace *)arg4 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCTM:(struct CGAffineTransform )arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)unlock;


@end


#endif