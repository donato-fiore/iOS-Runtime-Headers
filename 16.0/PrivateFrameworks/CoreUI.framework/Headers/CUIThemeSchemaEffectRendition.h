// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUITHEMESCHEMAEFFECTRENDITION_H
#define CUITHEMESCHEMAEFFECTRENDITION_H

@class NSDictionary;


#import "CUIThemeRendition.h"
#import "CUIShapeEffectPreset.h"
#import "CUIImage.h"

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}




-(BOOL)_generateReferenceImage;
-(id)_rendererInitializationDictionary;
-(id)coreUIOptions;
-(id)effectPreset;
-(id)initWithCoreUIOptions:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)referenceImage;
-(void)_initializeCoreUIOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif