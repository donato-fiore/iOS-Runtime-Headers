// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSACCELERATIONSTRUCTUREGROUP_H
#define MPSACCELERATIONSTRUCTUREGROUP_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSAccelerationStructureGroup : NSObject {
    *void _bvhGroup;
}


@property (readonly, nonatomic) NSObject<MTLDevice> *device;


-(*void)bvhGroup;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 storageMode:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif