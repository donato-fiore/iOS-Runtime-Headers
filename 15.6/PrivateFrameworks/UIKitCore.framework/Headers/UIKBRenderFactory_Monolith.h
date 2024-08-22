// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORY_MONOLITH_H
#define UIKBRENDERFACTORY_MONOLITH_H



#import "UIKBRenderFactory.h"

@interface UIKBRenderFactory_Monolith : UIKBRenderFactory



-(BOOL)forceVariantsInsideKeyplane;
-(BOOL)includeDeleteInVariants;
-(BOOL)preferGlyphForClear;
-(BOOL)preferGlyphForDelete;
-(BOOL)smallTextForSpaceAndClear;
-(BOOL)spaceKeyIsPressed;
-(CGFloat)keyRoundRectRadius;
-(CGFloat)letterKeyFontSize;
-(CGFloat)letterKeyFontWeight;
-(CGFloat)letterKeySecondaryFontSize;
-(CGFloat)letterKeyTwoLineFontSize;
-(CGFloat)letterKeyTwoLineFontWeight;
-(CGFloat)shadowRadius;
-(CGFloat)shadowYOffset;
-(CGFloat)spaceKeyFontSize;
-(CGFloat)textKeyFontSize;
-(CGFloat)textKeyFontWeight;
-(CGFloat)tldKeyFontSize;
-(CGFloat)tldKeyFontWeight;
-(NSInteger)assetIdiom;
-(id)_activeTraitsForControlKey:(id)arg0 ;
-(id)_activeTraitsForKey:(id)arg0 ;
-(id)_activeTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_activeTraitsForLetterKey:(id)arg0 ;
-(id)_disabledTraitsForControlKey:(id)arg0 ;
-(id)_disabledTraitsForKey:(id)arg0 ;
-(id)_disabledTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_disabledTraitsForLetterKey:(id)arg0 ;
-(id)_enabledTraitsForControlKey:(id)arg0 ;
-(id)_enabledTraitsForKey:(id)arg0 ;
-(id)_enabledTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_enabledTraitsForLetterKey:(id)arg0 ;
-(id)_highlightedTraitsForControlKey:(id)arg0 ;
-(id)_highlightedTraitsForKey:(id)arg0 ;
-(id)_highlightedTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_highlightedTraitsForLetterKey:(id)arg0 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_variantTraitsForLetterKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)disabledTextColor;
-(id)displayContentsForKey:(id)arg0 ;
-(id)enabledTextColor;
-(id)highlightedKeyColor;
-(id)highlightedTextColor;
-(id)highlightedVariantKeyColor;
-(id)variantKeyBackgroundColor;
-(id)variantKeyColor;
-(struct CGPoint )_secondaryTextOffsetForKey:(id)arg0 ;
-(struct CGPoint )_textOffsetForKey:(id)arg0 ;
-(struct CGRect )_insetRectForSpaceClearSymbolFrame:(struct CGRect )arg0 ;
-(void)_customizeSymbolStyle:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)configureCornersOnGeometry:(id)arg0 forKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forActiveKeyplaneSwitchKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forEnabledKeyplaneSwitchKey:(id)arg1 ;
-(void)configureSymbolStyles:(id)arg0 forLetterKey:(id)arg1 ;
-(void)lowQualityTraits:(id)arg0 ;


@end


#endif