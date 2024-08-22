// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASETRIANGLESET_H
#define PHASETRIANGLESET_H


#import <Foundation/Foundation.h>


@interface PHASETriangleSet : NSObject {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> verts;
    ? _color;
}


@property ? color;
@property (readonly, nonatomic) NSInteger size; // ivar: _size


-(id)getPointAtIndex:(NSInteger)arg0 vertexIndex;
-(id)initWithTriangleData:(id)arg0 color;
-(id)pointAtIndex:(NSInteger)arg0 vertexIndex;


@end


#endif