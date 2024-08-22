// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAWDAUDIO_H
#define PLAWDAUDIO_H

@class PLEntryNotificationOperatorComposition, NSDate;


#import "PLAWDAuxMetrics.h"

@interface PLAWDAudio : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *audioRailCallback; // ivar: _audioRailCallback
@property (retain) NSDate *startTime; // ivar: _startTime


+(id)entryAggregateDefinitionAwdAudio;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(void)finalizeAudioTable;
-(void)handleAudioRailCallback:(id)arg0 ;
-(void)resetAudioTable;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif