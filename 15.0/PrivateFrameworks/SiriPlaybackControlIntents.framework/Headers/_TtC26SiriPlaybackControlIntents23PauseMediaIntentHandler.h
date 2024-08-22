// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS23PAUSEMEDIAINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS23PAUSEMEDIAINTENTHANDLER_H

@protocol PauseMediaIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents23PauseMediaIntentHandler : NSObject <PauseMediaIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmPauseMedia:(id)arg0 completion:(id)arg1 ;
-(void)handlePauseMedia:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForPauseMedia:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif