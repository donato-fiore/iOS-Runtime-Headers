// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIBRANCYEFFECTLEGACYIMPL_H
#define _UIVIBRANCYEFFECTLEGACYIMPL_H

@class UIVibrancyEffectImpl;


#import "UIVibrancyEffect.h"

@interface _UIVibrancyEffectLegacyImpl : UIVibrancyEffectImpl {
    NSInteger _style;
    BOOL _invertAutomaticStyle;
    BOOL _ignoreSimpleVibrancy;
}


@property (nonatomic) UIVibrancyEffect *effect; // ivar: _effect


-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)style;
-(NSUInteger)hash;
-(id)implementationForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 invertAutomaticStyle:(BOOL)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 invertAutomaticStyle:(BOOL)arg1 ignoreSimpleVibrancy:(BOOL)arg2 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif