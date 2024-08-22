// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEBATCHRECOVERSTREAMINGREQUEST_H
#define FTMUTABLEBATCHRECOVERSTREAMINGREQUEST_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBatchRecoverStreamingRequest.h"
#import "FTStartBatchRecoverRequest.h"

@interface FTMutableBatchRecoverStreamingRequest : FTBatchRecoverStreamingRequest

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (copy, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property (nonatomic) NSInteger content_type;


+(Class)content_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForMutableObject:(id)arg0 ;
+(NSInteger)content_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif