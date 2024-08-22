// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSDRIVABLESINK_H
#define BPSDRIVABLESINK_H

@class NSString;
@protocol BPSSubscriber, BPSCancellable;

#import <Foundation/Foundation.h>

#import "BPSSubscriptionStatus.h"

@interface BPSDrivableSink : NSObject <BPSSubscriber, BPSCancellable>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *receivedCompletion; // ivar: _receivedCompletion
@property (copy, nonatomic) id *shouldContinue; // ivar: _shouldContinue
@property (retain, nonatomic) BPSSubscriptionStatus *status; // ivar: _status
@property (readonly) Class superclass;


+(id)new;
-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
// -(id)initWithReceiveBookmarkedCompletion:(id)arg0 shouldContinue:(unk)arg1  ;
// -(id)initWithReceiveCompletion:(id)arg0 shouldContinue:(unk)arg1  ;
-(id)newBookmark;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif