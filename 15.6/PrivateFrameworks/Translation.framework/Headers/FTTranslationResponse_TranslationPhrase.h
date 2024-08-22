// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTTRANSLATIONRESPONSE_TRANSLATIONPHRASE_H
#define FTTRANSLATIONRESPONSE_TRANSLATIONPHRASE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTranslationResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationPhrase _root;
}


@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL low_confidence;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) NSArray *spans;
@property (readonly, nonatomic) NSArray *translated_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationPhrase *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationPhrase *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationPhrase> )addObjectToBuffer:(*void)arg0 ;


@end


#endif