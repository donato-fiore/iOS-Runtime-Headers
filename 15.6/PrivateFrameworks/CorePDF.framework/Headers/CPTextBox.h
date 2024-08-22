// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPTEXTBOX_H
#define CPTEXTBOX_H



#import "CPRegion.h"

@interface CPTextBox : CPRegion {
    CGFloat rotationAngle;
}




-(BOOL)isBoxRegion;
-(BOOL)isRotated;
-(CGFloat)rotationAngle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(struct CGRect )bounds;
-(void)accept:(id)arg0 ;
-(void)setRotationAngle:(CGFloat)arg0 ;


@end


#endif