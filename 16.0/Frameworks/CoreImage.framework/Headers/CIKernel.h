// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIKERNEL_H
#define CIKERNEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CIKernel : NSObject {
    *void _priv;
}


@property (nonatomic) BOOL canReduceOutputChannels;
@property (readonly) NSString *name;
@property (readonly, nonatomic) int outputFormat;
@property (nonatomic) CGSize outputGroupSize;
@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL preservesRange;


+(id)SDOFV2MetalKernelNamed:(id)arg0 ;
+(id)SDOFV3MetalKernelNamed:(id)arg0 ;
+(id)allocForType:(int)arg0 ;
+(id)cache;
+(id)cachedKernelWithString:(id)arg0 ;
+(id)colorMatrixBiasKernel;
+(id)kernelNamesFromMetalLibraryData:(id)arg0 ;
+(id)kernelWithFunctionName:(id)arg0 fromCIKernelLibraryData:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)kernelWithFunctionName:(id)arg0 fromMetalLibraryData:(id)arg1 constants:(id)arg2 error:(*id)arg3 ;
+(id)kernelWithFunctionName:(id)arg0 fromMetalLibraryData:(id)arg1 error:(*id)arg2 ;
+(id)kernelWithFunctionName:(id)arg0 fromMetalLibraryData:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)kernelWithFunctionName:(id)arg0 fromMetalLibraryData:(id)arg1 outputGroupSize:(struct CGSize )arg2 error:(*id)arg3 ;
+(id)kernelWithFunctionName:(id)arg0 fromMetalLibraryData:(id)arg1 outputPixelFormat:(int)arg2 error:(*id)arg3 ;
+(id)kernelWithString:(id)arg0 ;
+(id)kernelWithString:(id)arg0 fromMetalLibraryData:(id)arg1 ;
+(id)kernelsWithMetalString:(id)arg0 error:(*id)arg1 ;
+(id)kernelsWithString:(id)arg0 ;
+(id)kernelsWithString:(id)arg0 andMetalLibrary:(id)arg1 messageLog:(id)arg2 ;
+(id)kernelsWithString:(id)arg0 fromMetalLibraryData:(id)arg1 ;
+(id)kernelsWithString:(id)arg0 messageLog:(id)arg1 ;
+(void)clearCache;
-(*void)_internalRepresentation;
-(BOOL)_isValidOutputPixelFormat:(int)arg0 ;
-(SEL)ROISelector;
-(id)_initWithInternalRepresentation:(*void)arg0 ;
-(id)_initWithReflection:(struct CIKernelReflection )arg0 ;
-(id)_initWithReflection:(struct CIKernelReflection )arg0 constants:(id)arg1 constantTypes:(id)arg2 ;
-(id)_initWithString:(id)arg0 andMetalLibrary:(id)arg1 usingCruftCompatibility:(BOOL)arg2 ;
-(id)_initWithString:(id)arg0 usingCruftCompatibility:(BOOL)arg1 ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 arguments:(unk)arg2  ;
// -(id)applyWithExtent:(struct CGRect )arg0 roiCallback:(id)arg1 arguments:(unk)arg2 options:(id)arg3  ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)parameters;
-(int)_outputFormatUsingDictionary:(id)arg0 andKernel:(*void)arg1 ;
-(void)dealloc;
-(void)setROISelector:(SEL)arg0 ;


@end


#endif