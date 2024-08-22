// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGERSTATAGGREGATOR_H
#define CSVOICETRIGGERSTATAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface CSVoiceTriggerStatAggregator : NSObject

@property (nonatomic) NSUInteger lastAggTimeFalseWakeUp; // ivar: _lastAggTimeFalseWakeUp
@property (nonatomic) NSUInteger numFalseWakeUp; // ivar: _numFalseWakeUp


+(id)sharedAggregator;
-(id)init;
-(void)logAOPFirstPassTriggerWakeupLatency:(float)arg0 ;
-(void)logAudioZeroRun:(float)arg0 ;
-(void)logFalseWakeUp:(BOOL)arg0 ;
-(void)logSecondPassResult:(int)arg0 eventInfo:(id)arg1 triggerAPWakeUp:(BOOL)arg2 ;
-(void)logTriggerLengthSampleCountStatistics:(NSUInteger)arg0 withFirstPassDeterministicTriggerLengthSampleCount:(NSUInteger)arg1 ;


@end


#endif