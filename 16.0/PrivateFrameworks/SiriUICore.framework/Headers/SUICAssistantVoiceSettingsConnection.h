// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICASSISTANTVOICESETTINGSCONNECTION_H
#define SUICASSISTANTVOICESETTINGSCONNECTION_H

@class AFSettingsConnection, NSMutableDictionary;



@interface SUICAssistantVoiceSettingsConnection : AFSettingsConnection

@property (retain, nonatomic) NSMutableDictionary *cachedAvailableVoices; // ivar: _cachedAvailableVoices


+(id)assistantLanguageTitlesDictionary;
+(id)capitalizeFirstPartOfCountry:(id)arg0 ;
+(id)outputLanguageIdentifiers;
+(id)shortTitlesForLanguageIdentifiers:(id)arg0 deviceLanguageLocale:(id)arg1 ;
+(id)titlesForLanguageIdentifiers:(id)arg0 ;
-(BOOL)languageHasBothGender:(id)arg0 ;
-(BOOL)languageHasCustomVoice:(id)arg0 ;
-(BOOL)languageHasVoiceSelection:(id)arg0 ;
-(BOOL)languageHasVoiceVariations:(id)arg0 ;
-(id)_regionForLanguageIdentifier:(id)arg0 ;
-(id)dialectForLanguageIdentifier:(id)arg0 ;
-(id)getAvailableDialectsForLanguage:(id)arg0 ;
-(id)getAvailableVoicesForLanguage:(id)arg0 ;
-(void)setOutputVoiceLanguage:(id)arg0 gender:(NSInteger)arg1 ;


@end


#endif