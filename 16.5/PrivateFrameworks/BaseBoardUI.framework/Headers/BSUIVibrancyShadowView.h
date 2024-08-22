// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIVIBRANCYSHADOWVIEW_H
#define BSUIVIBRANCYSHADOWVIEW_H

@class CAFilter;


#import "BSUIVibrancyView.h"
#import "BSUIVibrancyShadowValues.h"

@interface BSUIVibrancyShadowView : BSUIVibrancyView {
    CAFilter *_vibrantColorFilter;
    BSUIVibrancyShadowValues *_values;
}




+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_defaultGradientColors;
-(id)gradientLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateFilters;


@end


#endif