// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSEMPTY_H
#define BPSEMPTY_H



#import "BMBookmarkableSubscription.h"

@interface BPSEmpty : BMBookmarkableSubscription



-(id)upstreamSubscriptions;
-(void)cancel;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif