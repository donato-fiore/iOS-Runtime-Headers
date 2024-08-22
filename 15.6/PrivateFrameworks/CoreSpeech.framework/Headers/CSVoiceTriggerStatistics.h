// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGERSTATISTICS_H
#define CSVOICETRIGGERSTATISTICS_H

@class NSString;
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
-(id)init;
-(void)clearFalseFirstPassTriggersPerHour;
-(void)clearFirstPassTriggerCount;
-(void)clearTriggerCount;
-(void)increaseFalseFirstPassTriggersPerHour;
-(void)increaseTriggerCount;
-(void)incrementFirstPassTriggerCount;
-(void)incrementPHSRejectCount;
-(void)incrementVTRejectCount;
-(void)resetPHSRejectCount;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;
-(void)voiceTriggerDidRejected:(id)arg0 deviceId:(id)arg1 ;


@end


#endif