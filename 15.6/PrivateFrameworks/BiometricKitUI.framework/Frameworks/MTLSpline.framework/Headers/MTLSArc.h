// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLSARC_H
#define MTLSARC_H



#import "MTLSPath.h"

@interface MTLSArc : MTLSPath {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _points;
}




-(id)initWithStrokeWeight:(float)arg0 radius:(float)arg1 scale:(struct AxisAngle )arg2 rotationtranslation;


@end


#endif