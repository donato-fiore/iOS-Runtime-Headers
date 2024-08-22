// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBLOCALSPEECHRECOGNIZERCLIENT_H
#define LBLOCALSPEECHRECOGNIZERCLIENT_H

@class NSXPCConnection, NSString;
@protocol LBLocalSpeechServiceDelegate, OS_dispatch_queue, LBLocalSpeechRecognizerClientDelegate;

#import <Foundation/Foundation.h>


@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate>

 {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LBLocalSpeechRecognizerClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString
@property (retain, nonatomic) NSString *xpcConnectionUUIDString; // ivar: _xpcConnectionUUIDString


+(BOOL)isInstalledFromStatusString:(id)arg0 ;
-(id)_connection;
-(id)_newConnection;
-(id)_service;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)disableLocalSpeechRecognitionForRequestId:(id)arg0 ;
-(void)invalidate;
-(void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)arg0 requestId:(id)arg1 endpointMode:(NSInteger)arg2 error:(id)arg3 ;
-(void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)arg0 rcId:(NSUInteger)arg1 speechPackage:(id)arg2 duration:(CGFloat)arg3 ;
-(void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)arg0 rcId:(NSUInteger)arg1 speechPackage:(id)arg2 duration:(CGFloat)arg3 metadata:(id)arg4 ;
-(void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)arg0 rcId:(NSUInteger)arg1 shouldAccept:(BOOL)arg2 mitigationSignal:(BOOL)arg3 featuresToLog:(id)arg4 ;
-(void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(id)arg0 speechPackage:(id)arg1 ;
-(void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)arg0 speechPackage:(id)arg1 ;
-(void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)arg0 speechPackage:(id)arg1 metadata:(id)arg2 ;
-(void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)arg0 language:(id)arg1 tokens:(id)arg2 ;
-(void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)arg0 language:(id)arg1 tokens:(id)arg2 metadata:(id)arg3 ;
-(void)localSpeechServiceDidReceivedVoiceIdScoreCard:(id)arg0 ;
-(void)pauseLocalSpeechRecognitionForRequestId:(id)arg0 ;
-(void)preheatLocalSpeechRecognitionWithLanguage:(id)arg0 source:(NSUInteger)arg1 ;
-(void)resetCacheAndCompileAllAssets;
-(void)resumeLocalRecognitionWithRequestId:(id)arg0 prefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3 ;
-(void)sendSpeechCorrectionInfo:(id)arg0 interactionIdentifier:(id)arg1 ;
-(void)setLocalSpeechRecognizerClientDelegate:(id)arg0 ;
-(void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)arg0 ;
-(void)stopLocalSpeechRecognitionTaskWithReason:(NSUInteger)arg0 ;
-(void)stopLocalSpeechRecognitionTaskWithReason:(NSUInteger)arg0 requestId:(id)arg1 ;


@end


#endif