// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSBATCHTRANSLATIONLOGGINGREQUEST_H
#define QSSBATCHTRANSLATIONLOGGINGREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSBatchTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationLoggingRequest _root;
}


@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int time_to_first_response;
@property (readonly, nonatomic) int time_to_page_complete;
@property (readonly, nonatomic) int time_to_viewport_complete;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationLoggingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationLoggingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationLoggingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif