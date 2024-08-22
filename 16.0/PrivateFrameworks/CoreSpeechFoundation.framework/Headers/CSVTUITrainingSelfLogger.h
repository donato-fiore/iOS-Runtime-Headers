// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTUITRAININGSELFLOGGER_H
#define CSVTUITRAININGSELFLOGGER_H


#import <Foundation/Foundation.h>


@interface CSVTUITrainingSelfLogger : NSObject



+(id)sharedLogger;
-(void)logSiriSetupPHSEnrollmentDigitalZeroDetectionCompletedWithSiriSetupID:(id)arg0 withPageNumber:(int)arg1 withPhId:(id)arg2 withMaxNumContinuousZeros:(int)arg3 withMaxNumAllowedContinuousZeros:(int)arg4 withIsMaxNumContinuousZerosOverThreshold:(BOOL)arg5 ;
-(void)logSiriSetupPHSEnrollmentUtteranceCompletedWithSiriSetupID:(id)arg0 withPageNumber:(int)arg1 withPhId:(id)arg2 withTopScoreForUtterance:(float)arg3 withStartSampleCount:(int)arg4 withEndSampleCount:(int)arg5 withHasSpeechDetected:(int)arg6 ;


@end


#endif