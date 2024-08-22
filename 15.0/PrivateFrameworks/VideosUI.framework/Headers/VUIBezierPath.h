// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIBEZIERPATH_H
#define VUIBEZIERPATH_H

@class UIBezierPath;



@interface VUIBezierPath : UIBezierPath

@property (nonatomic) *CGPath vuiCGPath;


+(id)vui_bezierPathWithArcCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
+(id)vui_bezierPathWithRoundedRect:(struct CGRect )arg0 radius:(CGFloat)arg1 ;


@end


#endif