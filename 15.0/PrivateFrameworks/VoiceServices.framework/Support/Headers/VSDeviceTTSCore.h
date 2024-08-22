// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSDEVICETTSCORE_H
#define VSDEVICETTSCORE_H

@class NSOperation, VSAudioData, NSError, VSInstrumentMetrics, VSSpeechRequest, VSVoiceAssetSelection, VSVoiceResourceAsset;
@protocol VSDeviceTTSCoreDelegate;


#import "VSCachingService.h"
#import "VSSpeechEngine.h"
#import "VSPrewarmService.h"
#import "VSStreamAudioData.h"
#import "VSVoiceBooster.h"

@interface VSDeviceTTSCore : NSOperation

@property (retain, nonatomic) VSCachingService *cachingService; // ivar: _cachingService
@property (readonly, nonatomic) VSAudioData *compressedAudio; // ivar: _compressedAudio
@property (weak, nonatomic) NSObject<VSDeviceTTSCoreDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VSSpeechEngine *engine; // ivar: _engine
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (weak, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) VSPrewarmService *prewarmService; // ivar: _prewarmService
@property (readonly, nonatomic) VSSpeechRequest *request; // ivar: _request
@property (retain, nonatomic) VSVoiceAssetSelection *selectedVoice; // ivar: _selectedVoice
@property (retain, nonatomic) VSVoiceResourceAsset *selectedVoiceResource; // ivar: _selectedVoiceResource
@property (readonly, nonatomic) VSStreamAudioData *streamAudio; // ivar: _streamAudio
@property (retain, nonatomic) VSVoiceBooster *voiceBooster; // ivar: _voiceBooster


-(id)getCacheForHash:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)prepareForSynthesis;
-(id)taskHash;
-(id)voiceSelectionWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)voiceSelection_noRetry_WithRequest:(id)arg0 error:(*id)arg1 ;
-(void)adjustWordTimingInfo:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)reportAudio:(id)arg0 ;
-(void)reportWordTimingInfo:(id)arg0 ;


@end


#endif