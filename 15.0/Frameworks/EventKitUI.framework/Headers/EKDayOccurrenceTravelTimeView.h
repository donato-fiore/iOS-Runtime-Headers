// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKDAYOCCURRENCETRAVELTIMEVIEW_H
#define EKDAYOCCURRENCETRAVELTIMEVIEW_H

@class UIView, NSArray, UIColor, NSLayoutConstraint, UIImageView, UILabel, NSAttributedString;
@protocol EKDayOccurrenceTravelTimeViewMetricsDelegate;



@interface EKDayOccurrenceTravelTimeView : UIView

@property BOOL animatingAlpha; // ivar: _animatingAlpha
@property (retain) NSArray *constraints; // ivar: _constraints
@property (weak, nonatomic) NSObject<EKDayOccurrenceTravelTimeViewMetricsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *elementColor; // ivar: _elementColor
@property (nonatomic) CGFloat hairlineYPosition; // ivar: _hairlineYPosition
@property (retain) UIView *horizontalLineView; // ivar: _horizontalLineView
@property (retain) NSLayoutConstraint *iconHeight; // ivar: _iconHeight
@property (retain) NSLayoutConstraint *iconWidth; // ivar: _iconWidth
@property (retain) NSLayoutConstraint *leadingHorizontalPad; // ivar: _leadingHorizontalPad
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (nonatomic) NSInteger occurrenceBackgroundStyle; // ivar: _occurrenceBackgroundStyle
@property (nonatomic) NSInteger routingMode; // ivar: _routingMode
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain) NSLayoutConstraint *trailingHorizontalPad; // ivar: _trailingHorizontalPad
@property (retain) UIImageView *travelTimeIcon; // ivar: _travelTimeIcon
@property (retain) UILabel *travelTimeLabel; // ivar: _travelTimeLabel
@property (copy, nonatomic) NSAttributedString *travelTimeString;


+(CGFloat)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)arg0 sizeClass:(NSInteger)arg1 ;
+(void)initialize;
-(CGFloat)_iconScale;
-(CGFloat)alphaForElements;
-(id)_textFont;
-(id)_travelTimeIconForTravelModeWithColor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReusableTravelTimeView:(id)arg0 ;
-(struct UIEdgeInsets )_parentPadding;
-(void)_updateStringsColorsAndConstraintConstants;
-(void)layoutSubviews;


@end


#endif