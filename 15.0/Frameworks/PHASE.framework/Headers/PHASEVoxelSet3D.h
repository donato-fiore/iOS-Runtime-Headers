// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEVOXELSET3D_H
#define PHASEVOXELSET3D_H


#import <Foundation/Foundation.h>


@interface PHASEVoxelSet3D : NSObject {
    vector<unsigned short __attribute__((ext_vector_type(3))), std::allocator<unsigned short __attribute__((ext_vector_type(3)))>> _points;
}


@property (readonly, nonatomic) NSInteger size; // ivar: _size


-(id)getAtIndex;
-(id)init;
-(id)initWithPoints:(*void)arg0 count:(NSUInteger)arg1 ;
-(id)voxelAtIndex;


@end


#endif