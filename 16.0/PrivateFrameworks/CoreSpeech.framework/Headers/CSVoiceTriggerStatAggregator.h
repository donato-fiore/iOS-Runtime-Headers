// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERSTATAGGREGATOR_H
#define CSVOICETRIGGERSTATAGGREGATOR_H

@class NSString;
@protocol CSDigitalZeroReporting;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerStatAggregator : NSObject <CSDigitalZeroReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastAggTimeFalseWakeUp; // ivar: _lastAggTimeFalseWakeUp
@property (nonatomic) NSUInteger numFalseWakeUp; // ivar: _numFalseWakeUp
@property (readonly) Class superclass;


+(id)sharedAggregator;
-(id)init;
-(void)logAOPFirstPassTriggerWakeupLatency:(float)arg0 ;
-(void)logFalseWakeUp:(BOOL)arg0 ;
-(void)logSecondPassResult:(int)arg0 eventInfo:(id)arg1 triggerAPWakeUp:(BOOL)arg2 ;
-(void)logTriggerLengthSampleCountStatistics:(NSUInteger)arg0 withFirstPassDeterministicTriggerLengthSampleCount:(NSUInteger)arg1 ;
-(void)reportDigitalZerosWithAudioZeroRun:(float)arg0 ;


@end


#endif