// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIRINGTONE_H
#define AFSIRIRINGTONE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "AFVoiceInfo.h"

@interface AFSiriRingtone : NSObject {
    BOOL _languageMismatch;
    NSString *_voiceLanguage;
}


@property (copy, nonatomic) NSString *callDestinationID; // ivar: _callDestinationID
@property (nonatomic) NSInteger callDestinationIDType; // ivar: _callDestinationIDType
@property (copy, nonatomic) NSString *callServiceSpeakableName; // ivar: _callServiceSpeakableName
@property (nonatomic) NSInteger callerIDType; // ivar: _callerIDType
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (copy, nonatomic) NSString *displayedCallerID; // ivar: _displayedCallerID
@property (readonly, nonatomic) NSString *textToSpeak;
@property (readonly, nonatomic) AFVoiceInfo *voiceInfo; // ivar: _voiceInfo


-(id)_bestVoiceInfoWithCurrentLocale:(id)arg0 ;
-(id)_escapeCallDestinationIDString:(id)arg0 forType:(NSInteger)arg1 ;
-(id)_escapeCallerIDString:(id)arg0 forType:(NSInteger)arg1 ;
-(id)_generateSpokenTextForContacts:(id)arg0 voiceLanguage:(id)arg1 displayedCallerID:(id)arg2 callerIDType:(NSInteger)arg3 callDestinationID:(id)arg4 callDestinationIDType:(NSInteger)arg5 callServiceSpeakableName:(id)arg6 ;
-(id)_phoneticNamesForContact:(id)arg0 languageCode:(id)arg1 ;
-(id)_spokenTextForCallDestinationID:(id)arg0 ofType:(NSInteger)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForCallerID:(id)arg0 ofType:(NSInteger)arg1 rawCaller:(id)arg2 rawCallerType:(NSInteger)arg3 languageCode:(id)arg4 ;
-(id)_spokenTextForContacts:(id)arg0 callServiceSpeakableName:(id)arg1 languageCode:(id)arg2 ;
-(id)_spokenTextForOneContact:(id)arg0 callServiceSpeakableName:(id)arg1 languageCode:(id)arg2 ;
-(id)_spokenTextForThreeContacts:(id)arg0 callServiceSpeakableName:(id)arg1 languageCode:(id)arg2 ;
-(id)_spokenTextForTwoContacts:(id)arg0 callServiceSpeakableName:(id)arg1 languageCode:(id)arg2 ;
-(id)init;
-(id)initWithContacts:(id)arg0 ;
-(void)_phoneticInfoForContact:(id)arg0 languageCode:(id)arg1 firstName:(*id)arg2 middleName:(*id)arg3 lastName:(*id)arg4 nickname:(*id)arg5 ;


@end


#endif