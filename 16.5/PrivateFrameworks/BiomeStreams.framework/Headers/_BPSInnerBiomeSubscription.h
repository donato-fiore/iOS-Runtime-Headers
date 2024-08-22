// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BPSINNERBIOMESUBSCRIPTION_H
#define _BPSINNERBIOMESUBSCRIPTION_H

@class BMBookmarkableSubscription, BMStoreEnumerator, NSString;
@protocol BPSSubscriber;


#import "BMStreamsAccessClient.h"

@interface _BPSInnerBiomeSubscription : BMBookmarkableSubscription {
    BMStoreEnumerator *_enumerator;
    os_unfair_lock_s _lock;
    id<BPSSubscriber> *_downstream;
    NSInteger _pendingDemand;
    BOOL _recursion;
    NSString *_streamId;
    BMStreamsAccessClient *_accessClient;
}




-(id)initWithStreamEnumerator:(id)arg0 downstream:(id)arg1 streamId:(id)arg2 accessClient:(id)arg3 ;
-(id)newBookmark;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif