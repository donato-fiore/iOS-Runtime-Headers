// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DUBYTEDATABUFFER_H
#define TSCH3DUBYTEDATABUFFER_H



#import "TSCH3DVectorDataBuffer.h"

@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {
    vector<TSCH3D::PODType<unsigned char>, std::allocator<TSCH3D::PODType<unsigned char>>> _container;
}


@property (readonly, nonatomic) *void container;


-(*void)data;
-(NSUInteger)componentByteSize;
-(NSUInteger)components;
-(NSUInteger)count;
-(id)elementsAtIndices:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(int)componentType;
-(void)clear;
-(void)fillCapacity;


@end


#endif