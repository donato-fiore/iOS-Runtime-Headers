// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPSTORESOCIALTRANSIENTSTATE_H
#define _MPSTORESOCIALTRANSIENTSTATE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPStoreSocialRequestOperation.h"
#import "MPModelSocialPerson.h"

@interface _MPStoreSocialTransientState : NSObject {
    NSInteger _followState;
    NSInteger _followPendingRequestState;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPStoreSocialRequestOperation *_latestFollowOperation;
    MPStoreSocialRequestOperation *_latestFollowPendingRequestOperation;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSInteger followPendingRequestState;
@property (readonly, nonatomic) NSInteger followState;
@property (readonly, nonatomic) MPModelSocialPerson *person; // ivar: _person


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPerson:(id)arg0 ;
-(id)newOperationForTransientFollowPendingRequestState:(NSInteger)arg0 completion:(id)arg1 ;
-(id)newOperationForTransientFollowState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_endIfNeeded;


@end


#endif