// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYSCATTER_H
#define MPSNDARRAYSCATTER_H



#import "MPSNDArrayMultiaryKernel.h"
#import "MPSNDArrayIdentity.h"

@interface MPSNDArrayScatter : MPSNDArrayMultiaryKernel {
    MPSNDArrayIdentity *_identity;
}


@property (nonatomic) NSUInteger batchDimensions; // ivar: _batchDimensions
@property (readonly, nonatomic) int operation; // ivar: _operation


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 operation:(int)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 destinationArray:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif