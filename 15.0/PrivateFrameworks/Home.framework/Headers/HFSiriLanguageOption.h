// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSIRILANGUAGEOPTION_H
#define HFSIRILANGUAGEOPTION_H

@class NSString, HMSettingLanguageValue, UIColor;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFSiriLanguageOption : NSObject <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDefaultVoiceForRecognitionLanguage) BOOL defaultVoiceForRecognitionLanguage; // ivar: _defaultVoiceForRecognitionLanguage
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoice;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceAccent;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceColor;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceGender;
@property (readonly, copy, nonatomic) NSString *localizedRecognitionLanguage;
@property (readonly, nonatomic) NSInteger outputGender; // ivar: _outputGender
@property (readonly, copy, nonatomic) NSString *outputLanguage; // ivar: _outputLanguage
@property (readonly, copy, nonatomic) NSString *recognitionLanguage; // ivar: _recognitionLanguage
@property (retain, nonatomic) NSString *serializableVoiceName; // ivar: _serializableVoiceName
@property (retain, nonatomic) HMSettingLanguageValue *settingLanguageValue; // ivar: _settingLanguageValue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) UIColor *voiceColor;
@property (readonly, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) NSString *voiceNameWithDefaultFallback;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)allSerializedRepresentations;
-(id)init;
-(id)initWithHomeKitSettingLanguageValue:(id)arg0 ;
-(id)initWithRecognitionLanguage:(id)arg0 outputLanguage:(id)arg1 outputGender:(NSInteger)arg2 voiceName:(id)arg3 defaultVoiceForRecognitionLanguage:(BOOL)arg4 ;
-(id)initWithRecognitionLanguage:(id)arg0 outputVoice:(id)arg1 defaultVoiceForRecognitionLanguage:(BOOL)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)outputVoice;
-(id)serializedRepresentation;


@end


#endif