// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPNUMBERPADBUTTON_H
#define TPNUMBERPADBUTTON_H

@class UIControl, UIColor, UIView, NSString, CALayer;
@protocol TPNumberPadButtonProtocol;


#import "TPRevealingRingView.h"

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>



@property (readonly, nonatomic) UIColor *buttonColor; // ivar: _buttonColor
@property NSInteger character; // ivar: character
@property (retain) UIView *circleView; // ivar: _circleView
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CALayer *glyphLayer; // ivar: _glyphLayer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *highlightedButtonColor;
@property (retain) CALayer *highlightedGlyphLayer; // ivar: _highlightedGlyphLayer
@property (readonly, nonatomic) TPRevealingRingView *revealingRingView; // ivar: _revealingRingView
@property (readonly) Class superclass;


+(BOOL)isCarPlay;
+(BOOL)usesBoldAssets;
+(BOOL)usesButtonSaturationFilters;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(CGFloat)highlightedCircleViewAlpha;
+(CGFloat)horizontalPadding;
+(CGFloat)outerCircleDiameter;
+(CGFloat)unhighlightedCircleViewAlpha;
+(CGFloat)verticalPadding;
+(id)disabledImageForCharacter:(NSInteger)arg0 ;
+(id)imageForCharacter:(NSInteger)arg0 ;
+(id)imageForCharacter:(NSInteger)arg0 highlighted:(BOOL)arg1 ;
+(id)imageForCharacter:(NSInteger)arg0 highlighted:(BOOL)arg1 whiteVersion:(BOOL)arg2 ;
+(id)localizedLettersForCharacter:(NSInteger)arg0 ;
+(id)scriptKey;
+(struct CGRect )circleBounds;
+(struct CGSize )defaultSize;
+(struct UIEdgeInsets )paddingOutsideRing;
+(void)loadNumberPadKeyPrototypeView;
+(void)resetLocale;
+(void)resetLocaleIfNeeded;
-(id)defaultColor;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initForCharacter:(NSInteger)arg0 ;
-(id)initForCharacter:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(void)highlightCircleView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)reloadImagesForCurrentCharacter;
-(void)setGreyedOut:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)touchCancelled;
-(void)touchDown;
-(void)touchUp;


@end


#endif