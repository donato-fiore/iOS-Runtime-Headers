// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYBANDPART_H
#define MPSNDARRAYBANDPART_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayBandPart : MPSNDArrayUnaryKernel

@property (nonatomic) NSInteger numLower; // ivar: _numLower
@property (nonatomic) NSInteger numUpper; // ivar: _numUpper


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif