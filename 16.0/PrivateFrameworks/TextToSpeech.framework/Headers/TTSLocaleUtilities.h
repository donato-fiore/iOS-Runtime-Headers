// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSLOCALEUTILITIES_H
#define TTSLOCALEUTILITIES_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TTSLocaleUtilities : NSObject

@property (retain, nonatomic) NSDictionary *canonicalLanguageCodeVoiceNamesData; // ivar: _canonicalLanguageCodeVoiceNamesData
@property (retain, nonatomic) NSDictionary *generalLanguageCodeData; // ivar: _generalLanguageCodeData
@property (retain, nonatomic) NSDictionary *voiceIdSampleStringData; // ivar: _voiceIdSampleStringData


+(id)sharedInstance;
-(id)defaultVoiceIdentifierForGeneralLanguageCode:(id)arg0 ;
-(id)defaultVoiceIdentifierForVoiceName:(id)arg0 ;
-(id)sampleStringForVoiceIdentifier:(id)arg0 ;


@end


#endif