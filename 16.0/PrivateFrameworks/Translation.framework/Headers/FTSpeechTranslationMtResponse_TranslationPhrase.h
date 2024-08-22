// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTSPEECHTRANSLATIONMTRESPONSE_TRANSLATIONPHRASE_H
#define FTSPEECHTRANSLATIONMTRESPONSE_TRANSLATIONPHRASE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSpeechTranslationMtResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationPhrase _root;
}


@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL low_confidence;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) NSString *translation_phrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationPhrase *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationPhrase *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse_::TranslationPhrase> )addObjectToBuffer:(*void)arg0 ;


@end


#endif