// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDASHEDVERTICALDIVIDER_H
#define STDASHEDVERTICALDIVIDER_H

@class UIView, UIImageView, NSLayoutXAxisAnchor, UIImage, UILabel, NSLayoutConstraint, NSString, NSLayoutYAxisAnchor;



@interface STDashedVerticalDivider : UIView

@property (retain, nonatomic) UIImageView *dashedLine; // ivar: _dashedLine
@property (readonly) NSLayoutXAxisAnchor *dashedLineCenterXAnchor; // ivar: _dashedLineCenterXAnchor
@property (readonly) UIImage *dashedLineImage;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *labelLeftConstraint; // ivar: _labelLeftConstraint
@property (copy, nonatomic) NSString *labelText; // ivar: _labelText
@property (readonly) NSLayoutYAxisAnchor *labelTopAnchor; // ivar: _labelTopAnchor
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)initWithTintColor:(id)arg0 ;


@end


#endif