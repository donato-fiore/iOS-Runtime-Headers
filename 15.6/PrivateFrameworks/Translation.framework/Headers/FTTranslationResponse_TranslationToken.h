// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTTRANSLATIONRESPONSE_TRANSLATIONTOKEN_H
#define FTTRANSLATIONRESPONSE_TRANSLATIONTOKEN_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAlignment.h"

@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationToken _root;
}


@property (readonly, nonatomic) BOOL add_space_after;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) FTAlignment *mt_alignment;
@property (readonly, nonatomic) NSString *token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationToken *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationToken *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken> )addObjectToBuffer:(*void)arg0 ;


@end


#endif