// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUITHEMEEFFECTRENDITION_H
#define _CUITHEMEEFFECTRENDITION_H



#import "CUIThemeRendition.h"
#import "CUIShapeEffectPreset.h"

@interface _CUIThemeEffectRendition : CUIThemeRendition {
    *_cuieffectdata effectData;
    CUIShapeEffectPreset *_effectPreset;
    float _minimumShadowSpread;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)effectPreset;
-(void)_setStructuredThemeStore:(id)arg0 ;
-(void)dealloc;


@end


#endif