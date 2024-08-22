// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS27SETVOLUMELEVELINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS27SETVOLUMELEVELINTENTHANDLER_H

@protocol SetVolumeLevelIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents27SetVolumeLevelIntentHandler : NSObject <SetVolumeLevelIntentHandling>

 {
    ? deviceSelector;
    ? accessoryVolumeController;
    ? deviceState;
    ? playbackController;
    ? userDefaultsProvider;
    ? audioSession;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmSetVolumeLevel:(id)arg0 completion:(id)arg1 ;
-(void)handleSetVolumeLevel:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSetVolumeLevel:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveVolumeLevelForSetVolumeLevel:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif