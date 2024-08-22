// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDACCOUNT_H
#define HMDCLOUDACCOUNT_H

@class HMFObject, NSOperationQueue;
@protocol OS_dispatch_queue;



@interface HMDCloudAccount : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue


-(id)initWithClientQueue:(id)arg0 ;
-(void)addAccountOperation:(id)arg0 ;


@end


#endif