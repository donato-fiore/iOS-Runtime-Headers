// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTONLINETRANSLATIONENGINE_H
#define _LTONLINETRANSLATIONENGINE_H

@class NSOperationQueue, NSDate, AFSettingsConnection, NSString;
@protocol _LTTranslationEngine, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "FTMtService.h"
#import "FTBlazarService.h"
#import "_LTOspreySpeechTranslationSession.h"
#import "_LTBatchTranslationResponseHandler.h"
#import "_LTTextToSpeechCache.h"

@interface _LTOnlineTranslationEngine : NSObject <_LTTranslationEngine>

 {
    NSOperationQueue *_sendQueue;
    FTMtService *_service;
    FTBlazarService *_blazarService;
    FTBlazarService *_systemService;
    FTBlazarService *_webTaskService;
    NSObject<OS_dispatch_queue> *_translationQueue;
    _LTOspreySpeechTranslationSession *_speechSession;
    _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_serverTimer;
    NSDate *_startTime;
    AFSettingsConnection *_assistantSettingsConnection;
    NSInteger _dataSharingOptInStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache; // ivar: _ttsCache


+(id)blazarServiceWithBundleID:(id)arg0 ;
+(void)initialize;
-(BOOL)_hasOngoingSpeechSession;
-(BOOL)translatesPair:(id)arg0 ;
-(id)_blazarService;
-(id)_serviceForTask:(NSInteger)arg0 ;
-(id)_systemService;
-(id)_tokenizeString:(id)arg0 inLocale:(id)arg1 ;
-(id)_webTaskService;
-(id)init;
-(void)_speechSessionCompletedWithError:(id)arg0 ;
-(void)_translateParagraph:(id)arg0 index:(NSInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)cancelServerTimeout;
-(void)cancelSpeechTranslation;
-(void)endAudio;
-(void)endpoint;
-(void)preheatAsynchronously:(BOOL)arg0 withContext:(id)arg1 ;
-(void)sendBatchTranslationRequestWithDelegate:(id)arg0 ;
-(void)serverTimeoutFired;
-(void)setLanguagesRecognized:(id)arg0 ;
-(void)speak:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)startServerTimeoutTimer;
-(void)startSpeechTranslationWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg0 text:(id)arg1 delegate:(id)arg2 ;
// -(void)translate:(id)arg0 withContext:(id)arg1 paragraphResult:(id)arg2 completion:(unk)arg3  ;
-(void)translateSentence:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)updateServerTimeout;


@end


#endif