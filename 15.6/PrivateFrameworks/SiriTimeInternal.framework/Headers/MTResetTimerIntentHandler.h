// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTRESETTIMERINTENTHANDLER_H
#define MTRESETTIMERINTENTHANDLER_H

@class NSString;
@protocol INResetTimerIntentHandling;


#import "MTUpdateTimerIntentHandler.h"

@interface MTResetTimerIntentHandler : MTUpdateTimerIntentHandler <INResetTimerIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_responseToResetTimerIntent:(id)arg0 withResetTimers:(id)arg1 error:(id)arg2 ;
-(void)_handleResetTimer:(id)arg0 completion:(id)arg1 ;
-(void)handleResetTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveTargetTimerForResetTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif