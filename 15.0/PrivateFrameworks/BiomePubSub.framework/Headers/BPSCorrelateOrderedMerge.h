// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSCORRELATEORDEREDMERGE_H
#define BPSCORRELATEORDEREDMERGE_H

@class NSArray;


#import "BMBookmarkablePublisher.h"

@interface BPSCorrelateOrderedMerge : BMBookmarkablePublisher

@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSArray *publishers; // ivar: _publishers


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithA:(id)arg0 b:(id)arg1 comparator:(id)arg2 ;
-(id)initWithPublishers:(id)arg0 comparator:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif