// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGECONVERSION_H
#define MPSIMAGECONVERSION_H

@class MPSImageTransformSequence;


#import "MPSUnaryImageKernel.h"

@interface MPSImageConversion : MPSUnaryImageKernel {
    MPSImageTransformSequence *transform;
    ? srcDecode;
    ? destDecode;
    ConversionInfo_s convertInfo;
    ConversionInfoPtrs_s convertInfoPtrs;
    *unk matFun;
    *unk trcFun;
    *unk lutFun;
    *unk optionsFun;
    *unk inputRangeFun;
    *unk outputRangeFun;
    *unk propertiesFun;
}


@property (readonly, nonatomic) NSUInteger destinationAlpha; // ivar: destinationAlpha
@property (readonly, nonatomic) NSUInteger sourceAlpha; // ivar: sourceAlpha


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 srcAlpha:(NSUInteger)arg1 destAlpha:(NSUInteger)arg2 backgroundColor:(*CGFloat)arg3 conversionInfo:(struct CGColorConversionInfo *)arg4 ;
-(id)initWithDevice:(id)arg0 transform:(id)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 sourceDecode:(*float)arg2 destinationTexture:(id)arg3 destinationDecode:(*float)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif