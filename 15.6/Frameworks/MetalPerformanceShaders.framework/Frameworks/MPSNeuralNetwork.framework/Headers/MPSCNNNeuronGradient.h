// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNNEURONGRADIENT_H
#define MPSCNNNEURONGRADIENT_H

@class NSData;
@protocol MTLBuffer;


#import "MPSCNNGradientKernel.h"

@interface MPSCNNNeuronGradient : MPSCNNGradientKernel {
    BOOL _noCopy;
    NSUInteger _count;
    id<MTLBuffer> *_aBuf;
}


@property (readonly, nonatomic) float a; // ivar: _a
@property (readonly, nonatomic) float b; // ivar: _b
@property (readonly, nonatomic) float c; // ivar: _c
@property (readonly, retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) int neuronType; // ivar: _neuronType


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 ;
-(id)privateInitWithDevice:(id)arg0 a:(*float)arg1 count:(NSUInteger)arg2 type:(int)arg3 ;
-(id)privateInitWithDevice:(id)arg0 a:(float)arg1 b:(float)arg2 c:(float)arg3 type:(int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeWithNeuronType:(int)arg0 neuronParameterA:(*float)arg1 count:(NSUInteger)arg2 ;
-(void)initializeWithNeuronType:(int)arg0 neuronParameterA:(float)arg1 neuronParameterB:(float)arg2 neuronParameterC:(float)arg3 ;


@end


#endif