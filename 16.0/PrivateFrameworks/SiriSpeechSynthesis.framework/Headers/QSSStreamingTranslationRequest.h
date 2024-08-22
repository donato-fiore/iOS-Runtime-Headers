// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSSTREAMINGTRANSLATIONREQUEST_H
#define QSSSTREAMINGTRANSLATIONREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSStreamingTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StreamingTranslationRequest _root;
}


@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) BOOL disable_log;
@property (readonly, nonatomic) BOOL final_message;
@property (readonly, nonatomic) NSInteger opt_in_status;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *sequence_id;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSString *task;
@property (readonly, nonatomic) NSString *translation_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StreamingTranslationRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StreamingTranslationRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::StreamingTranslationRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif