// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLSCORNER_H
#define MTLSCORNER_H



#import "MTLSPath.h"

@interface MTLSCorner : MTLSPath {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _points;
}




-(id)initWithStrokeWeight:(float)arg0 radius:(float)arg1 outerAnchor:(float)arg2 innerAnchor:(float)arg3 cornerEdge:(float)arg4 scale:(struct AxisAngle )arg5 rotationtranslation;


@end


#endif