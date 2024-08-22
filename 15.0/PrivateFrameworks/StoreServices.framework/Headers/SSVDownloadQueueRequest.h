// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVDOWNLOADQUEUEREQUEST_H
#define SSVDOWNLOADQUEUEREQUEST_H



#import "SSRequest.h"

@interface SSVDownloadQueueRequest : SSRequest

@property (readonly, nonatomic) NSInteger queueType; // ivar: _queueType


-(id)copyXPCEncoding;
-(id)initWithQueueType:(NSInteger)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif