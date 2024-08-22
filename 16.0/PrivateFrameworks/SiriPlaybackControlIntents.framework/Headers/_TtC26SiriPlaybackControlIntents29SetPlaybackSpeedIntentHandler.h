// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS29SETPLAYBACKSPEEDINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS29SETPLAYBACKSPEEDINTENTHANDLER_H

@protocol SetPlaybackSpeedIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents29SetPlaybackSpeedIntentHandler : NSObject <SetPlaybackSpeedIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? aceServiceHelper;
    ? deviceState;
}




-(id)init;
-(void)confirmSetPlaybackSpeed:(id)arg0 completion:(id)arg1 ;
-(void)handleSetPlaybackSpeed:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSetPlaybackSpeed:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolvePlaybackSpeedTypeForSetPlaybackSpeed:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSpeedMagnitudeForSetPlaybackSpeed:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif