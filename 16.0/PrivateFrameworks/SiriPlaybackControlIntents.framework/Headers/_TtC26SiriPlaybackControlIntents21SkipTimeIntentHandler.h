// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS21SKIPTIMEINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS21SKIPTIMEINTENTHANDLER_H

@protocol SkipTimeIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents21SkipTimeIntentHandler : NSObject <SkipTimeIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
    ? deviceState;
}




-(id)init;
-(void)confirmSkipTime:(id)arg0 completion:(id)arg1 ;
-(void)handleSkipTime:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSkipTime:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveDurationForSkipTime:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif