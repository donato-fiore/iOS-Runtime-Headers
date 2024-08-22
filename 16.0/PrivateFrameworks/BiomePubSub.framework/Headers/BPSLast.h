// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSLAST_H
#define BPSLAST_H

@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSLast : BMBookmarkablePublisher

@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithUpstream:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif