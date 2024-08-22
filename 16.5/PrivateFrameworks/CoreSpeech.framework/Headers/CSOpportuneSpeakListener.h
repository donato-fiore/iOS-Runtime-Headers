// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSOPPORTUNESPEAKLISTENER_H
#define CSOPPORTUNESPEAKLISTENER_H

@class CSPlainAudioFileWriter, CSAudioTimeConverter, NSString, CSAudioRecordContext, NSMutableArray;
@protocol CSAudioStreamProvidingDelegate, CSSPGEndpointAnalyzerDelegate, OS_dispatch_queue, CSAudioSessionProviding, CSAudioStreamProviding, CSOpportuneSpeakListenerDelegate;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"
#import "CSSPGEndpointAnalyzer.h"

@interface CSOpportuneSpeakListener : NSObject <CSAudioStreamProvidingDelegate, CSSPGEndpointAnalyzerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alignBufferQueue; // ivar: _alignBufferQueue
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) NSObject<CSAudioSessionProviding> *audioSessionProvider; // ivar: _audioSessionProvider
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) NSObject<CSAudioStreamProviding> *audioStreamProvider; // ivar: _audioStreamProvider
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSOpportuneSpeakListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isMediaPlayingNow; // ivar: _isMediaPlayingNow
@property (retain, nonatomic) CSAudioRecordContext *latestContext; // ivar: _latestContext
@property (retain, nonatomic) NSMutableArray *remoteVADAlignBuffer; // ivar: _remoteVADAlignBuffer
@property (nonatomic) NSUInteger remoteVADAlignCount; // ivar: _remoteVADAlignCount
@property (nonatomic) int remoteVADSPGRatio; // ivar: _remoteVADSPGRatio
@property (nonatomic) NSUInteger runningSampleCount; // ivar: _runningSampleCount
@property (retain, nonatomic) CSSPGEndpointAnalyzer *spgEndpointAnalyzer; // ivar: _spgEndpointAnalyzer
@property (readonly) Class superclass;


-(BOOL)_popRemoteVADSignal;
-(BOOL)_shouldReportBoron;
-(id)init;
-(void)_addRemoteVADSignal:(BOOL)arg0 ;
-(void)_resetAlignBuffer;
-(void)_startRequestWithCompletion:(id)arg0 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)spgEndpointAnalyzer:(id)arg0 hasSilenceScoreEstimate:(CGFloat)arg1 clientProcessedAudioTimeMS:(float)arg2 ;
-(void)startListenWithOption:(id)arg0 completion:(id)arg1 ;
-(void)stopListenWithCompletion:(id)arg0 ;
-(void)stopListenWithStateReset:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif