// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16SIRITIMEINTERNAL23PAUSETIMERINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL23PAUSETIMERINTENTHANDLER_H

@protocol INPauseTimerIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal23PauseTimerIntentHandler : NSObject <INPauseTimerIntentHandling>

 {
    ? siriTimerManager;
}




-(id)init;
-(void)handlePauseTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveTargetTimerForPauseTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif