// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFLOCALIZATION_H
#define AFLOCALIZATION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFLocalization : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tables;
}




+(id)sharedInstance;
-(id)_getVoiceOrdering;
-(id)_voicesFromVoiceMapWithLanguage:(id)arg0 ;
-(id)allOutputVoiceIdentifiersForSiriLanguage:(id)arg0 ;
-(id)compactDisplayNameInLanguage:(id)arg0 forSiriLanguage:(id)arg1 ;
-(id)defaultOutputVoiceForSiriSessionLanguage:(id)arg0 ;
-(id)dialectsMap;
-(id)init;
-(id)loadInfoForVoicesWithLanguageCode:(id)arg0 ;
-(id)localizedCompactNameForSiriLanguage:(id)arg0 inDisplayLanguage:(id)arg1 ;
-(id)localizedGenderOfOutputVoice:(id)arg0 inDisplayLanguage:(id)arg1 ;
-(id)localizedNameForSiriLanguage:(id)arg0 inDisplayLanguage:(id)arg1 ;
-(id)localizedNameOfOutputVoice:(id)arg0 inDisplayLanguage:(id)arg1 ;
-(id)localizedNameOfOutputVoiceWithIdentifier:(id)arg0 inDisplayLanguage:(id)arg1 ;
-(id)localizedNameOfVoiceGender:(NSInteger)arg0 inDisplayLanguage:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 gender:(NSInteger)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4 ;
-(id)localizedStringForKey:(id)arg0 table:(id)arg1 bundle:(id)arg2 languageCode:(id)arg3 ;
-(id)longDisplayNameInLanguage:(id)arg0 forSiriLanguage:(id)arg1 ;
-(id)outputVoiceColorDescriptorForOutputLanguageCode:(id)arg0 voiceName:(id)arg1 ;
-(id)outputVoiceComparator:(SEL)arg0 ;
-(id)outputVoiceDescriptorForOutputLanguageCode:(id)arg0 voiceName:(id)arg1 ;
-(id)voiceNamesForOutputLanguageCode:(id)arg0 gender:(NSInteger)arg1 ;
-(id)voiceSimilarToVoice:(id)arg0 inSiriSessionLanguage:(id)arg1 ;
-(struct ? )_voiceMaps;


@end


#endif