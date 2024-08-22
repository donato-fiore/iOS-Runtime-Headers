// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNPAD_H
#define MPSNNPAD_H

@protocol MTLBuffer;


#import "MPSCNNKernel.h"

@interface MPSNNPad : MPSCNNKernel {
    id<MTLBuffer> *_aBuf;
    NSUInteger _aBufFP32Len;
}


@property (nonatomic) float fillValue; // ivar: _fillValue
@property (nonatomic) MPSImageCoordinate paddingSizeAfter; // ivar: _paddingSizeAfter
@property (nonatomic) MPSImageCoordinate paddingSizeBefore; // ivar: _paddingSizeBefore


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 paddingSizeBefore:(struct MPSImageCoordinate )arg1 paddingSizeAfter:(struct MPSImageCoordinate )arg2 ;
-(id)initWithDevice:(id)arg0 paddingSizeBefore:(struct MPSImageCoordinate )arg1 paddingSizeAfter:(struct MPSImageCoordinate )arg2 fillValueArray:(id)arg3 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif