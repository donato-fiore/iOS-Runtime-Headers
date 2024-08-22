// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DAREAGENERATOR_H
#define TSCH3DAREAGENERATOR_H


#import <Foundation/Foundation.h>


@interface TSCH3DAreaGenerator : NSObject {
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _top;
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _bottom;
    tvec2<float> _YLimits;
    float _zeroValue;
}




+(id)generatorWithYLimits:(struct tvec2<float> )arg0 zeroValue:(float)arg1 ;
-(float)clampedZero;
-(id)createGeometryWithXValues:(*void)arg0 yValues:(*void)arg1 ;
-(id)initWithYLimits:(struct tvec2<float> )arg0 zeroValue:(float)arg1 ;
-(void)addRowWithXValues:(*void)arg0 yValues:(*void)arg1 ;
-(void)clipLine:(*void)arg0 into:(*void)arg1 ;


@end


#endif