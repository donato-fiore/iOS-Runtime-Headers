// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTAUDIOFEEDBACKCONTROLLER_H
#define ASSISTANTAUDIOFEEDBACKCONTROLLER_H

@class PSListController, PSSpecifier;



@interface AssistantAudioFeedbackController : PSListController {
    PSSpecifier *_switchWithRingerSpecifier;
    PSSpecifier *_alwaysSpecifier;
    PSSpecifier *_handsfreeSpecifier;
    PSSpecifier *_groupSpecifier;
    NSInteger _useDeviceSpeakerForTTSPreference;
}




+(id)bundle;
-(id)_localizeTriggerString:(id)arg0 ;
-(id)alwaysShowRecognizedSpeech;
-(id)footerVariant;
-(id)isAlwaysPrintSiriResponseEnabled:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_refreshFooterForSpecifier:(id)arg0 ;
-(void)_updateSpecifiersFromPreferences;
-(void)preferencesDidChange:(id)arg0 ;
-(void)setAlwaysPrintSiriResponseEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAlwaysShowRecognizedSpeech:(id)arg0 forSpecifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif