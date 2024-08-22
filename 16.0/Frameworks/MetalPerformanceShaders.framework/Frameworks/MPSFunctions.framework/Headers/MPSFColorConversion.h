// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSFCOLORCONVERSION_H
#define MPSFCOLORCONVERSION_H



#import "MPSFunction.h"

@interface MPSFColorConversion : MPSFunction {
    ? _inputRange;
    ? _outputRange;
    *Stage _stageList;
}


@property (readonly, nonatomic) NSUInteger inputColorChannels; // ivar: _inputColorChannels
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSUInteger outputColorChannels; // ivar: _outputColorChannels


-(BOOL)addGrayToRGBStage;
-(BOOL)addMatrixStage:(struct CGColorConversionIteratorData )arg0 stage:(NSInteger)arg1 index:(NSInteger)arg2 ;
-(BOOL)addNxMStage:(struct CGColorConversionIteratorData )arg0 stage:(NSInteger)arg1 index:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)addTRCStage:(struct CGColorConversionIteratorData )arg0 stage:(NSInteger)arg1 count:(NSInteger)arg2 trcIndices:(*NSInteger)arg3 error:(*id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)descriptorFor1DTexture1;
-(id)descriptorFor3DTexture1;
-(id)descriptorFor3DTexture2;
-(id)functionPrototype;
-(id)initWithCoder:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)initWithDevice:(id)arg0 conversion:(struct CGColorConversionInfo *)arg1 functionName:(id)arg2 sourceRange:(struct ? *)arg3 options:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)initWithDevice:(id)arg0 startColorSpace:(struct CGColorSpace *)arg1 endColorSpace:(struct CGColorSpace *)arg2 functionName:(id)arg3 sourceRange:(struct ? *)arg4 options:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)newDAGUsingFunctionList:(id)arg0 ;
-(id)newSubroutineListWithError:(*id)arg0 ;
-(struct ? )effectiveRange:(struct ? )arg0 ;
-(struct NxMStage *)find3dTextureStageAtIndex:(NSUInteger)arg0 ;
-(struct TRCStage *)find1DTexture1Stage;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initialize1DTexture1:(id)arg0 ;
-(void)initialize3DTexture1:(id)arg0 ;
-(void)initialize3DTexture2:(id)arg0 ;
-(void)optimizeStages;


@end


#endif