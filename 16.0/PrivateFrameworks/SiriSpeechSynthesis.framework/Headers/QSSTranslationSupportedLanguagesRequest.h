// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTRANSLATIONSUPPORTEDLANGUAGESREQUEST_H
#define QSSTRANSLATIONSUPPORTEDLANGUAGESREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTranslationSupportedLanguagesRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationSupportedLanguagesRequest _root;
}


@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *task;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationSupportedLanguagesRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationSupportedLanguagesRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif