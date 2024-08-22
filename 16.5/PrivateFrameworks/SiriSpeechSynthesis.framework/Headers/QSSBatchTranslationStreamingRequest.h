// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSBATCHTRANSLATIONSTREAMINGREQUEST_H
#define QSSBATCHTRANSLATIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSBatchTranslationFeedbackRequest.h"
#import "QSSBatchTranslationLoggingRequest.h"
#import "QSSBatchTranslationRequest.h"
#import "QSSTranslationSupportedLanguagesRequest.h"

@interface QSSBatchTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationStreamingRequest _root;
}


@property (readonly, nonatomic) QSSBatchTranslationFeedbackRequest *contentAsQSSBatchTranslationFeedbackRequest;
@property (readonly, nonatomic) QSSBatchTranslationLoggingRequest *contentAsQSSBatchTranslationLoggingRequest;
@property (readonly, nonatomic) QSSBatchTranslationRequest *contentAsQSSBatchTranslationRequest;
@property (readonly, nonatomic) QSSTranslationSupportedLanguagesRequest *contentAsQSSTranslationSupportedLanguagesRequest;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif