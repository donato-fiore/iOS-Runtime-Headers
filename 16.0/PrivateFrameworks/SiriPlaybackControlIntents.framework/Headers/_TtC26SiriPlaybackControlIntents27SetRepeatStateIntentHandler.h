// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS27SETREPEATSTATEINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS27SETREPEATSTATEINTENTHANDLER_H

@protocol SetRepeatStateIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents27SetRepeatStateIntentHandler : NSObject <SetRepeatStateIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
    ? deviceState;
}




-(id)init;
-(void)confirmSetRepeatState:(id)arg0 completion:(id)arg1 ;
-(void)handleSetRepeatState:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSetRepeatState:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif