// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPOSITESETTINGLANGUAGEVALUE_H
#define HMDCOMPOSITESETTINGLANGUAGEVALUE_H

@class NSString;
@protocol HMDCompositeSettingsLanguageValueProviding;


#import "HMDCompositeSettingValue.h"

@interface HMDCompositeSettingLanguageValue : HMDCompositeSettingValue <HMDCompositeSettingsLanguageValueProviding>



@property (readonly, copy) NSString *inputLanguageCode; // ivar: _inputLanguageCode
@property (readonly, copy) NSString *outputVoiceGenderCode; // ivar: _outputVoiceGenderCode
@property (readonly, copy) NSString *outputVoiceLanguageCode; // ivar: _outputVoiceLanguageCode
@property (readonly, copy) NSString *voiceName; // ivar: _voiceName


-(id)attributeDescriptions;
-(id)initWithInputLanguage:(id)arg0 outputVoiceLanguageCode:(id)arg1 outputVoiceGenderCode:(id)arg2 voiceName:(id)arg3 ;


@end


#endif