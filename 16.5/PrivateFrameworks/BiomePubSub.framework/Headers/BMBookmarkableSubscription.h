// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMBOOKMARKABLESUBSCRIPTION_H
#define BMBOOKMARKABLESUBSCRIPTION_H

@protocol BMBookmarkableSubscription;


#import "BPSSubscription.h"

@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>





-(id)newBookmark;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif