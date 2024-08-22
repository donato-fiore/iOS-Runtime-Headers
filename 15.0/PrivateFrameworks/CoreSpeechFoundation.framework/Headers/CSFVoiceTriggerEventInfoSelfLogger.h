// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSFVOICETRIGGEREVENTINFOSELFLOGGER_H
#define CSFVOICETRIGGEREVENTINFOSELFLOGGER_H


#import <Foundation/Foundation.h>


@interface CSFVoiceTriggerEventInfoSelfLogger : NSObject



+(CGFloat)_round:(CGFloat)arg0 withPlaces:(int)arg1 ;
+(id)_convertToFirstPassChannelSelectionScores:(id)arg0 ;
+(id)_convertToSELFVTEI:(id)arg0 ;
+(id)_getStartedMessageWithFirstPassInfo:(id)arg0 ;
+(id)sanitizeEventInfoForLogging:(id)arg0 ;
+(id)sharedLogger;
+(int)_convertJarvisTriggerModeString:(id)arg0 ;
+(int)_convertPowerState:(unsigned int)arg0 ;
+(int)_convertToFirstPassSource:(id)arg0 ;
+(int)_convertToMatchResult:(unsigned int)arg0 ;
+(int)_convertToSELFRejectedReason:(NSUInteger)arg0 ;
+(int)_convertToTwoShotPromptType:(NSInteger)arg0 ;
+(void)_emitTwoShotClientEventWithTwoShotTransitionContext:(id)arg0 withMHUUID:(id)arg1 ;
+(void)_emitVTClientEventWithVTContext:(id)arg0 withMHUUID:(id)arg1 ;
-(id)init;
-(void)logCancelledEventWithMHUUID:(id)arg0 ;
-(void)logRejectEventWithVTEI:(id)arg0 withMHUUID:(id)arg1 withSecondPassResult:(NSUInteger)arg2 ;
-(void)logStartEventWithFirstPassStartedInfo:(id)arg0 withMHUUID:(id)arg1 ;
-(void)logTriggerEventWithVTEI:(id)arg0 withMHUUID:(id)arg1 ;
-(void)logTwoShotDetectedWithMHUUID:(id)arg0 ;
-(void)logTwoShotEndEventWithSuppresedAlert:(BOOL)arg0 withTimedOut:(BOOL)arg1 withMHUUID:(id)arg2 ;
-(void)logTwoShotStartEventWithPromptType:(unsigned int)arg0 withMHUUID:(id)arg1 ;


@end


#endif