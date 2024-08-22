// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DFRUSTUMSLICE_H
#define TSCH3DFRUSTUMSLICE_H


#import <Foundation/Foundation.h>


@interface TSCH3DFrustumSlice : NSObject

@property (readonly, nonatomic) tvec3<float> height; // ivar: _height
@property (readonly, nonatomic) line<glm::detail::tvec3<float>> origin; // ivar: _origin
@property (readonly, nonatomic) tvec3<float> width; // ivar: _width


+(id)sliceWithOrigin:(struct line<glm::detail::tvec3<float>> )arg0 width:(struct tvec3<float> )arg1 height:(struct tvec3<float> )arg2 ;
-(id)initWithOrigin:(struct line<glm::detail::tvec3<float>> )arg0 width:(struct tvec3<float> )arg1 height:(struct tvec3<float> )arg2 ;
-(struct tvec3<float> )atNormalizedPosition:(struct tvec2<float> )arg0 ;


@end


#endif