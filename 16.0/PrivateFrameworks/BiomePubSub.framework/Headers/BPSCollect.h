// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSCOLLECT_H
#define BPSCOLLECT_H

@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSCollect : BMBookmarkablePublisher

@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)initWithUpstream:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif