// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGELAPLACIANPYRAMID_H
#define MPSIMAGELAPLACIANPYRAMID_H

@class NSDictionary;


#import "MPSImagePyramid.h"

@interface MPSImageLaplacianPyramid : MPSImagePyramid {
    AutotuningState _autotuningState;
    HighlevelState _state;
    DerivedState _derivedState;
}


@property (nonatomic, getter=getAutotuningEnabled, setter=setAutotuningEnabled:) BOOL autotuningEnabled;
@property (nonatomic, getter=getCopyConfigID, setter=setCopyConfigID:) NSUInteger copyConfigID;
@property (readonly, nonatomic, getter=getCopyConfigs) NSDictionary *copyConfigs;
@property (nonatomic, getter=getIsPyramidAdd, setter=setIsPyramidAdd:) BOOL isPyramidAdd;
@property (nonatomic, getter=getLaplacianBias, setter=setLaplacianBias:) float laplacianBias;
@property (nonatomic, getter=getLaplacianScale, setter=setLaplacianScale:) float laplacianScale;
@property (nonatomic, getter=getUpsampleConfigID, setter=setUpsampleConfigID:) NSUInteger upsampleConfigID;
@property (readonly, nonatomic, getter=getUpsampleConfigs) NSDictionary *upsampleConfigs;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)isReducedPrecisionAllowedForDstPixelFormat:(NSUInteger)arg0 srcPixelFormat:(NSUInteger)arg1 ;
-(BOOL)isValidDstPixelFormat:(NSUInteger)arg0 srcPixelFormat:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 weights:(*float)arg3 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)cleanUpAll;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setClipRect:(struct ? )arg0 ;
-(void)setOffset:(struct ? )arg0 ;
-(void)zeroInitAll;


@end


#endif