// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPROTATION_H
#define CPROTATION_H



#import "CPZone.h"

@interface CPRotation : CPZone {
    CGFloat rotationAngle;
}




-(CGFloat)rotationAngle;
-(id)init;
-(struct CGRect )bounds;
-(struct CGRect )renderedBounds;
-(void)accept:(id)arg0 ;
-(void)setRotationAngle:(CGFloat)arg0 ;


@end


#endif