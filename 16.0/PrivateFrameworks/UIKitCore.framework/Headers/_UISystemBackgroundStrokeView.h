// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISYSTEMBACKGROUNDSTROKEVIEW_H
#define _UISYSTEMBACKGROUNDSTROKEVIEW_H



#import "UIView.h"
#import "UIColor.h"

@interface _UISystemBackgroundStrokeView : UIView

@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (nonatomic) CGFloat strokeCornerRadius; // ivar: _strokeCornerRadius
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth
@property (nonatomic) BOOL useContinuousCurve; // ivar: _useContinuousCurve


-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif