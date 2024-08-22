// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS27WHATDIDTHEYSAYINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS27WHATDIDTHEYSAYINTENTHANDLER_H

@protocol WhatDidTheySayIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents27WhatDidTheySayIntentHandler : NSObject <WhatDidTheySayIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? deviceState;
    ? aceServiceHelper;
    ? timer;
    ? queue;
    ? assertion;
    ? initialSubtitleStateDisabled;
}




-(id)init;
-(void)confirmWhatDidTheySay:(id)arg0 completion:(id)arg1 ;
-(void)handleWhatDidTheySay:(id)arg0 completion:(id)arg1 ;
-(void)resolveDeviceForWhatDidTheySay:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif