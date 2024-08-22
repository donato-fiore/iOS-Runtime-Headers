// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSFUTURE_H
#define BPSFUTURE_H



#import "BPSPublisher.h"
#import "BPSSubscriberList.h"
#import "BPSFutureResult.h"

@interface BPSFuture : BPSPublisher {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) BPSSubscriberList *downstreams; // ivar: _downstreams
@property (retain, nonatomic) BPSFutureResult *result; // ivar: _result


-(id)initWithAttemptToFulfill:(id)arg0 ;
-(void)disassociate:(NSInteger)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif