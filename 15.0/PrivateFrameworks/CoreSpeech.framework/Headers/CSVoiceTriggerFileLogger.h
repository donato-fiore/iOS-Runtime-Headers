// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERFILELOGGER_H
#define CSVOICETRIGGERFILELOGGER_H

@class NSString;
@protocol CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)_shouldLogDeviceId:(id)arg0 ;
-(BOOL)_shouldSkipLogging:(id)arg0 ;
-(id)_audioLogDirectory;
-(id)_metaFilenameWithPrefix:(id)arg0 deviceId:(id)arg1 ;
-(id)_timeStampString;
-(id)init;
-(void)_clearOldLoggingFiles;
-(void)_writeDictionary:(id)arg0 toPath:(id)arg1 ;
-(void)selfTriggerDetector:(id)arg0 didDetectSelfTrigger:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;


@end


#endif