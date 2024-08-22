// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSHANDLEEVENTS_H
#define BPSHANDLEEVENTS_H

@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSHandleEvents : BMBookmarkablePublisher {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) id *receiveCancel; // ivar: _receiveCancel
@property (readonly, nonatomic) id *receiveCompletion; // ivar: _receiveCompletion
@property (readonly, nonatomic) id *receiveOutput; // ivar: _receiveOutput
@property (readonly, nonatomic) id *receiveRequest; // ivar: _receiveRequest
@property (readonly, nonatomic) id *receiveSubscription; // ivar: _receiveSubscription
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(id)bookmarkableUpstreams;
// -(id)initWithUpstream:(id)arg0 receiveSubscription:(id)arg1 receiveOutput:(unk)arg2 receiveCompletion:(id)arg3 receiveCancel:(unk)arg4 receiveRequest:(id)arg5  ;
-(void)connect;
-(void)subscribe:(id)arg0 ;


@end


#endif