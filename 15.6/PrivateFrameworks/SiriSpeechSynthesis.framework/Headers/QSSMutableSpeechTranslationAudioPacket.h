// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESPEECHTRANSLATIONAUDIOPACKET_H
#define QSSMUTABLESPEECHTRANSLATIONAUDIOPACKET_H

@class NSArray;


#import "QSSSpeechTranslationAudioPacket.h"

@interface QSSMutableSpeechTranslationAudioPacket : QSSSpeechTranslationAudioPacket

@property (copy, nonatomic) NSArray *audio_frames;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif