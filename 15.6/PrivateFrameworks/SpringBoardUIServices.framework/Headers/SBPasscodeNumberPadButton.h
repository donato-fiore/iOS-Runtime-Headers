// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBPASSCODENUMBERPADBUTTON_H
#define SBPASSCODENUMBERPADBUTTON_H

@class TPNumberPadDarkStyleButton, NSString, UIColor;
@protocol SBUIPasscodeNumberPadButton;



@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *reduceTransparencyButtonColor; // ivar: _reduceTransparencyButtonColor
@property (readonly) Class superclass;


+(BOOL)_shouldUseAlternativeCirlceViewAlphas;
+(CGFloat)_numberPadButtonOuterCircleDiameter;
+(CGFloat)highlightedCircleViewAlpha;
+(CGFloat)outerCircleDiameter;
+(CGFloat)unhighlightedCircleViewAlpha;
+(id)_stringCharacterForCharacter:(NSInteger)arg0 ;
+(int)_characterTypeForCharacter:(NSInteger)arg0 ;
+(struct CGSize )defaultSize;
+(struct UIEdgeInsets )paddingOutsideRing;
-(id)initForCharacter:(NSInteger)arg0 ;
-(id)stringCharacter;
-(int)characterType;
-(void)conformsToSBUIPasscodeNumberPadButton;


@end


#endif