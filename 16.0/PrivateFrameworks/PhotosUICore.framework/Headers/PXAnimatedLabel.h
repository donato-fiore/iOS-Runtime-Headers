// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXANIMATEDLABEL_H
#define PXANIMATEDLABEL_H

@class UIView, NSLayoutConstraint, UIFont, UILabel, NSString;


#import "PXAnimatedCounter.h"

@interface PXAnimatedLabel : UIView

@property (retain) PXAnimatedCounter *counter; // ivar: _counter
@property (readonly) NSLayoutConstraint *counterWidthConstraint; // ivar: _counterWidthConstraint
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSString *text; // ivar: _text


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateConstraintsForText;
-(void)commonInit;
-(void)layoutSubviews;


@end


#endif