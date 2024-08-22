// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSTYLINGPROVIDINGSOLIDCOLORLAYER_H
#define MTSTYLINGPROVIDINGSOLIDCOLORLAYER_H

@class CALayer, NSMutableDictionary;



@interface MTStylingProvidingSolidColorLayer : CALayer

@property (retain, nonatomic) NSMutableDictionary *cmStylingProviders; // ivar: _cmStylingProviders


-(id)_fillDarkStyleSet;
-(id)_fillLightStyleSet;
-(id)_strokeDarkStyleSet;
-(id)_strokeLightStyleSet;
-(id)_styleSetForCategory:(id)arg0 ;
-(id)_styleSetForCategory:(id)arg0 withPrimaryStyleDictionary:(id)arg1 secondaryStyleDictionary:(id)arg2 tertiaryStyleDictionary:(id)arg3 ;
-(id)_styleSetNameForCategory:(id)arg0 ;
-(id)visualStylingProviderForCategory:(id)arg0 ;
-(void)_updateVisualStylingProviderForCategory:(id)arg0 ;
-(void)_updateVisualStylingProviders;
-(void)setBackgroundColor:(struct CGColor *)arg0 ;


@end


#endif