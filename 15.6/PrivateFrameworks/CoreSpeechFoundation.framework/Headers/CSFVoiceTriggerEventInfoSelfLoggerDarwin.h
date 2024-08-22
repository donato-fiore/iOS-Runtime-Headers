// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSFVOICETRIGGEREVENTINFOSELFLOGGERDARWIN_H
#define CSFVOICETRIGGEREVENTINFOSELFLOGGERDARWIN_H

@protocol OS_dispatch_queue;


#import "CSFVoiceTriggerEventInfoSelfLogger.h"
#import "CSFCircularEventsCacheBuffer.h"

@interface CSFVoiceTriggerEventInfoSelfLoggerDarwin : CSFVoiceTriggerEventInfoSelfLogger

@property (retain, nonatomic) CSFCircularEventsCacheBuffer *cancelledEvents; // ivar: _cancelledEvents
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *firstPassEvents; // ivar: _firstPassEvents
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *rejectEvents; // ivar: _rejectEvents


-(id)init;
-(void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id)arg0 ;
-(void)logCancelledEventWithMHUUID:(id)arg0 ;
-(void)logRejectEventWithVTEI:(id)arg0 withMHUUID:(id)arg1 withSecondPassResult:(NSUInteger)arg2 ;
-(void)logStartEventWithFirstPassStartedInfo:(id)arg0 withMHUUID:(id)arg1 ;
-(void)logTriggerEventWithVTEI:(id)arg0 withMHUUID:(id)arg1 ;
-(void)logTwoShotDetectedWithMHUUID:(id)arg0 ;
-(void)logTwoShotEndEventWithSuppresedAlert:(BOOL)arg0 withTimedOut:(BOOL)arg1 withMHUUID:(id)arg2 ;
-(void)logTwoShotStartEventWithPromptType:(unsigned int)arg0 withMHUUID:(id)arg1 ;


@end


#endif