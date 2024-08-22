// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS29SETAUDIOLANGUAGEINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS29SETAUDIOLANGUAGEINTENTHANDLER_H

@protocol SetAudioLanguageIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents29SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
    ? deviceState;
}




-(id)init;
-(void)confirmSetAudioLanguage:(id)arg0 completion:(id)arg1 ;
-(void)handleSetAudioLanguage:(id)arg0 completion:(id)arg1 ;
-(void)resolveDeviceForSetAudioLanguage:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLanguageForSetAudioLanguage:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif