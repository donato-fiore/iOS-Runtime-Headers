// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSBATCHTRANSLATIONRESPONSE_H
#define QSSBATCHTRANSLATIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationResponse _root;
}


@property (readonly, nonatomic) NSString *paragraph_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;
@property (readonly, nonatomic) NSArray *span;
@property (readonly, nonatomic) NSString *translated_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif