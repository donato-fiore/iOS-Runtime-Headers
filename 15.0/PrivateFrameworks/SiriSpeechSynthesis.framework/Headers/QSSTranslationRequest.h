// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSTRANSLATIONREQUEST_H
#define QSSTRANSLATIONREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSSiriPayloadTranslationInfo.h"
#import "QSSSiriTranslationInfo.h"
#import "QSSSpeechTranslationInfo.h"
#import "QSSWebTranslationInfo.h"

@interface QSSTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationRequest _root;
}


@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) BOOL disable_log;
@property (readonly, nonatomic) NSInteger opt_in_status;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *sequence_id;
@property (readonly, nonatomic) QSSSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (readonly, nonatomic) QSSSiriTranslationInfo *siri_translation_info;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) QSSSpeechTranslationInfo *speech_translation_info;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSString *task;
@property (readonly, nonatomic) NSArray *translation_phrase;
@property (readonly, nonatomic) QSSWebTranslationInfo *web_translation_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif