// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSMERGEMANY_H
#define BPSMERGEMANY_H

@class NSArray;


#import "BMBookmarkablePublisher.h"

@interface BPSMergeMany : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers; // ivar: _publishers


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithPublishers:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif