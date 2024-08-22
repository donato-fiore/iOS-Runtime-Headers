// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKLIGHTINGCUBE_H
#define CEKLIGHTINGCUBE_H


#import <Foundation/Foundation.h>


@interface CEKLightingCube : NSObject {
    ? _world;
    ? _normals;
    CGPoint _screen;
    NSInteger _points;
    NSInteger _planes;
}




-(CGFloat)intensityForPlane:(NSInteger)arg0 ;
-(id)initWithRotationAngle:(CGFloat)arg0 ;
-(struct CGPath *)centerPathWithSize:(struct CGSize )arg0 ;
-(struct CGPath *)centerShadowPathWithSize:(struct CGSize )arg0 width:(CGFloat)arg1 ;
-(struct CGPath *)pathForOutlineWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
-(struct CGPath *)pathForPlane:(NSInteger)arg0 size:(struct CGSize )arg1 ;
-(void)points:(struct CGPoint *)arg0 forOutlineWithSize:(struct CGSize )arg1 ;
-(void)points:(struct CGPoint *)arg0 forPlane:(NSInteger)arg1 size:(struct CGSize )arg2 ;


@end


#endif