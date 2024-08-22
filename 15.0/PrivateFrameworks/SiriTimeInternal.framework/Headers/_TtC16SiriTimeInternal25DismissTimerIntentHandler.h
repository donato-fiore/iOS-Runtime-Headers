// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRITIMEINTERNAL25DISMISSTIMERINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL25DISMISSTIMERINTENTHANDLER_H

@protocol DismissTimerIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal25DismissTimerIntentHandler : NSObject <DismissTimerIntentHandling>

 {
    ? siriTimerManager;
}




-(id)init;
-(void)confirmDismissTimer:(id)arg0 completion:(id)arg1 ;
-(void)handleDismissTimer:(id)arg0 completion:(id)arg1 ;


@end


#endif