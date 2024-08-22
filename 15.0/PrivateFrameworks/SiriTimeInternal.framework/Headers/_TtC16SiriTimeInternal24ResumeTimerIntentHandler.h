// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRITIMEINTERNAL24RESUMETIMERINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL24RESUMETIMERINTENTHANDLER_H

@protocol INResumeTimerIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal24ResumeTimerIntentHandler : NSObject <INResumeTimerIntentHandling>

 {
    ? siriTimerManager;
}




-(id)init;
-(void)handleResumeTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveTargetTimerForResumeTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif