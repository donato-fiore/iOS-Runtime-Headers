// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSETTINGLANGUAGEVALUE_H
#define HMSETTINGLANGUAGEVALUE_H

@class NSString;


#import "HMImmutableSettingValue.h"

@interface HMSettingLanguageValue : HMImmutableSettingValue

@property (readonly, copy) NSString *inputLanguageCode; // ivar: _inputLanguageCode
@property (readonly, copy) NSString *outputVoiceGenderCode; // ivar: _outputVoiceGenderCode
@property (readonly, copy) NSString *outputVoiceLanguageCode; // ivar: _outputVoiceLanguageCode
@property (readonly, copy) NSString *voiceName; // ivar: _voiceName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithInputLanguageCode:(id)arg0 outputVoiceLanguageCode:(id)arg1 outputVoiceGenderCode:(id)arg2 ;
-(id)initWithInputLanguageCode:(id)arg0 outputVoiceLanguageCode:(id)arg1 outputVoiceGenderCode:(id)arg2 voiceName:(id)arg3 ;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;


@end


#endif