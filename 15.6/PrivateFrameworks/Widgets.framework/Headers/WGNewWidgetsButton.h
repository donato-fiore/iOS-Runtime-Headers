// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WGNEWWIDGETSBUTTON_H
#define WGNEWWIDGETSBUTTON_H

@class UIButton, NSCache, _UILegibilitySettings, NSString;



@interface WGNewWidgetsButton : UIButton {
    UIButton *_vibrantButton;
    UIButton *_overlayButton;
    NSCache *_numberAttributedStringCache;
}


@property (nonatomic) NSUInteger badgeNumber; // ivar: _badgeNumber
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) NSString *numberText; // ivar: _numberText
@property (retain, nonatomic) NSString *text; // ivar: _text


-(id)_attributedStringWithColor:(id)arg0 ;
-(id)_numberAttributedStringWithNumberText:(id)arg0 attributes:(id)arg1 ;
-(id)_numberFont;
-(id)_numberImageForNumberText:(id)arg0 withAttributes:(id)arg1 ;
-(id)_textAttributesWithColor:(id)arg0 ;
-(id)init;
-(struct CGSize )_numberLabelSizeForText:(id)arg0 withAttributes:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonPushed:(id)arg0 ;
-(void)_buttonStateChanged:(id)arg0 ;
-(void)_setAttributeTitleForButton:(id)arg0 withColor:(id)arg1 ;
-(void)_updateButtons;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateForContentCategorySizeChange;


@end


#endif