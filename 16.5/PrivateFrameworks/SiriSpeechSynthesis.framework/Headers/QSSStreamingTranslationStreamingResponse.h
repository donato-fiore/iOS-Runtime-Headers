// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSSTREAMINGTRANSLATIONSTREAMINGRESPONSE_H
#define QSSSTREAMINGTRANSLATIONSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSTranslationResponse.h"

@interface QSSStreamingTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StreamingTranslationStreamingResponse _root;
}


@property (readonly, nonatomic) QSSTranslationResponse *contentAsQSSTranslationResponse;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StreamingTranslationStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StreamingTranslationStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::StreamingTranslationStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif