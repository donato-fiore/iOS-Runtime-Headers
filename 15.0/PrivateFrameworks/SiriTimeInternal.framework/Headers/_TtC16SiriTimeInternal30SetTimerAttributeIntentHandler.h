// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRITIMEINTERNAL30SETTIMERATTRIBUTEINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL30SETTIMERATTRIBUTEINTENTHANDLER_H

@protocol INSetTimerAttributeIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal30SetTimerAttributeIntentHandler : NSObject <INSetTimerAttributeIntentHandling>

 {
    ? siriTimerManager;
}




-(id)init;
-(void)handleSetTimerAttribute:(id)arg0 completion:(id)arg1 ;
-(void)resolveTargetTimerForSetTimerAttribute:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveToDurationForSetTimerAttribute:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif