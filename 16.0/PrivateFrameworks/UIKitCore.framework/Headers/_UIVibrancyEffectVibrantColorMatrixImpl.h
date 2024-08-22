// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIBRANCYEFFECTVIBRANTCOLORMATRIXIMPL_H
#define _UIVIBRANCYEFFECTVIBRANTCOLORMATRIXIMPL_H

@class UIVibrancyEffectImpl;


#import "UIColor.h"

@interface _UIVibrancyEffectVibrantColorMatrixImpl : UIVibrancyEffectImpl {
    NSInteger _systemName;
    CAColorMatrix _lightVibrantColorMatrix;
    CAColorMatrix _darkVibrantColorMatrix;
    UIColor *_reducedTransperancyColor;
    CGFloat _alpha;
    BOOL _hasDarkVariant;
}




-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)implementationReplacingTintColor:(id)arg0 ;
-(id)initWithCAColorMatrix:(struct CAColorMatrix )arg0 alpha:(CGFloat)arg1 ;
-(id)initWithLightCAColorMatrix:(struct CAColorMatrix )arg0 darkCAColorMatrix:(struct CAColorMatrix )arg1 alpha:(CGFloat)arg2 ;
-(id)initWithSystemName:(NSInteger)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif