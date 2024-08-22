// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSBATCHTRANSLATIONREQUEST_H
#define QSSBATCHTRANSLATIONREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationRequest _root;
}


@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) NSInteger opt_in_status;
@property (readonly, nonatomic) NSArray *paragraphs;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSString *task;
@property (readonly, nonatomic) NSString *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif