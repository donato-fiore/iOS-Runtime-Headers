// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSINSTRUMENTMETRICS_H
#define SFSSINSTRUMENTMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSSInstrumentMetrics : NSObject

@property CGFloat audioDuration; // ivar: _audioDuration
@property (copy) NSString *audioOutputRoute; // ivar: _audioOutputRoute
@property (copy) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property NSInteger errorCode; // ivar: _errorCode
@property BOOL isSpeechRequest; // ivar: _isSpeechRequest
@property NSInteger requestCreatedTimestamp; // ivar: _requestCreatedTimestamp
@property (copy) NSString *resourceAssetKey; // ivar: _resourceAssetKey
@property NSInteger sourceOfTTS; // ivar: _sourceOfTTS
@property NSInteger speakBeginTimestamp; // ivar: _speakBeginTimestamp
@property NSInteger speakEndTimestamp; // ivar: _speakEndTimestamp
@property NSInteger synthesisBeginTimestamp; // ivar: _synthesisBeginTimestamp
@property NSInteger synthesisEndTimestamp; // ivar: _synthesisEndTimestamp
@property (copy) NSString *text; // ivar: _text
@property (copy) NSString *voiceAssetKey; // ivar: _voiceAssetKey


-(CGFloat)clockFactor;
-(CGFloat)playbackDuration;
-(CGFloat)speakLatency;
-(CGFloat)synthesisLatency;
-(id)description;
-(id)dictionaryMetrics;


@end


#endif