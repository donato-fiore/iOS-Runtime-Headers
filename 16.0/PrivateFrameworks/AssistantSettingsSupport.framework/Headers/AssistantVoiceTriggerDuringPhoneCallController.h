// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTVOICETRIGGERDURINGPHONECALLCONTROLLER_H
#define ASSISTANTVOICETRIGGERDURINGPHONECALLCONTROLLER_H

@class PSListController;


#import "AssistantSettingsSignalEmitter.h"

@interface AssistantVoiceTriggerDuringPhoneCallController : PSListController {
    AssistantSettingsSignalEmitter *_signalEmitter;
}




+(id)bundle;
-(id)_localizedFooterText;
-(id)_localizedHangUpTriggerPhrase;
-(id)specifiers;
-(id)voiceTriggerDuringPhoneCallEnabled:(id)arg0 ;
-(void)_signalCallHangUpEnabled;
-(void)setVoiceTriggerDuringPhoneCallEnabled:(id)arg0 specifier:(id)arg1 ;


@end


#endif