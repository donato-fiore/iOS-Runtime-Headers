// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPREMYRIADCOORDINATOR_H
#define CSPREMYRIADCOORDINATOR_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol CSVoiceTriggerDelegate, CSSecondPassProgressDelegate, CSSecondPassProgressProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSPreMyriadVoiceTriggerMetaData.h"

@interface CSPreMyriadCoordinator : NSObject <CSVoiceTriggerDelegate, CSSecondPassProgressDelegate>



@property (retain, nonatomic) NSMutableDictionary *accessoryVoiceTriggerMetaDataByDeviceId; // ivar: _accessoryVoiceTriggerMetaDataByDeviceId
@property (weak, nonatomic) NSObject<CSSecondPassProgressProviding> *builtInSeconPassProgressProvider; // ivar: _builtInSeconPassProgressProvider
@property (retain, nonatomic) CSPreMyriadVoiceTriggerMetaData *builtInVoiceTriggerMetaData; // ivar: _builtInVoiceTriggerMetaData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pendingBuiltInVoiceTriggerCompletionBlk; // ivar: _pendingBuiltInVoiceTriggerCompletionBlk
@property (nonatomic) NSUInteger pendingBuiltInVoiceTriggerDetectedTime; // ivar: _pendingBuiltInVoiceTriggerDetectedTime
@property (retain, nonatomic) NSDictionary *pendingBuiltInVoiceTriggerResult; // ivar: _pendingBuiltInVoiceTriggerResult
@property (copy, nonatomic) id *pendingRemoraVoiceTriggerCompletionBlk; // ivar: _pendingRemoraVoiceTriggerCompletionBlk
@property (nonatomic) NSUInteger pendingRemoraVoiceTriggerDetectedTime; // ivar: _pendingRemoraVoiceTriggerDetectedTime
@property (retain, nonatomic) NSString *pendingRemoraVoiceTriggerDeviceId; // ivar: _pendingRemoraVoiceTriggerDeviceId
@property (retain, nonatomic) NSDictionary *pendingRemoraVoiceTriggerResult; // ivar: _pendingRemoraVoiceTriggerResult
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<CSSecondPassProgressProviding> *remoraSecondPassProgressProvider; // ivar: _remoraSecondPassProgressProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


-(BOOL)_isRemoraSecondPassRunning;
-(BOOL)handlePendingBuiltInVoiceTriggerIfNeeded;
-(BOOL)handlePendingRemoraVoiceTriggerIfNeeded;
-(BOOL)isBultInVoiceTriggerEvent:(id)arg0 ;
-(BOOL)isRemoraVoiceTriggerEvent:(id)arg0 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(void)_clearPendingBuiltInVoiceTrigger;
-(void)_clearPendingRemoraVoiceTrigger;
-(void)_getHighestRemoraFirstPassGoodnessScore:(id)arg0 ;
-(void)keywordDetectorDidDetectKeyword;
-(void)raiseToSpeakDetected:(id)arg0 ;
-(void)secondPassDidStartForClient:(NSUInteger)arg0 deviceId:(id)arg1 withFirstPassEstimate:(CGFloat)arg2 ;
-(void)secondPassDidStopForClient:(NSUInteger)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;
-(void)voiceTriggerDidRejected:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerGotSuperVector:(id)arg0 ;


@end


#endif