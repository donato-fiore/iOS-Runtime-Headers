// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYREDUCTION_H
#define MPSNDARRAYREDUCTION_H

@class NSArray;


#import "MPSNDArrayUnaryKernel.h"
#import "MPSNDArrayIdentity.h"

@interface MPSNDArrayReduction : MPSNDArrayUnaryKernel {
    MPSNDArrayIdentity *_identity;
}


@property (copy, nonatomic) NSArray *axes; // ivar: _axes
@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (readonly, nonatomic) int operation; // ivar: _operation


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 axis:(NSUInteger)arg1 operation:(int)arg2 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif