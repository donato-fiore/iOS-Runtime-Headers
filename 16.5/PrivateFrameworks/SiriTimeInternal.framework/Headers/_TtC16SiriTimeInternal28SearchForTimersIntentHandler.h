// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16SIRITIMEINTERNAL28SEARCHFORTIMERSINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL28SEARCHFORTIMERSINTENTHANDLER_H

@protocol INSearchForTimersIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal28SearchForTimersIntentHandler : NSObject <INSearchForTimersIntentHandling>

 {
    ? siriTimerManager;
}




-(id)init;
-(void)handleSearchForTimers:(id)arg0 completion:(id)arg1 ;


@end


#endif