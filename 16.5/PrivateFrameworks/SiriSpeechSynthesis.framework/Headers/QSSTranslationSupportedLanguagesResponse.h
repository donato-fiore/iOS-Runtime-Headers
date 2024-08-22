// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSTRANSLATIONSUPPORTEDLANGUAGESRESPONSE_H
#define QSSTRANSLATIONSUPPORTEDLANGUAGESRESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTranslationSupportedLanguagesResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationSupportedLanguagesResponse _root;
}


@property (readonly, nonatomic) NSArray *language_pairs;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationSupportedLanguagesResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationSupportedLanguagesResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif