// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSGRAPHEMETOPHONEMERESPONSE_H
#define QSSGRAPHEMETOPHONEMERESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSGraphemeToPhonemeResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *GraphemeToPhonemeResponse _root;
}


@property (readonly, nonatomic) NSArray *aot_token_prons;
@property (readonly, nonatomic) NSString *g2p_model_version;
@property (readonly, nonatomic) NSString *g2p_version;
@property (readonly, nonatomic) BOOL is_pron_guessed;
@property (readonly, nonatomic) NSArray *jit_token_prons;
@property (readonly, nonatomic) NSArray *phonemes;
@property (readonly, nonatomic) NSString *phoneset_version;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct GraphemeToPhonemeResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct GraphemeToPhonemeResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif