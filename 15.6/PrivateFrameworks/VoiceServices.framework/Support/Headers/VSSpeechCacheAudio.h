// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSPEECHCACHEAUDIO_H
#define VSSPEECHCACHEAUDIO_H

@class VSAudioData, NSData, NSString, NSArray;
@protocol VSSpeechCacheItem;

#import <Foundation/Foundation.h>


@interface VSSpeechCacheAudio : NSObject <VSSpeechCacheItem>



@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (readonly, nonatomic) VSAudioData *audio; // ivar: _audio
@property (retain, nonatomic) NSData *audioData; // ivar: _audioData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSInteger magicVersion; // ivar: _magicVersion
@property (nonatomic) NSInteger packetCount; // ivar: _packetCount
@property (retain, nonatomic) NSData *packetDescriptions; // ivar: _packetDescriptions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timingInfos; // ivar: _timingInfos
@property (readonly, nonatomic) NSString *voiceKey; // ivar: _voiceKey


-(id)initWithKey:(id)arg0 audio:(id)arg1 wordTimingInfo:(id)arg2 voiceKey:(id)arg3 ;
-(id)initWithKey:(id)arg0 data:(id)arg1 ;
-(id)serializedData;


@end


#endif