// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOWNLINKSEGMENT_H
#define DOWNLINKSEGMENT_H

@class NSMutableDictionary;


#import "MultiwaySegment.h"

@interface DownlinkSegment : MultiwaySegment

@property (readonly) NSMutableDictionary *downlinkParticipantStats; // ivar: _downlinkParticipantStats
@property NSUInteger totalCellDupRxDataBytes; // ivar: _totalCellDupRxDataBytes
@property NSUInteger totalCellRxDataBytes; // ivar: _totalCellRxDataBytes


-(id)callStatsForParticipant:(id)arg0 ;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport;
-(void)accumulateAudioPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)accumulateVideoPerStreamGroupStats:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)addCellByteCountStats:(id)arg0 ;
-(void)addPerStreamGroupStats:(id)arg0 ;
-(void)dealloc;
-(void)finalizeVideoStreamGroupStats:(id)arg0 ;
-(void)processAudioStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)processStreamData:(id)arg0 forParticipant:(id)arg1 streamGroup:(id)arg2 ;
-(void)processVideoDegraded:(BOOL)arg0 forParticipant:(id)arg1 streamGroup:(id)arg2 ;
-(void)processVideoStreamData:(id)arg0 streamGroupStats:(id)arg1 ;
-(void)reportAudioPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)reportVideoPerStreamGroupStats:(id)arg0 streamGroup:(id)arg1 accumulatedStreamGroupStats:(id)arg2 ;
-(void)resetVideoDegradedForAllParticipants;
-(void)updateMinimumAndMaximumAVSyncOffset:(id)arg0 streamGroupStats:(id)arg1 ;


@end


#endif