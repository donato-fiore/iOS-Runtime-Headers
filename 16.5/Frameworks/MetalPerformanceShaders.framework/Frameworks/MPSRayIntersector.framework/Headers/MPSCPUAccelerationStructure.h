// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCPUACCELERATIONSTRUCTURE_H
#define MPSCPUACCELERATIONSTRUCTURE_H


#import <Foundation/Foundation.h>


@interface MPSCPUAccelerationStructure : NSObject {
    *void _bvh;
    NSUInteger _branchingFactor;
}




-(*void)bvh;
-(NSUInteger)branchingFactor;
-(void)dealloc;
-(void)rebuildWithDescriptor:(id)arg0 ;


@end


#endif