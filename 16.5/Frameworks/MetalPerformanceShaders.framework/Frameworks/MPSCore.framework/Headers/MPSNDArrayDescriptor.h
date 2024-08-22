// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYDESCRIPTOR_H
#define MPSNDARRAYDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "MPSNDArrayDescriptor.h"

@interface MPSNDArrayDescriptor : NSObject {
    ? _dimensionLengths;
    ? _sliceOffsets;
    ? _sliceLengths;
    ? _dimensionOrder;
    MPSNDArrayDescriptor *_child;
    MPSNDArrayDescriptor *_parent;
    int _transitionOp;
}


@property (nonatomic) unsigned int dataType; // ivar: _dataType
@property (nonatomic) NSUInteger numberOfDimensions; // ivar: _numberOfDimensions
@property (nonatomic) BOOL preferPackedRows; // ivar: _preferPackedRows
@property (nonatomic) NSUInteger rowBytes; // ivar: _rowBytes


+(id)descriptorWithDataType:(unsigned int)arg0 dimensionCount:(NSUInteger)arg1 dimensionSizes:(*NSUInteger)arg2 ;
+(id)descriptorWithDataType:(unsigned int)arg0 dimensionSizes:(NSUInteger)arg1 ;
+(id)descriptorWithDataType:(unsigned int)arg0 shape:(id)arg1 ;
-(NSUInteger)lengthOfDimension:(NSUInteger)arg0 ;
-(id)dimensionOrder;
-(id)getShape;
-(id)initWithDataType:(unsigned int)arg0 dimensions:(NSUInteger)arg1 sizes;
-(struct MPSDimensionSlice )sliceRangeForDimension:(NSUInteger)arg0 ;
-(struct unique_ptr<const std::vector<long>, std::default_delete<const std::vector<long>>> )getShapeVector;
-(void)dealloc;
-(void)permuteWithDimensionOrder:(*NSUInteger)arg0 ;
-(void)reshapeWithDimensionCount:(NSUInteger)arg0 dimensionSizes:(*NSUInteger)arg1 ;
-(void)reshapeWithShape:(id)arg0 ;
-(void)setLengthOfDimension:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)sliceDimension:(NSUInteger)arg0 withSubrange:(struct MPSDimensionSlice )arg1 ;
-(void)transposeDimension:(NSUInteger)arg0 withDimension:(NSUInteger)arg1 ;


@end


#endif