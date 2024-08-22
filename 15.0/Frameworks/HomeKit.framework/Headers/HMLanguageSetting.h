// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMLANGUAGESETTING_H
#define HMLANGUAGESETTING_H



#import "HMImmutableSetting.h"
#import "HMSettingLanguageValue.h"

@interface HMLanguageSetting : HMImmutableSetting

@property (readonly) HMSettingLanguageValue *languageValue; // ivar: _languageValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 languageValue:(id)arg2 ;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 payload:(id)arg2 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;
-(id)settingValue;
-(id)settingWithSettingValue:(id)arg0 ;


@end


#endif