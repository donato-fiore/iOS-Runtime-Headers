// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEBATCHRECOVERSTREAMINGREQUEST_H
#define QSSMUTABLEBATCHRECOVERSTREAMINGREQUEST_H



#import "QSSBatchRecoverStreamingRequest.h"
#import "QSSStartBatchRecoverRequest.h"

@interface QSSMutableBatchRecoverStreamingRequest : QSSBatchRecoverStreamingRequest

@property (copy, nonatomic) QSSStartBatchRecoverRequest *contentAsQSSStartBatchRecoverRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif