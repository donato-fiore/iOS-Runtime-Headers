// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOMPOSITELANGUAGESETTING_H
#define HMDCOMPOSITELANGUAGESETTING_H

@class NSString;
@protocol HMDCompositeSettingsLanguageValueProviding;


#import "HMDCompositeSetting.h"

@interface HMDCompositeLanguageSetting : HMDCompositeSetting <HMDCompositeSettingsLanguageValueProviding>



@property (readonly, copy) NSString *inputLanguageCode; // ivar: _inputLanguageCode
@property (readonly, copy) NSString *outputVoiceGenderCode; // ivar: _outputVoiceGenderCode
@property (readonly, copy) NSString *outputVoiceLanguageCode; // ivar: _outputVoiceLanguageCode
@property (readonly, copy) NSString *voiceName; // ivar: _voiceName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithInputLanguage:(id)arg0 outputVoiceLanguageCode:(id)arg1 outputVoiceGenderCode:(id)arg2 voiceName:(id)arg3 readVersion:(id)arg4 writeVersion:(id)arg5 ;


@end


#endif