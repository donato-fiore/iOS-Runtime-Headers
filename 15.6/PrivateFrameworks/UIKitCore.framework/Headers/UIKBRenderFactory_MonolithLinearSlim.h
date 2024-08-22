// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORY_MONOLITHLINEARSLIM_H
#define UIKBRENDERFACTORY_MONOLITHLINEARSLIM_H

@class MonolithLinear;



@interface UIKBRenderFactory_MonolithLinearSlim : MonolithLinear



-(CGFloat)keyRoundRectRadius;
-(CGFloat)pillRoundRectRadius;
-(id)_activeTraitsForInternationalKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_activeTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_enabledTraitsForInternationalKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_enabledTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)_variantTraitsForKeyplaneSwitchKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)highlightedVariantLayeredBackgroundColor;
-(id)highlightedVariantPillBackgroundColor;
-(id)variantBackgroundColor;
-(id)variantKeyColor;
-(id)variantPillBackgroundColor;
-(struct CGPoint )_textOffsetForKey:(id)arg0 ;
-(struct CGPoint )symbolTextOffset;
-(struct CGRect )internationalSymbolFrameFromRect:(struct CGRect )arg0 ;
-(struct CGRect )spaceDisplayFrameFromRect:(struct CGRect )arg0 ;
-(struct CGRect )spacePaddedFrameFromRect:(struct CGRect )arg0 ;
-(struct CGRect )spaceSymbolFrameFromRect:(struct CGRect )arg0 ;
-(struct CGRect )switchPaddedFrameFromRect:(struct CGRect )arg0 ;
-(struct CGRect )switchSymbolFrameFromRect:(struct CGRect )arg0 ;
-(void)configureCornersOnGeometry:(id)arg0 forKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forActiveKeyplaneSwitchKey:(id)arg1 ;
-(void)configureSymbolStyle:(id)arg0 forEnabledKeyplaneSwitchKey:(id)arg1 ;


@end


#endif