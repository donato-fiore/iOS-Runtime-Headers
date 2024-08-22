// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPEAKTYPINGSERVICES_H
#define SPEAKTYPINGSERVICES_H

@class NSString, AXUIClient;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface SpeakTypingServices : NSObject <AXUIClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXUIClient *speakTypingClient; // ivar: _speakTypingClient
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)notifySpeakServicesForAttributedSpeechOutput:(id)arg0 ;
-(BOOL)notifySpeakServicesForSpeakAutoCorrections:(id)arg0 forCurrentInputMode:(id)arg1 ;
-(BOOL)notifySpeakServicesForSpeechOutput:(id)arg0 volume:(CGFloat)arg1 speakingRate:(CGFloat)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackQuickTypePrediction:(id)arg0 forCurrentInputMode:(id)arg1 ;
-(BOOL)notifySpeakServicesToInitializeServerConnection;
-(BOOL)notifySpeakServicesToStopSpeaking;
-(BOOL)notifySpeakServicesToStopSpeakingAutocorrections;
-(BOOL)verifyTestingConnection;
-(id)_clientIdentifier;
-(id)init;
-(id)lastSpokenString;
-(id)lastUsedVoiceIdentifier;
-(void)clearLastSpokenString;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dealloc;
-(void)initializeServerConnection;
-(void)setLetterFeedbackEnabled:(BOOL)arg0 ;
-(void)setPhoneticFeedbackEnabled:(BOOL)arg0 ;
-(void)setVoiceIdentifier:(id)arg0 forLanguage:(id)arg1 ;
-(void)setWordFeedbackEnabled:(BOOL)arg0 ;


@end


#endif