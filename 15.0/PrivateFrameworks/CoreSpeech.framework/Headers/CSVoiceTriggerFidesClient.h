// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERFIDESCLIENT_H
#define CSVOICETRIGGERFIDESCLIENT_H

@class CSAudioCircularBuffer, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate>



@property (weak, nonatomic) CSAudioCircularBuffer *audioBuffer; // ivar: _audioBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)_lastTriggerDataWithResult:(id)arg0 ;
-(id)_medicalIDAge;
-(id)_medicalIDName;
-(id)init;
-(void)_logDESRecordWithType:(NSInteger)arg0 result:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;
-(void)voiceTriggerGotSuperVector:(id)arg0 ;


@end


#endif