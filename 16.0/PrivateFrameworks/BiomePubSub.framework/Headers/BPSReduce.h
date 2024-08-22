// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSREDUCE_H
#define BPSREDUCE_H

@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSReduce : BMBookmarkablePublisher

@property (readonly, nonatomic) id *initialResult; // ivar: _initialResult
@property (readonly, copy, nonatomic) id *nextPartialResult; // ivar: _nextPartialResult
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithUpstream:(id)arg0 initialResult:(id)arg1 nextPartialResult:(id)arg2 ;
-(void)subscribe:(id)arg0 ;


@end


#endif