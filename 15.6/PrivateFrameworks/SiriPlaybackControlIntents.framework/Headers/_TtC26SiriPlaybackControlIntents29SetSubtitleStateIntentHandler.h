// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS29SETSUBTITLESTATEINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS29SETSUBTITLESTATEINTENTHANDLER_H

@protocol SetSubtitleStateIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents29SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
    ? deviceState;
}




-(id)init;
-(void)confirmSetSubtitleState:(id)arg0 completion:(id)arg1 ;
-(void)handleSetSubtitleState:(id)arg0 completion:(id)arg1 ;
-(void)resolveDeviceForSetSubtitleState:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLanguageForSetSubtitleState:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif