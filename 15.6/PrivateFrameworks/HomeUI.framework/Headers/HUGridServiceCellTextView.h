// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDSERVICECELLTEXTVIEW_H
#define HUGRIDSERVICECELLTEXTVIEW_H

@class UIView, NSString, UIFont, HFServiceNameComponents, UIColor;



@interface HUGridServiceCellTextView : UIView

@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (nonatomic) CGFloat descriptionTextColorDimmingFactor; // ivar: _descriptionTextColorDimmingFactor
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) CGFloat lastBaselineToBottomDistance;
@property (nonatomic) CGFloat lineHeight; // ivar: _lineHeight
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) HFServiceNameComponents *serviceNameComponents; // ivar: _serviceNameComponents
@property (nonatomic) BOOL shouldShowRoomName; // ivar: _shouldShowRoomName
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) BOOL textColorFollowsTintColor; // ivar: _textColorFollowsTintColor
@property (readonly, nonatomic) CGFloat topToFirstBaselineDistance;


+(CGFloat)minimumDescriptionScaleFactor;
-(id)_combinedAttributedString;
-(id)_commonTextAttributesWithLineBreakMode:(NSInteger)arg0 ;
-(id)_effectiveTextColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_drawCombinedLabel;
-(void)_drawDescriptionLabel;
-(void)_drawSeperateLabels;
-(void)_updateMode;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif