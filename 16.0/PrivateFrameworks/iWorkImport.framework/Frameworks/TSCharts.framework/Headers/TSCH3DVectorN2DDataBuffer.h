// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DVECTORN2DDATABUFFER_H
#define TSCH3DVECTORN2DDATABUFFER_H



#import "TSCH3D2DDataBuffer.h"

@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {
    vector<unsigned char, std::allocator<unsigned char>> _container;
}


@property (readonly, nonatomic) *void container;


-(*void)data;
-(*void)mutableData;
-(NSUInteger)componentByteSize;
-(NSUInteger)count;
-(id)initWithCapacityDimension:(*void)arg0 ;
-(int)componentType;
-(void)fillCapacity;
-(void)resizeFillDimension:(*void)arg0 ;


@end


#endif