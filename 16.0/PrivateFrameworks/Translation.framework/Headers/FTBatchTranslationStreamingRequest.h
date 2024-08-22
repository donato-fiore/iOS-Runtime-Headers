// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTBATCHTRANSLATIONSTREAMINGREQUEST_H
#define FTBATCHTRANSLATIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTBatchTranslationFeedbackRequest.h"
#import "FTBatchTranslationLoggingRequest.h"
#import "FTBatchTranslationRequest.h"

@interface FTBatchTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationStreamingRequest _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (readonly, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (readonly, nonatomic) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property (readonly, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (readonly, nonatomic) NSInteger content_type;


+(Class)content_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif