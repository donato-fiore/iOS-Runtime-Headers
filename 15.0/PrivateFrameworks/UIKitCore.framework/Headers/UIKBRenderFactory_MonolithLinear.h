// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERFACTORY_MONOLITHLINEAR_H
#define UIKBRENDERFACTORY_MONOLITHLINEAR_H

@class Monolith;



@interface UIKBRenderFactory_MonolithLinear : Monolith



-(BOOL)forceVariantsInsideKeyplane;
-(BOOL)includeDeleteInVariants;
-(BOOL)preferGlyphForClear;
-(BOOL)preferGlyphForDelete;
-(BOOL)smallTextForSpaceAndClear;
-(BOOL)spaceKeyIsPressed;
-(CGFloat)tldKeyFontSize;
-(CGFloat)tldKeyFontWeight;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(struct CGRect )_insetRectForSpaceKeyRect:(struct CGRect )arg0 yOffset:(CGFloat)arg1 ;


@end


#endif