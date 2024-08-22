// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTFIELDROUNDEDRECTBACKGROUNDVIEWNEUE_H
#define _UITEXTFIELDROUNDEDRECTBACKGROUNDVIEWNEUE_H



#import "UIView.h"
#import "UIColor.h"

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {
    ? _flags;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) BOOL hasFlexibleCornerRadius;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (nonatomic) BOOL usesSinglePixelLineWidth;


-(CGFloat)_screenScale;
-(id)_fillColor:(BOOL)arg0 ;
-(id)_initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 usesSinglePixelLineWidth:(BOOL)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 usesSinglePixelLineWidth:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(id)_strokeColor:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setActive:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateView;


@end


#endif