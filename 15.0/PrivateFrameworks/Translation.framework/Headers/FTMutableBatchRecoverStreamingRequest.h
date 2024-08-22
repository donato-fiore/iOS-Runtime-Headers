// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEBATCHRECOVERSTREAMINGREQUEST_H
#define FTMUTABLEBATCHRECOVERSTREAMINGREQUEST_H



#import "FTBatchRecoverStreamingRequest.h"
#import "FTStartBatchRecoverRequest.h"

@interface FTMutableBatchRecoverStreamingRequest : FTBatchRecoverStreamingRequest

@property (copy, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif