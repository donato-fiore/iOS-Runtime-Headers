// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTTUIABBREVIATIONVIEW_H
#define RTTUIABBREVIATIONVIEW_H

@class UIControl, UILabel, NSDictionary, NSString, UIView;



@interface RTTUIAbbreviationView : UIControl

@property (retain, nonatomic) UILabel *abbreviation; // ivar: _abbreviation
@property (retain, nonatomic) NSDictionary *abbreviationData; // ivar: _abbreviationData
@property (readonly, nonatomic) NSString *abbreviationText;
@property (nonatomic) BOOL drawLeftBorder; // ivar: _drawLeftBorder
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) UILabel *hint; // ivar: _hint
@property (retain, nonatomic) UIView *leftBorderView; // ivar: _leftBorderView


+(void)warningSquelcher;
-(BOOL)canBecomeFocused;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif