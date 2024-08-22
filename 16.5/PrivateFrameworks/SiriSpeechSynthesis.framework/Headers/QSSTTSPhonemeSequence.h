// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSTTSPHONEMESEQUENCE_H
#define QSSTTSPHONEMESEQUENCE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTTSPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TTSPhonemeSequence _root;
}


@property (readonly, nonatomic) NSArray *word_phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSPhonemeSequence *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSPhonemeSequence *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TTSPhonemeSequence> )addObjectToBuffer:(*void)arg0 ;


@end


#endif