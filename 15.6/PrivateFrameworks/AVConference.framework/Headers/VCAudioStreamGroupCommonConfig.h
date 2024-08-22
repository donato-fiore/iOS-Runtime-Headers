// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOSTREAMGROUPCOMMONCONFIG_H
#define VCAUDIOSTREAMGROUPCOMMONCONFIG_H


#import <Foundation/Foundation.h>


@interface VCAudioStreamGroupCommonConfig : NSObject

@property (nonatomic) unsigned int audioChannelIndex; // ivar: _audioChannelIndex
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) *unk didProcessSamplesCallback; // ivar: _didProcessSamplesCallback
@property (nonatomic) *void didProcessSamplesCallbackContext; // ivar: _didProcessSamplesCallbackContext
@property (nonatomic) BOOL isGKVoiceChat; // ivar: _isGKVoiceChat
@property (nonatomic) BOOL isMuted; // ivar: _isMuted
@property (nonatomic) NSInteger powerSpectrumStreamToken; // ivar: _powerSpectrumStreamToken
@property (nonatomic) unsigned int preferredIOSampleRate; // ivar: _preferredIOSampleRate
@property (nonatomic) unsigned int preferredIOSamplesPerFrame; // ivar: _preferredIOSamplesPerFrame
@property (nonatomic) int processID; // ivar: _processID


-(void)dealloc;


@end


#endif