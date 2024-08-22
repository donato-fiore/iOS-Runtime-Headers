// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSSINK_H
#define BPSSINK_H

@class NSString;
@protocol BPSSubscriber, BPSCancellable;

#import <Foundation/Foundation.h>

#import "BPSSubscriptionStatus.h"

@interface BPSSink : NSObject <BPSSubscriber, BPSCancellable>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger demand; // ivar: _demand
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *receivedCompletion; // ivar: _receivedCompletion
@property (copy, nonatomic) id *receivedValue; // ivar: _receivedValue
@property (retain, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
// -(id)initWithReceiveBookmarkedCompletion:(id)arg0 receiveInput:(unk)arg1  ;
// -(id)initWithReceiveCompletion:(id)arg0 receiveInput:(unk)arg1  ;
-(id)newBookmark;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif