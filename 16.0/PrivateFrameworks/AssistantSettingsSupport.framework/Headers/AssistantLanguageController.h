// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTLANGUAGECONTROLLER_H
#define ASSISTANTLANGUAGECONTROLLER_H

@class PSListItemsController, NSDate;


#import "AssistantSettingsSignalEmitter.h"

@interface AssistantLanguageController : PSListItemsController {
    NSDate *_startDate;
    AssistantSettingsSignalEmitter *_signalEmitter;
}




+(id)bundle;
-(void)_signalDidSelectVoice;
-(void)languageCodeDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif