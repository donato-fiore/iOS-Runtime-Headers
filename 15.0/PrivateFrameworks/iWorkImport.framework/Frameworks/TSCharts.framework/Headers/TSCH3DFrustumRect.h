// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DFRUSTUMRECT_H
#define TSCH3DFRUSTUMRECT_H


#import <Foundation/Foundation.h>


@interface TSCH3DFrustumRect : NSObject

@property (readonly, nonatomic) float bottom; // ivar: _bottom
@property (readonly, nonatomic) float left; // ivar: _left
@property (readonly, nonatomic) float right; // ivar: _right
@property (readonly, nonatomic) float top; // ivar: _top


+(id)rectWithLeft:(float)arg0 right:(float)arg1 bottom:(float)arg2 top:(float)arg3 ;
-(id)initWithLeft:(float)arg0 right:(float)arg1 bottom:(float)arg2 top:(float)arg3 ;
-(struct box<glm::detail::tvec2<float>> )toBox;


@end


#endif