// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS24RESUMEMEDIAINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS24RESUMEMEDIAINTENTHANDLER_H

@protocol ResumeMediaIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents24ResumeMediaIntentHandler : NSObject <ResumeMediaIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmResumeMedia:(id)arg0 completion:(id)arg1 ;
-(void)handleResumeMedia:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForResumeMedia:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif