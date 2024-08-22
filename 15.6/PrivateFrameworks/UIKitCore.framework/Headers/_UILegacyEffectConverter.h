// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILEGACYEFFECTCONVERTER_H
#define _UILEGACYEFFECTCONVERTER_H


#import <Foundation/Foundation.h>


@interface _UILegacyEffectConverter : NSObject



+(id)sharedConverter;
-(id)backdropSettingsForBlurStyle:(NSInteger)arg0 ;
-(id)vibrancyConfigForHighQualityVibrancyStyle:(NSInteger)arg0 ;
-(id)vibrancyConfigForLowQualityVibrancyStyle:(NSInteger)arg0 ;
-(id)vibrancyConfigForReducedTransperancyVibrancyStyle:(NSInteger)arg0 ;
-(void)applyBackdropSettings:(id)arg0 toEffectDescriptor:(id)arg1 environment:(id)arg2 ;
-(void)applyVibrancyConfig:(id)arg0 toEffectDescriptor:(id)arg1 ;


@end


#endif