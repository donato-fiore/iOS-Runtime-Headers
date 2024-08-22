// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSBATCHRECOVERSTREAMINGRESPONSE_H
#define QSSBATCHRECOVERSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSBatchRecoverFinalResponse.h"
#import "QSSPronGuessResponse.h"

@interface QSSBatchRecoverStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchRecoverStreamingResponse _root;
}


@property (readonly, nonatomic) QSSBatchRecoverFinalResponse *contentAsQSSBatchRecoverFinalResponse;
@property (readonly, nonatomic) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchRecoverStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchRecoverStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BatchRecoverStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif