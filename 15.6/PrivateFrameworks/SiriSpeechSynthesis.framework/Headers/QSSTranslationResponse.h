// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSTRANSLATIONRESPONSE_H
#define QSSTRANSLATIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationResponse _root;
}


@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) NSArray *engine_output;
@property (readonly, nonatomic) NSArray *n_best_translated_phrases;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;
@property (readonly, nonatomic) NSString *sequence_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif