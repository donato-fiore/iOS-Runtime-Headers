// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSPEECHSYNTHESISCONFIGURATION_H
#define SVXSPEECHSYNTHESISCONFIGURATION_H

@class NSLocale, AFVoiceInfo;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SVXSpeechSynthesisConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, copy, nonatomic) AFVoiceInfo *outputVoiceInfo; // ivar: _outputVoiceInfo


+(id)configurationWithAudioSessionID:(unsigned int)arg0 ;
+(id)configurationWithLocale:(id)arg0 ;
+(id)configurationWithOutputVoiceInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLocale:(id)arg0 outputVoiceInfo:(id)arg1 audioSessionID:(unsigned int)arg2 ;


@end


#endif