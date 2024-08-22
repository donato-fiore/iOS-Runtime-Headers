// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS27GETVOLUMELEVELINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS27GETVOLUMELEVELINTENTHANDLER_H

@protocol GetVolumeLevelIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents27GetVolumeLevelIntentHandler : NSObject <GetVolumeLevelIntentHandling>

 {
    ? deviceSelector;
    ? accessoryVolumeController;
    ? playbackController;
    ? deviceState;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmGetVolumeLevel:(id)arg0 completion:(id)arg1 ;
-(void)handleGetVolumeLevel:(id)arg0 completion:(id)arg1 ;
-(void)resolveDeviceForGetVolumeLevel:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif