// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPAUSERESUMETIMERINTENTHANDLER_H
#define MTPAUSERESUMETIMERINTENTHANDLER_H

@class NSString;
@protocol INPauseTimerIntentHandling, INResumeTimerIntentHandling;


#import "MTUpdateTimerIntentHandler.h"

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler <INPauseTimerIntentHandling, INResumeTimerIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_responseToPauseTimerIntent:(id)arg0 withPausedTimers:(id)arg1 error:(id)arg2 dryRun:(BOOL)arg3 ;
-(id)_responseToResumeTimerIntent:(id)arg0 withResumedTimers:(id)arg1 error:(id)arg2 dryRun:(BOOL)arg3 ;
-(void)_handlePauseTimer:(id)arg0 dryRun:(BOOL)arg1 completion:(id)arg2 ;
-(void)_handleResumeTimer:(id)arg0 dryRun:(BOOL)arg1 completion:(id)arg2 ;
-(void)handlePauseTimer:(id)arg0 completion:(id)arg1 ;
-(void)handleResumeTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolvePauseMultipleForPauseTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveResumeMultipleForResumeTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTargetTimerForPauseTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTargetTimerForResumeTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif