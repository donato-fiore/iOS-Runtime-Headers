// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSBATCHTRANSLATIONFEEDBACKREQUEST_H
#define QSSBATCHTRANSLATIONFEEDBACKREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSBatchTranslationFeedbackRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationFeedbackRequest _root;
}


@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) NSString *errors;
@property (readonly, nonatomic) NSString *os_version;
@property (readonly, nonatomic) NSString *safari_version;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *source_content;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSString *translated_content;
@property (readonly, nonatomic) NSString *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationFeedbackRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationFeedbackRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationFeedbackRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif