// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSBATCHTRANSLATIONSTREAMINGRESPONSE_H
#define QSSBATCHTRANSLATIONSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSBatchTranslationResponse.h"
#import "QSSFinalBlazarResponse.h"

@interface QSSBatchTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationStreamingResponse _root;
}


@property (readonly, nonatomic) QSSBatchTranslationResponse *contentAsQSSBatchTranslationResponse;
@property (readonly, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BatchTranslationStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif