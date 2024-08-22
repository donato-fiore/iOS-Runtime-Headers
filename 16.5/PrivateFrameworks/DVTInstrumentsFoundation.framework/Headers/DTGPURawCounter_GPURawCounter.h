// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTGPURAWCOUNTER_GPURAWCOUNTER_H
#define DTGPURAWCOUNTER_GPURAWCOUNTER_H

@class GPURawCounterSelect;


#import "DTGPURawCounter.h"

@interface DTGPURawCounter_GPURawCounter : DTGPURawCounter

@property (nonatomic) NSUInteger counterIdx; // ivar: _counterIdx
@property (retain, nonatomic) GPURawCounterSelect *rawCounterSelect; // ivar: _rawCounterSelect
@property (nonatomic) NSUInteger sourceIdx; // ivar: _sourceIdx
@property (nonatomic) NSUInteger valueType; // ivar: _valueType
@property (nonatomic) unsigned int width; // ivar: _width


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 width:(unsigned int)arg1 ;


@end


#endif