// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXTIMEOUTPUTPREFERENCES_H
#define AXTIMEOUTPUTPREFERENCES_H

@class AXSettings;



@interface AXTimeOutputPreferences : AXSettings



+(id)sharedInstance;
-(BOOL)_npsBoolValueForPreferenceKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_voiceOverIsEnabled;
-(BOOL)_voiceOverIsInTripleClick;
-(BOOL)tapToSpeakTimeEnabled;
-(BOOL)voiceOverTapticChimesEnabled;
-(BOOL)voiceOverTapticTimeMode;
-(NSInteger)_npsIntegerValueForPreferenceKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSInteger)tapToSpeakTimeAvailability;
-(NSInteger)voiceOverTapticChimesFrequencyEncoding;
-(NSInteger)voiceOverTapticChimesSoundType;
-(NSInteger)voiceOverTapticTimeEncoding;
-(id)_npsValueForPreferenceKey:(id)arg0 ;
-(id)_npsValueForPreferenceKey:(id)arg0 expectedClass:(Class)arg1 ;
-(id)accessibilityDomainAccessor;
-(id)localizedStringForKey:(id)arg0 ;
-(id)localizedStringForTapToSpeakTimeAvailability:(NSInteger)arg0 ;
-(id)localizedStringForTapticChimesFrequencyEncoding:(NSInteger)arg0 ;
-(id)localizedStringForTapticChimesSoundType:(NSInteger)arg0 ;
-(id)localizedStringForTapticTimeEncoding:(NSInteger)arg0 ;
-(id)tapToSpeakAvailabilityOptions;
-(id)tapToSpeakTimeLocalizedDescription;
-(id)tapToSpeakTimeLocalizedTitle;
-(id)tapticChimesFrequencyOptions;
-(id)tapticChimesLocalizedCurrentFrequency;
-(id)tapticChimesLocalizedCurrentSounds;
-(id)tapticChimesLocalizedDescription;
-(id)tapticChimesLocalizedTitle;
-(id)tapticChimesScheduleLocalizedTitle;
-(id)tapticChimesSoundsLocalizedTitle;
-(id)tapticChimesSoundsOptions;
-(id)tapticTimeEncodingOptions;
-(id)tapticTimeLocalizedCurrentMode;
-(id)tapticTimeLocalizedDescription;
-(id)tapticTimeLocalizedTitle;
-(id)tapticTimeModeLocalizedDescription;
-(void)_setNPSValue:(id)arg0 preferenceKey:(id)arg1 ;
-(void)setTapToSpeakTimeAvailability:(NSInteger)arg0 ;
-(void)setTapToSpeakTimeEnabled:(BOOL)arg0 ;
-(void)setVoiceOverTapticChimesEnabled:(BOOL)arg0 ;
-(void)setVoiceOverTapticChimesFrequencyEncoding:(NSInteger)arg0 ;
-(void)setVoiceOverTapticChimesSoundType:(NSInteger)arg0 ;
-(void)setVoiceOverTapticTimeEncoding:(NSInteger)arg0 ;
-(void)setVoiceOverTapticTimeMode:(BOOL)arg0 ;


@end


#endif