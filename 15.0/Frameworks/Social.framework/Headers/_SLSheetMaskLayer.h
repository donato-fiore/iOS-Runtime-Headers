// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SLSHEETMASKLAYER_H
#define _SLSHEETMASKLAYER_H

@class CALayer, UIColor;



@interface _SLSheetMaskLayer : CALayer

@property (retain, nonatomic) UIColor *clipBackgroundColor; // ivar: _clipBackgroundColor
@property (nonatomic) CGFloat clipCornerRadius; // ivar: _clipCornerRadius


-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif