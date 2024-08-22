// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSPEECHSYNTHESISVOICE_H
#define WFSPEECHSYNTHESISVOICE_H

@class AVSpeechSynthesisVoice, NSString;

#import <Foundation/Foundation.h>


@interface WFSpeechSynthesisVoice : NSObject

@property (retain, nonatomic) AVSpeechSynthesisVoice *avVoice; // ivar: _avVoice
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isSiriVoice;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *vsVoiceName;


+(id)availableLanguageCodes;
+(id)currentLanguageCode;
+(id)defaultVoiceForLanguageCode:(id)arg0 ;
+(id)voiceForIdentifier:(id)arg0 ;
+(id)voiceFromAVVoice:(id)arg0 ;
+(id)voicesForLanguageCode:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif