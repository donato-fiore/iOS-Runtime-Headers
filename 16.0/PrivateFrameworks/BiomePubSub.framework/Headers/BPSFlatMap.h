// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSFLATMAP_H
#define BPSFLATMAP_H

@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSFlatMap : BMBookmarkablePublisher

@property (readonly, nonatomic) NSInteger maxPublishers; // ivar: _maxPublishers
@property (readonly, nonatomic) id *transform; // ivar: _transform
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)initWithUpstream:(id)arg0 maxPublishers:(NSInteger)arg1 transform:(id)arg2 ;
-(void)subscribe:(id)arg0 ;


@end


#endif