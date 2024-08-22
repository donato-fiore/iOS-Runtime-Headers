// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPEECHRECOGNITIONTASK_H
#define SFSPEECHRECOGNITIONTASK_H

@class AFDictationConnection, NSOperationQueue, NSString, NSError;
@protocol AFDictationDelegate, SFSpeechRecognitionBufferDelegate, SFLocalSpeechRecognitionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFLocalSpeechRecognitionClient.h"
#import "SFSpeechRecognitionRequest.h"

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate, SFLocalSpeechRecognitionDelegate>

 {
    AFDictationConnection *_dictationConnection;
    SFLocalSpeechRecognitionClient *_sflsrClient;
    NSOperationQueue *_externalQueue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSError *_error;
    BOOL _completed;
    BOOL _running;
}


@property (readonly, nonatomic) NSInteger _taskHint; // ivar: _taskHint
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFinishing) BOOL finishing; // ivar: _finishing
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


+(void)initialize;
-(float)averagePower;
-(float)peakPower;
-(id)_initWithRequest:(id)arg0 queue:(id)arg1 languageCode:(id)arg2 taskHint:(NSInteger)arg3 ;
-(void)addRecordedSpeechSampleData:(id)arg0 ;
-(void)cancel;
-(void)dictationConnection:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg0 ;
-(void)finish;
-(void)handleSpeechRecognitionDidFailWithError:(id)arg0 ;
-(void)localSpeechRecognitionClient:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)localSpeechRecognitionClient:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)arg0 ;
-(void)stopSpeech;


@end


#endif