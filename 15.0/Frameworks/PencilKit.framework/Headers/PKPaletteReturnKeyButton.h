// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTERETURNKEYBUTTON_H
#define PKPALETTERETURNKEYBUTTON_H



#import "PKPaletteButton.h"
#import "PKPaletteReturnKeyButtonContentView.h"
#import "PKTextInputLanguageSelectionToken.h"

@interface PKPaletteReturnKeyButton : PKPaletteButton {
    CGFloat _scalingFactor;
}


@property (nonatomic) NSInteger axis; // ivar: _axis
@property (retain, nonatomic) PKPaletteReturnKeyButtonContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) PKTextInputLanguageSelectionToken *observerToken; // ivar: _observerToken
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType


-(BOOL)_shouldUseBlueReturnKeyColor;
-(BOOL)_useCompactLayout;
-(CGFloat)scalingFactor;
-(id)_backgroundColor;
-(id)_regularLayoutBackgroundColor;
-(id)_returnKeyImage;
-(id)_returnKeyImageSymbolConfiguration;
-(id)_returnKeyLabelText;
-(id)_returnKeyTintColor;
-(id)_textColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateContentViewOrientation;
-(void)_updateImageView;
-(void)_updateLabelText;
-(void)_updateUI;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setScalingFactor:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif