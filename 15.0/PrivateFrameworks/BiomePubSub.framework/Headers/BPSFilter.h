// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSFILTER_H
#define BPSFILTER_H



#import "BMBookmarkablePublisher.h"
#import "BPSPublisher.h"

@interface BPSFilter : BMBookmarkablePublisher

@property (readonly, nonatomic) id *isIncluded; // ivar: _isIncluded
@property (retain, nonatomic) BPSPublisher *upstream; // ivar: _upstream


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithUpstream:(id)arg0 isIncluded:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif