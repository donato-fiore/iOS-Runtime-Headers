// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCPUPRIMITIVEACCELERATIONSTRUCTUREDESCRIPTOR_H
#define MPSCPUPRIMITIVEACCELERATIONSTRUCTUREDESCRIPTOR_H

@class NSArray;


#import "MPSCPUAccelerationStructureDescriptor.h"

@interface MPSCPUPrimitiveAccelerationStructureDescriptor : MPSCPUAccelerationStructureDescriptor {
    NSArray *_geometryDescriptors;
}


@property (retain, nonatomic) NSArray *geometryDescriptors;


-(void)dealloc;


@end


#endif