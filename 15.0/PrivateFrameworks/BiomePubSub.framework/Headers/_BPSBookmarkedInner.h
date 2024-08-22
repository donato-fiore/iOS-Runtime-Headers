// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BPSBOOKMARKEDINNER_H
#define _BPSBOOKMARKEDINNER_H

@class NSString;
@protocol BPSSubscriber, BMBookmark;


#import "BMBookmarkableSubscription.h"
#import "BPSSubscription.h"

@interface _BPSBookmarkedInner : BMBookmarkableSubscription <BPSSubscriber>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *state; // ivar: _state
@property (retain, nonatomic) BPSSubscription *subscription; // ivar: _subscription
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BMBookmark> *upstreamBookmark; // ivar: _upstreamBookmark
@property (copy, nonatomic) NSString *upstreamClassName; // ivar: _upstreamClassName


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 downstream:(id)arg1 state:(id)arg2 ;
-(id)newBookmark;
-(void)_updateBookmarkWhenLocked;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif