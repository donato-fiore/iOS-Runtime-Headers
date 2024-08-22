// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERFILELOGGER_H
#define CSVOICETRIGGERFILELOGGER_H

@class NSString;
@protocol CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSSpeechManager.h"

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fileLoggingEnabled; // ivar: _fileLoggingEnabled
@property (nonatomic) BOOL geckoLoggingEnabled; // ivar: _geckoLoggingEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (readonly) Class superclass;


-(BOOL)_shouldLogDeviceId:(id)arg0 ;
-(BOOL)_shouldSkipLogging:(id)arg0 ;
-(id)_audioLogDirectory;
-(id)_geckoLogDirectory;
-(id)_metaFilenameWithRootDir:(id)arg0 prefix:(id)arg1 deviceId:(id)arg2 ;
-(id)_timeStampString;
-(id)init;
-(id)initWithSpeechManager:(id)arg0 fileLoggingEnabled:(BOOL)arg1 geckoLoggingEnabled:(BOOL)arg2 ;
-(void)_clearOldGeckoLoggingFiles;
-(void)_clearOldLoggingFiles;
-(void)_logGeckoWithFilePrefix:(id)arg0 WithResult:(id)arg1 ;
-(void)_logVTResult:(id)arg0 metaFilePath:(id)arg1 audioFilePath:(id)arg2 completion:(id)arg3 ;
-(void)_writeDictionary:(id)arg0 toPath:(id)arg1 ;
-(void)selfTriggerDetector:(id)arg0 didDetectSelfTrigger:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;


@end


#endif