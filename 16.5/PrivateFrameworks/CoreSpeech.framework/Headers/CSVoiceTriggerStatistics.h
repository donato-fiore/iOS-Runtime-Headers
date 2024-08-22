// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERSTATISTICS_H
#define CSVOICETRIGGERSTATISTICS_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate>

 {
    NSUInteger _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _consecutivePHSRejects;
    CGFloat _lastPHSReject;
    NSUInteger _consecutiveVTRejects;
    NSUInteger _firstPassTriggerCount;
    NSUInteger _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
    NSMutableArray *_vtEstimationStatistics;
    NSMutableDictionary *_vtDailyMetadata;
    BOOL _vtEstimationStatisticsAreStale;
    BOOL _vtDailyMetadataIsStale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(CGFloat)getLastPHSRejectTime;
-(NSUInteger)firstPassTriggerCount;
-(NSUInteger)getPHSRejectCount;
-(NSUInteger)getVTRejectCount;
-(NSUInteger)triggerCount;
-(id)getVoiceTriggerDailyMetadata;
-(id)getVoiceTriggerStatistics;
-(id)init;
-(int)_convertToFirstPassSource:(id)arg0 ;
-(void)clearFalseFirstPassTriggersPerHour;
-(void)clearFirstPassTriggerCount;
-(void)clearTriggerCount;
-(void)increaseFalseFirstPassTriggersPerHour;
-(void)increaseTriggerCount;
-(void)incrementFirstPassTriggerCount;
-(void)incrementPHSRejectCount;
-(void)incrementVTRejectCount;
-(void)resetPHSRejectCount;
-(void)resetVTEstimationStatistics;
-(void)updateVTEstimationStatistics:(id)arg0 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;
-(void)voiceTriggerDidRejected:(id)arg0 deviceId:(id)arg1 ;


@end


#endif