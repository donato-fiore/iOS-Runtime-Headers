// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYRANDOMSTATE_H
#define MPSNDARRAYRANDOMSTATE_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayRandomState : MPSNDArrayUnaryKernel

@property (nonatomic) NSUInteger counterStride; // ivar: _counterStride
@property (nonatomic) BOOL incrementKey; // ivar: _incrementKey
@property (nonatomic) NSUInteger skipElements; // ivar: _skipElements


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif