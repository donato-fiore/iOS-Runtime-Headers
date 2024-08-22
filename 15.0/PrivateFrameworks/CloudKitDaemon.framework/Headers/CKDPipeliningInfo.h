// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPIPELININGINFO_H
#define CKDPIPELININGINFO_H

@class NSMutableArray;
@protocol CKDOperationPipelining, OS_dispatch_group, OS_dispatch_queue, CKDURLRequestPipelining;

#import <Foundation/Foundation.h>


@interface CKDPipeliningInfo : NSObject

@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (weak, nonatomic) NSObject<CKDOperationPipelining> *operation; // ivar: _operation
@property (retain, nonatomic) NSMutableArray *perRequestCallbackBlocks; // ivar: _perRequestCallbackBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup; // ivar: _perRequestCallbackGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue; // ivar: _perRequestCallbackQueue
@property (nonatomic) BOOL perRequestCallbackQueueSuspended; // ivar: _perRequestCallbackQueueSuspended
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup; // ivar: _perRequestGroup
@property (retain, nonatomic) NSObject<CKDURLRequestPipelining> *request; // ivar: _request


-(id)initWithRequest:(id)arg0 operation:(id)arg1 ;
-(void)addPerRequestCallbackBlock:(id)arg0 ;
-(void)cancelAndDisablePerRequestCallbackBlocks;
-(void)dealloc;
-(void)disablePerRequestCallbackBlocks;
-(void)resumeCallbackQueue;
-(void)suspendCallbackQueue;


@end


#endif