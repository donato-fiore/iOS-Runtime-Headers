// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSINSTANCEACCELERATIONSTRUCTURE_H
#define MPSINSTANCEACCELERATIONSTRUCTURE_H

@class NSArray;
@protocol MTLBuffer;


#import "MPSAccelerationStructure.h"

@interface MPSInstanceAccelerationStructure : MPSAccelerationStructure {
    NSUInteger _transformType;
    *void _bvh;
}


@property (retain, nonatomic) NSArray *accelerationStructures; // ivar: _accelerationStructures
@property (retain, nonatomic) NSObject<MTLBuffer> *instanceBuffer; // ivar: _instanceBuffer
@property (nonatomic) NSUInteger instanceBufferOffset; // ivar: _instanceBufferOffset
@property (nonatomic) NSUInteger instanceCount; // ivar: _instanceCount
@property (retain, nonatomic) NSObject<MTLBuffer> *maskBuffer; // ivar: _maskBuffer
@property (nonatomic) NSUInteger maskBufferOffset; // ivar: _maskBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *transformBuffer; // ivar: _transformBuffer
@property (nonatomic) NSUInteger transformBufferOffset; // ivar: _transformBufferOffset
@property (nonatomic) NSUInteger transformType;


+(BOOL)supportsSecureCoding;
-(*void)innerNodeBufferRange;
-(*void)leafNodeBufferRange;
-(*void)pageBufferRange;
-(*void)pageTable0BufferRange;
-(*void)pageTable1BufferRange;
-(BOOL)useResourceBuffer;
-(NSUInteger)branchingFactor;
-(NSUInteger)innerNodeCount;
-(NSUInteger)leafNodeCount;
-(id)copyInstanceAccelerationStructureWithZone:(struct _NSZone *)arg0 device:(id)arg1 group:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 group:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 group:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)statistics;
-(int)nodeLayout;
-(int)rootNodeType;
-(struct _MPSAxisAlignedBoundingBox )boundingBox;
-(void)bindResourcesWithEncoder:(id)arg0 commandBuffer:(id)arg1 retainedResources:(id)arg2 ;
-(void)dealloc;
-(void)decodeInstanceAccelerationStructureWithCoder:(id)arg0 ;
-(void)encodeInstanceOffsetsToBuffer:(id)arg0 ;
-(void)encodeRefitToCommandBuffer:(id)arg0 ;
-(void)encodeResourcesToBuffer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)rebuild;
-(void)rebuildWithCompletionHandler:(id)arg0 ;
-(void)sharedInitInstanceAccelerationStructure;
-(void)validate;


@end


#endif