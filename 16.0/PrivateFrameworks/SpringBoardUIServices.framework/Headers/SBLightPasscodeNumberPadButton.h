// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLIGHTPASSCODENUMBERPADBUTTON_H
#define SBLIGHTPASSCODENUMBERPADBUTTON_H

@class TPNumberPadLightStyleButton, NSString, UIColor;
@protocol SBUIPasscodeNumberPadButton;



@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor; // ivar: _reduceTransparencyButtonColor
@property (readonly) Class superclass;


+(BOOL)_shouldUseAlternativeCirlceViewAlphas;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(CGFloat)_numberPadButtonOuterCircleDiameter;
+(CGFloat)highlightedCircleViewAlpha;
+(CGFloat)unhighlightedCircleViewAlpha;
+(struct CGSize )defaultSize;
+(struct UIEdgeInsets )paddingOutsideRing;
-(id)initForCharacter:(NSInteger)arg0 ;
-(id)stringCharacter;
-(int)characterType;
-(void)conformsToSBUIPasscodeNumberPadButton;


@end


#endif