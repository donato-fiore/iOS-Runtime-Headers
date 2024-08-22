// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDACCOUNTOPERATION_H
#define HMDCLOUDACCOUNTOPERATION_H

@class NSOperation, NSUUID;
@protocol OS_dispatch_queue;



@interface HMDCloudAccountOperation : NSOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) id *operationBlock; // ivar: _operationBlock


-(id)description;
// -(id)initWithBlock:(id)arg0 clientQueue:(unk)arg1  ;
-(void)main;


@end


#endif