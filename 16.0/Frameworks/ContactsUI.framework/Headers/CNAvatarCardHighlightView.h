// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCARDHIGHLIGHTVIEW_H
#define CNAVATARCARDHIGHLIGHTVIEW_H

@class UIView, UIColor, CALayer;



@interface CNAvatarCardHighlightView : UIView

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) CALayer *highlightLayer; // ivar: _highlightLayer
@property (readonly, nonatomic) BOOL highlighted;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)layoutSubviews;


@end


#endif