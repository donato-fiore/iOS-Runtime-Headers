// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPDISPATCHQUEUEEXCLUSIVEACCESSTOKEN_H
#define MPDISPATCHQUEUEEXCLUSIVEACCESSTOKEN_H

@protocol MPExclusiveAccessToken, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id *_owner;
}




+(id)tokenWithQueue:(id)arg0 owner:(id)arg1 ;
-(id)_init;
-(void)assertHasExclusiveAccessForOwner:(id)arg0 ;


@end


#endif