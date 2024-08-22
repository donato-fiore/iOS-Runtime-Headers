// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SERVERSPEECHCONTEXT_H
#define SERVERSPEECHCONTEXT_H

@class NSArray, NSString, NSMutableString;

#import <Foundation/Foundation.h>

#import "ServerSpeechRequest.h"

@interface ServerSpeechContext : NSObject

@property (nonatomic) NSInteger err; // ivar: _err
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) int lasProcessedMarkerCharIndex; // ivar: _lasProcessedMarkerCharIndex
@property (nonatomic) unsigned int lastAudioSessionID; // ivar: _lastAudioSessionID
@property (retain, nonatomic) NSArray *lastChannels; // ivar: _lastChannels
@property (nonatomic) NSInteger lastFootprint; // ivar: _lastFootprint
@property (retain, nonatomic) NSString *lastLanguageCode; // ivar: _lastLanguageCode
@property (nonatomic) float lastPitch; // ivar: _lastPitch
@property (nonatomic) float lastRate; // ivar: _lastRate
@property (retain, nonatomic) NSString *lastRequestedVoiceName; // ivar: _lastRequestedVoiceName
@property (retain, nonatomic) NSString *lastVoiceName; // ivar: _lastVoiceName
@property (nonatomic) NSInteger lastVoiceType; // ivar: _lastVoiceType
@property (nonatomic) float lastVolume; // ivar: _lastVolume
@property (nonatomic) BOOL needsReset; // ivar: _needsReset
@property (nonatomic) NSInteger nextMarkerAction; // ivar: _nextMarkerAction
@property (nonatomic) NSInteger nextMarkerToActOn; // ivar: _nextMarkerToActOn
@property (nonatomic) int outputByteCount; // ivar: _outputByteCount
@property (nonatomic) *OpaqueAudioFileID outputFileID; // ivar: _outputFileID
@property (retain, nonatomic) NSString *parentRequestLanguageCode; // ivar: _parentRequestLanguageCode
@property (nonatomic) NSUInteger pauseTime; // ivar: _pauseTime
@property (retain, nonatomic) NSMutableString *phonemesSpoken; // ivar: _phonemesSpoken
@property (nonatomic) *__TTSPlayback playback; // ivar: _playback
@property (retain, nonatomic) ServerSpeechRequest *request; // ivar: _request
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (nonatomic) int textRangeOffset; // ivar: _textRangeOffset
@property (nonatomic) NSUInteger waitTimeDuringPause; // ivar: _waitTimeDuringPause
@property (nonatomic) BOOL wasStoppedBeforeFullSynthesis; // ivar: _wasStoppedBeforeFullSynthesis


-(void)resetForNextRequest;


@end


#endif