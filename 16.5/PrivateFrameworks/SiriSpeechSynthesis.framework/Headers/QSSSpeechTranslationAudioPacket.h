// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSSPEECHTRANSLATIONAUDIOPACKET_H
#define QSSSPEECHTRANSLATIONAUDIOPACKET_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSSpeechTranslationAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationAudioPacket _root;
}


@property (readonly, nonatomic) NSArray *audio_frames;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationAudioPacket *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationAudioPacket *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket> )addObjectToBuffer:(*void)arg0 ;


@end


#endif