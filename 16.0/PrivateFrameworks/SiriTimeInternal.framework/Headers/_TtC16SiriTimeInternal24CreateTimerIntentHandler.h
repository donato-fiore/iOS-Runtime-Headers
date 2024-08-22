// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRITIMEINTERNAL24CREATETIMERINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL24CREATETIMERINTENTHANDLER_H

@protocol INCreateTimerIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal24CreateTimerIntentHandler : NSObject <INCreateTimerIntentHandling>

 {
    ? siriTimerManager;
}




-(id)init;
-(void)confirmCreateTimer:(id)arg0 completion:(id)arg1 ;
-(void)handleCreateTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveDurationForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLabelForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTypeForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif