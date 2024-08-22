// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSEMERGENCYCALLVOICELOOPMANAGER_H
#define SOSEMERGENCYCALLVOICELOOPMANAGER_H

@class NSString, CLLocationManager, _MKLocationShifter, CLLocation, NSTimer, AVSpeechSynthesizer, NSArray;
@protocol AVSpeechSynthesizerDelegate, CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface SOSEmergencyCallVoiceLoopManager : NSObject <AVSpeechSynthesizerDelegate, CLLocationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) _MKLocationShifter *locationShifter; // ivar: _locationShifter
@property (retain, nonatomic) CLLocation *locationToSynthesize; // ivar: _locationToSynthesize
@property (retain, nonatomic) NSTimer *messageRepeatTimer; // ivar: _messageRepeatTimer
@property (nonatomic) NSUInteger numberOfLoopsPlayed; // ivar: _numberOfLoopsPlayed
@property (nonatomic) NSInteger playbackMode; // ivar: _playbackMode
@property (nonatomic) float playbackVolume; // ivar: _playbackVolume
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *voiceLanguage; // ivar: _voiceLanguage
@property (retain, nonatomic) AVSpeechSynthesizer *voiceLoopSpeechSynthesizer; // ivar: _voiceLoopSpeechSynthesizer
@property (retain, nonatomic) NSArray *voiceLoopUtterances; // ivar: _voiceLoopUtterances


+(id)_newUtteranceWithText:(id)arg0 voice:(id)arg1 volume:(float)arg2 ;
-(id)_baseVoiceOverAttributes;
-(id)_coordinatesStringFromLocation:(id)arg0 ;
-(id)_introMessageString;
-(id)_languageToUseInVoiceLoopForCountryCode:(id)arg0 ;
-(id)_localizedAttributedStringForKey:(id)arg0 forLocalization:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg0 forLocalization:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg0 forLocalization:(id)arg1 tableName:(id)arg2 ;
-(id)_preferredVoiceLanguageForCountryCode:(id)arg0 ;
-(id)initWithReason:(NSInteger)arg0 playbackMode:(NSInteger)arg1 ;
-(void)_playMessage;
-(void)_playMessageWithLocation;
-(void)_playMessageWithoutLocation;
-(void)_updateLocation:(id)arg0 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)shiftedLocationIfApplicable:(id)arg0 withcompletion:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)startMessagePlayback;
-(void)stopMessagePlayback;


@end


#endif