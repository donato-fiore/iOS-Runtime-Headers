// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSCORRELATE_H
#define BPSCORRELATE_H

@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"
#import "BPSCorrelateOrderedMerge.h"
#import "BPSCorrelateHandler.h"

@interface BPSCorrelate : BMBookmarkablePublisher {
    BPSCorrelateOrderedMerge *_merger;
}


@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler; // ivar: _correlateHandler
@property (readonly, nonatomic) NSObject<BPSPublisher> *current; // ivar: _current
@property (readonly, nonatomic) NSObject<BPSPublisher> *prior; // ivar: _prior


+(NSInteger)correlateSourceForIndex:(NSInteger)arg0 ;
+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
// -(id)initWithPrior:(id)arg0 current:(id)arg1 comparator:(id)arg2 correlateHandler:(unk)arg3  ;
// -(id)initWithPrior:(id)arg0 current:(id)arg1 comparator:(id)arg2 updatedInitialContext:(unk)arg3 correlateHandler:(id)arg4  ;
-(void)subscribe:(id)arg0 ;


@end


#endif