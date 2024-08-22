// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSBUFFER_H
#define BPSBUFFER_H

@class NSMutableArray;
@protocol BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSBuffer : BMBookmarkablePublisher

@property (readonly, nonatomic) NSUInteger prefetch; // ivar: _prefetch
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values
@property (readonly, nonatomic) NSUInteger whenFull; // ivar: _whenFull


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)initWithUpstream:(id)arg0 size:(NSUInteger)arg1 prefetch:(NSUInteger)arg2 whenFull:(NSUInteger)arg3 ;
-(id)initWithUpstream:(id)arg0 size:(NSUInteger)arg1 prefetch:(NSUInteger)arg2 whenFull:(NSUInteger)arg3 values:(id)arg4 ;
-(void)subscribe:(id)arg0 ;


@end


#endif