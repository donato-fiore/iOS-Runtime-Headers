// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFVOICETRIGGEREVENTINFOSELFLOGGER_H
#define CSFVOICETRIGGEREVENTINFOSELFLOGGER_H


#import <Foundation/Foundation.h>


@interface CSFVoiceTriggerEventInfoSelfLogger : NSObject



+(id)sharedLogger;
-(void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id)arg0 ;
-(void)logCancelledEventWithMHUUID:(id)arg0 ;
-(void)logRejectEventWithVTEI:(id)arg0 withMHUUID:(id)arg1 withSecondPassResult:(NSUInteger)arg2 ;
-(void)logSiriLaunchCompletedWithVoiceTriggerEventInfo:(id)arg0 ;
-(void)logSiriLaunchStartedWithVoiceTriggerEventInfo:(id)arg0 ;
-(void)logStartEventWithFirstPassStartedInfo:(id)arg0 withMHUUID:(id)arg1 ;
-(void)logTriggerEventWithVTEI:(id)arg0 withMHUUID:(id)arg1 ;
-(void)logTwoShotDetectedWithMHUUID:(id)arg0 ;
-(void)logTwoShotEndEventWithSuppresedAlert:(BOOL)arg0 withTimedOut:(BOOL)arg1 withMHUUID:(id)arg2 ;
-(void)logTwoShotStartEventWithPromptType:(unsigned int)arg0 withMHUUID:(id)arg1 ;


@end


#endif