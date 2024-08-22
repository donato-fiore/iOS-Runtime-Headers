// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS28SETSHUFFLESTATEINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS28SETSHUFFLESTATEINTENTHANDLER_H

@protocol SetShuffleStateIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents28SetShuffleStateIntentHandler : NSObject <SetShuffleStateIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
    ? deviceState;
}




-(id)init;
-(void)confirmSetShuffleState:(id)arg0 completion:(id)arg1 ;
-(void)handleSetShuffleState:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSetShuffleState:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif