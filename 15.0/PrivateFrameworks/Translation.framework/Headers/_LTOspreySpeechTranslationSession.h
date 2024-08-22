// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTOSPREYSPEECHTRANSLATIONSESSION_H
#define _LTOSPREYSPEECHTRANSLATIONSESSION_H

@class NSError, NSMutableDictionary, NSMutableArray, NSString;
@protocol FTSpeechTranslationResponseDelegate, _LTSpeechCompressorDelegate, OS_dispatch_queue, OS_dispatch_source, _LTSpeechTranslationDelegate;

#import <Foundation/Foundation.h>

#import "FTSpeechTranslationStreamingContext.h"
#import "_LTTranslationContext.h"
#import "_LTLanguageDetectionResult.h"
#import "_LTSpeechCompressor.h"
#import "_LTTextToSpeechCache.h"

@interface _LTOspreySpeechTranslationSession : NSObject <FTSpeechTranslationResponseDelegate, _LTSpeechCompressorDelegate>

 {
    FTSpeechTranslationStreamingContext *_streamContext;
    _LTTranslationContext *_context;
    BOOL _sentAudio;
    BOOL _sentEndAudio;
    BOOL _endpointedSpeech;
    BOOL _didReceiveAudioLimitExceededResponse;
    BOOL _didReceivePartialRecognitionResponse;
    BOOL _didReceiveFinalRecognitionResponse;
    BOOL _didReceiveTranslationResponse;
    BOOL _didReceiveTTSResponse;
    BOOL _didReceiveFinalBlazarResponse;
    BOOL _didTimeout;
    NSError *_error;
    _LTLanguageDetectionResult *_lidResult;
    NSMutableDictionary *_finalASRResults;
    NSMutableArray *_mtResults;
    NSMutableArray *_confirmedTranslations;
    _LTSpeechCompressor *_speechCompressor;
    NSUInteger _audioPacketCount;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_serverTimer;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endpointTimeout; // ivar: _endpointTimeout
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialOnlineTimeout; // ivar: _initialOnlineTimeout
@property (nonatomic) CGFloat onlineTimeout; // ivar: _onlineTimeout
@property (readonly) Class superclass;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache; // ivar: _ttsCache


-(id)_primaryLanguageRecognized;
-(id)_translationForLocale:(id)arg0 ;
-(id)initWithService:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(id)initWithService:(id)arg0 context:(id)arg1 text:(id)arg2 delegate:(id)arg3 ;
-(void)_handleAudioLimitExceededResponse:(id)arg0 ;
-(void)_handleFinalBlazarResponse:(id)arg0 ;
-(void)_handleFinalRecognitionResponse:(id)arg0 ;
-(void)_handlePartialRecognitionResponse:(id)arg0 ;
-(void)_handleServerEndpointFeatures:(id)arg0 ;
-(void)_handleTTSResponse:(id)arg0 ;
-(void)_handleTranslationResponse:(id)arg0 ;
-(void)cancel;
-(void)cancelServerTimeout;
-(void)confirmDataIfNeeded;
-(void)didCompressPackets:(id)arg0 totalPacketCount:(NSUInteger)arg1 ;
-(void)endpoint;
-(void)initCommon;
-(void)sendAnalyticsEvent;
-(void)sendAudioData:(id)arg0 ;
-(void)sendEndAudio;
-(void)serverTimeoutFired;
-(void)setLanguagesRecognized:(id)arg0 ;
-(void)startServerTimeoutTimer;
-(void)streamDidReceiveSpeechTranslationStreamingResponse:(id)arg0 ;
-(void)streamFailVerifySpeechTranslationStreamingResponse:(id)arg0 ;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)updateServerTimeout:(CGFloat)arg0 ;


@end


#endif