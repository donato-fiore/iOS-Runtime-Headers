// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REGWARPPP_H
#define REGWARPPP_H

@class NSString;
@protocol CMIRegWarp, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FigMetalAllocator.h"

@interface RegWarpPP : NSObject <CMIRegWarp>

 {
    *rwppRegistrationEngineS _regEng;
    BOOL _resourcesAllocated;
    BOOL _usesExternalMemory;
    NSObject<OS_dispatch_group> *_mtGroup;
}


@property (retain, nonatomic) FigMetalAllocator *allocator; // ivar: _allocator
@property (nonatomic) BOOL applyGDC; // ivar: _applyGDC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _mtQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(int)CheckParameters:(struct ? *)arg0 imageWidth:(unsigned int)arg1 imageHeight:(unsigned int)arg2 imageFormat:(unsigned int)arg3 ;
+(int)convertFromImageSizeToUnity:(struct ? *)arg0 inMatrix:(struct ? *)arg1 imgWidth:(NSUInteger)arg2 imgHeight:(NSUInteger)arg3 ;
+(int)convertFromUnityToImageSize:(struct ? *)arg0 inMatrix:(struct ? *)arg1 imgWidth:(NSUInteger)arg2 imgHeight:(NSUInteger)arg3 ;
+(unsigned int)computeExternalMemoryBlockSize:(struct ? *)arg0 imageWidth:(unsigned int)arg1 imageHeight:(unsigned int)arg2 imageFormat:(unsigned int)arg3 ;
+(unsigned int)getMaxNumCorners;
+(void)getDefaults:(struct ? *)arg0 ;
-(id)initWithConfig:(struct ? *)arg0 ;
-(int)allocateResources:(unsigned int)arg0 imageHeight:(unsigned int)arg1 imageFormat:(unsigned int)arg2 externalMemory:(*void)arg3 externalMemorySize:(unsigned int)arg4 ;
-(int)calculateHistEqLUT:(struct ? *)arg0 fromHistogram:(struct ? *)arg1 ;
-(int)calculateTotalCornerStrength:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect *)arg1 mapping:(struct ? *)arg2 outTotalCornerStrength:(*float)arg3 ;
-(int)getNonReferenceKeypoints:(struct ? *)arg0 ;
-(int)getNormalizedPoints:(struct ? *)arg0 numPairs:(*unsigned int)arg1 ;
-(int)getReferenceKeypoints:(struct ? *)arg0 ;
-(int)processNonReference:(struct __CVBuffer *)arg0 gdcParams:(struct ? *)arg1 outputTransform:(struct ? *)arg2 ;
-(int)processNonReference:(struct __CVBuffer *)arg0 gdcParams:(struct ? *)arg1 seedTransform:(struct ? *)arg2 outputTransform:(struct ? *)arg3 mapping:(struct ? *)arg4 ;
-(int)processNonReference:(struct __CVBuffer *)arg0 outputTransform:(struct ? *)arg1 ;
-(int)processNonReference:(struct __CVBuffer *)arg0 seedTransform:(struct ? *)arg1 outputTransform:(struct ? *)arg2 mapping:(struct ? *)arg3 ;
-(int)processParameters:(struct CGRect *)arg0 inputImage:(struct __CVBuffer *)arg1 ;
-(int)processReference:(struct __CVBuffer *)arg0 gdcParams:(struct ? *)arg1 regionOfInterest:(struct CGRect *)arg2 numKeypoints:(*unsigned int)arg3 ;
-(int)processReference:(struct __CVBuffer *)arg0 gdcParams:(struct ? *)arg1 regionOfInterest:(struct CGRect *)arg2 numKeypoints:(*unsigned int)arg3 mapping:(struct ? *)arg4 ;
-(int)processReference:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect *)arg1 numKeypoints:(*unsigned int)arg2 ;
-(int)processReference:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect *)arg1 numKeypoints:(*unsigned int)arg2 mapping:(struct ? *)arg3 ;
-(void)constructPyramid:(struct __CVBuffer *)arg0 selector:(unsigned int)arg1 mapping:(struct ? *)arg2 level0Only:(BOOL)arg3 ;
-(void)dealloc;
-(void)releaseResources;


@end


#endif