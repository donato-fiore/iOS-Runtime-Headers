// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLSEGMENTEDCONTROLSEGMENT_H
#define HUQUICKCONTROLSEGMENTEDCONTROLSEGMENT_H

@class UIView, NSString, UILabel;



@interface HUQuickControlSegmentedControlSegment : UIView

@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSUInteger roundedCorners; // ivar: _roundedCorners
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)borderInset;
+(id)highlightedColor;
+(id)selectedColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_updateBackgroundColor;
-(void)layoutSubviews;


@end


#endif