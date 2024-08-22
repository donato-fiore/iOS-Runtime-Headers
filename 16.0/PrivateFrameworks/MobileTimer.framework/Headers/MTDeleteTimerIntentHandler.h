// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTDELETETIMERINTENTHANDLER_H
#define MTDELETETIMERINTENTHANDLER_H

@class NSString;
@protocol INDeleteTimerIntentHandling;


#import "MTTimerIntentHandler.h"

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_responseToDeleteTimerIntent:(id)arg0 withDeletedTimers:(id)arg1 error:(id)arg2 dryRun:(BOOL)arg3 ;
-(id)_timerFromIntentTargetTimer:(id)arg0 defaultState:(NSInteger)arg1 ;
-(void)_deleteTimer:(id)arg0 multiple:(BOOL)arg1 dryRun:(BOOL)arg2 completion:(id)arg3 ;
-(void)confirmDeleteTimer:(id)arg0 completion:(id)arg1 ;
-(void)handleDeleteTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveDeleteMultipleForDeleteTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTargetTimerForDeleteTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif