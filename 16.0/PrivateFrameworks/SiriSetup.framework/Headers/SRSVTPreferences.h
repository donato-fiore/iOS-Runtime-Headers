// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSVTPREFERENCES_H
#define SRSVTPREFERENCES_H

@class VTPreferences;

#import <Foundation/Foundation.h>


@interface SRSVTPreferences : NSObject {
    VTPreferences *_preferences;
}




-(BOOL)voiceTriggerDuringPhoneCallEnabled;
-(BOOL)voiceTriggerEnabled;
-(id)init;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg0 ;
-(void)setVoiceTriggerDuringPhoneCallEnabled:(BOOL)arg0 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg0 ;


@end


#endif