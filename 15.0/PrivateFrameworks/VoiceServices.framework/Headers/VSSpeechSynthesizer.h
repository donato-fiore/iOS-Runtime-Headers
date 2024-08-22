// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPEECHSYNTHESIZER_H
#define VSSPEECHSYNTHESIZER_H

@class NSString, NSUUID, NSMutableDictionary;
@protocol VSSpeechConnectionDelegate, OS_dispatch_queue, VSSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>

#import "VSSpeechConnection.h"

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>

 {
    NSString *_clientBundleIdentifier;
    unsigned int _audioSessionID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    VSSpeechConnection *_xpcConnection;
    NSString *_identifier;
    ? _synthesizerFlags;
}


@property (copy, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (weak, nonatomic) NSObject<VSSpeechSynthesizerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *durationRequests; // ivar: _durationRequests
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (retain, nonatomic) NSString *voice; // ivar: _voice
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)playVoicePreviewForLanguageCode:(id)arg0 gender:(NSInteger)arg1 completion:(id)arg2 ;
+(BOOL)playVoicePreviewForLanguageCode:(id)arg0 voiceName:(id)arg1 completion:(id)arg2 ;
+(BOOL)playVoicePreviewForLanguageCode:(id)arg0 voiceName:(id)arg1 previewType:(NSInteger)arg2 completion:(id)arg3 ;
+(id)characterClassCountForUtterance:(id)arg0 language:(id)arg1 ;
+(id)errorWithReason:(id)arg0 ;
+(id)sharedInstance;
+(id)validateAudioCachingRequest:(id)arg0 ;
+(id)validateAudioRequest:(id)arg0 ;
+(id)validatePrewarmRequest:(id)arg0 ;
+(id)validateRequest:(id)arg0 ;
+(void)stopPlayingVoicePreview;
-(BOOL)continueSpeakingWithError:(*id)arg0 ;
-(BOOL)isSpeaking;
-(BOOL)isSystemSpeaking;
-(BOOL)pauseSpeakingAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)queryPhaticCapability:(id)arg0 ;
-(BOOL)stopSpeakingAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)stopSpeakingPresynthesizedAudioSynchronously:(BOOL)arg0 error:(*id)arg1 ;
-(CGFloat)estimateDurationOfRequest:(id)arg0 ;
-(float)maximumRate;
-(float)minimumRate;
-(id)_continueSpeakingRequest;
-(id)_pauseSpeakingRequestAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 ;
-(id)_stopSpeakingPresynthesizedAudioRequest:(id)arg0 synchronously:(BOOL)arg1 ;
-(id)_stopSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2 ;
-(id)availableFootprintsForVoice:(id)arg0 languageCode:(id)arg1 ;
-(id)availableLanguageCodes;
-(id)availableVoicesForLanguageCode:(id)arg0 ;
-(id)cachePresynthesizedAudioRequest:(id)arg0 ;
-(id)init;
-(id)initForInputFeedback;
-(id)initWithAccessoryID:(id)arg0 ;
-(id)prewarmIfNeededWithRequest:(id)arg0 ;
-(id)speechString;
-(id)startSpeakingPresynthesizedAudioRequest:(id)arg0 ;
-(id)startSpeakingRequest:(id)arg0 ;
-(id)startSynthesizingRequest:(id)arg0 ;
-(void)beginAudioPowerUpdateWithReply:(id)arg0 ;
-(void)cancelAudioRequest:(id)arg0 ;
-(void)cancelDownloads:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)cleanUnusedAssets:(id)arg0 ;
-(void)connection:(id)arg0 invalidatedWithError:(id)arg1 ;
-(void)connection:(id)arg0 presynthesizedAudioRequest:(id)arg1 didStopAtEnd:(BOOL)arg2 error:(id)arg3 ;
-(void)connection:(id)arg0 presynthesizedAudioRequest:(id)arg1 successWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg0 presynthesizedAudioRequestDidStart:(id)arg1 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didGenerateAudioChunk:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didStopAtEnd:(BOOL)arg2 phonemesSpoken:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 successWithInstrumentMetrics:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 willSpeakMark:(NSInteger)arg2 inRange:(struct _NSRange )arg3 ;
-(void)connection:(id)arg0 speechRequestDidContinue:(id)arg1 ;
-(void)connection:(id)arg0 speechRequestDidPause:(id)arg1 ;
-(void)connection:(id)arg0 speechRequestDidStart:(id)arg1 ;
-(void)connection:(id)arg0 synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)endAudioPowerUpdate;
-(void)estimateDurationOfRequest:(id)arg0 completion:(id)arg1 ;
-(void)forwardStreamObject:(id)arg0 ;
-(void)getAllAutoDownloadedVoiceAssets:(id)arg0 ;
-(void)getAutoDownloadedVoiceAssets:(id)arg0 ;
-(void)getLocalVoiceAssets:(id)arg0 ;
-(void)getLocalVoiceAssetsForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)getLocalVoiceResources:(id)arg0 ;
-(void)getVoiceInfoForLanguageCode:(id)arg0 footprint:(NSInteger)arg1 gender:(NSInteger)arg2 type:(NSInteger)arg3 reply:(id)arg4 ;
-(void)getVoiceInfoForLanguageCode:(id)arg0 name:(id)arg1 footprint:(NSInteger)arg2 gender:(NSInteger)arg3 type:(NSInteger)arg4 reply:(id)arg5 ;
-(void)getVoiceResourceForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)invokeDaemon:(id)arg0 ;
-(void)killDaemon;
-(void)playVoicePreviewForLanguageCode:(id)arg0 voiceName:(id)arg1 previewType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg0 ;
-(void)stopPlayingVoicePreview;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg0 ;
-(void)useSpecificAudioSession:(unsigned int)arg0 ;


@end


#endif