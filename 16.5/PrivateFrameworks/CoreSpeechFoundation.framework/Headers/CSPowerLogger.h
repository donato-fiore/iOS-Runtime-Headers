// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPOWERLOGGER_H
#define CSPOWERLOGGER_H


#import <Foundation/Foundation.h>


@interface CSPowerLogger : NSObject



+(id)sharedPowerLogger;
-(void)_borealisPowerlog:(id)arg0 ;
-(void)_configPowerlog:(id)arg0 ;
-(void)_updateConfigToPreferencesWithLanguage:(id)arg0 withModelVersion:(id)arg1 ;
-(void)powerLogSecondPassWithResult:(NSUInteger)arg0 withSecondPassScore:(float)arg1 withPhId:(NSUInteger)arg2 ;
-(void)powerLogSiriConfigWithVoiceTriggerEnabled:(BOOL)arg0 withLanguage:(id)arg1 withModelVersion:(id)arg2 ;
-(void)powerLogVoiceTriggerStart;
-(void)powerLogVoiceTriggerStop;
-(void)powerWithNumFalseWakeup:(NSUInteger)arg0 withDuration:(CGFloat)arg1 withPhraseDict:(id)arg2 ;


@end


#endif