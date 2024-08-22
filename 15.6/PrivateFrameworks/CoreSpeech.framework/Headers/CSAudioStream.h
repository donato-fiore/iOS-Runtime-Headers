// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOSTREAM_H
#define CSAUDIOSTREAM_H

@class NSString, NSUUID, NSHashTable;
@protocol CSAudioStreamProvidingDelegate, CSAudioStreamProviding;

#import <Foundation/Foundation.h>

#import "CSAudioStartStreamOption.h"
#import "CSAudioStreamRequest.h"

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAudioStreamProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isWeakStream; // ivar: _isWeakStream
@property (readonly, nonatomic) NSUInteger lastForwardedSampleCount; // ivar: _lastForwardedSampleCount
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, setter=setScheduledFutureSample:) BOOL scheduledFutureSample; // ivar: _scheduledFutureSample
@property (readonly, nonatomic) NSUInteger startSampleCount; // ivar: _startSampleCount
@property (retain, nonatomic, setter=setStartStreamOption:) CSAudioStartStreamOption *startStreamOption; // ivar: _startStreamOption
@property (weak, nonatomic) NSObject<CSAudioStreamProviding> *streamProvider; // ivar: _streamProvider
@property (retain, nonatomic) CSAudioStreamRequest *streamRequest; // ivar: _streamRequest
@property BOOL streaming; // ivar: _streaming
@property (retain) NSUUID *streamingUUID; // ivar: _streamingUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *tandemStreams; // ivar: _tandemStreams


-(BOOL)isNarrowBand;
-(BOOL)isStreaming;
-(BOOL)prepareAudioStreamSyncWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithAudioStreamProvider:(id)arg0 streamName:(id)arg1 streamRequest:(id)arg2 ;
-(id)recordSettings;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 lastForwardedSampleCount:(NSUInteger)arg2 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didHardwareConfigurationChange:(NSInteger)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)dealloc;
-(void)prepareAudioStreamWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)startAudioStreamWithOption:(id)arg0 completion:(id)arg1 ;
-(void)stopAudioStreamWithOption:(id)arg0 completion:(id)arg1 ;
-(void)updateAudioStreamStartTimeInSampleCount:(NSUInteger)arg0 ;


@end


#endif