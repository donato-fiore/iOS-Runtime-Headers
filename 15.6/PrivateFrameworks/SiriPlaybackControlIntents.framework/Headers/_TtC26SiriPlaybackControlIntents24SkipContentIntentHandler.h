// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS24SKIPCONTENTINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS24SKIPCONTENTINTENTHANDLER_H

@protocol SkipContentIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents24SkipContentIntentHandler : NSObject <SkipContentIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmSkipContent:(id)arg0 completion:(id)arg1 ;
-(void)handleSkipContent:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSkipContent:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif