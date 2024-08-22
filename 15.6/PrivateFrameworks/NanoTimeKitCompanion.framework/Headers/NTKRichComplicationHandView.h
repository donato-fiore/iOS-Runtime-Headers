// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONHANDVIEW_H
#define NTKRICHCOMPLICATIONHANDVIEW_H

@class UIView, CALayer;



@interface NTKRichComplicationHandView : UIView {
    CGFloat _beginAngle;
    CGFloat _endAngle;
    CGFloat _handWidth;
    float _value;
}


@property (readonly, nonatomic) CALayer *dotLayer; // ivar: _dotLayer
@property (readonly, nonatomic) CALayer *handLayer; // ivar: _handLayer


-(id)initWithDotSize:(CGFloat)arg0 handWidth:(CGFloat)arg1 beginAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 ;
-(void)_updateHandTransform;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;


@end


#endif