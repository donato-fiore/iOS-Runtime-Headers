// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSWINDOWER_H
#define BPSWINDOWER_H

@class NSArray, NSString;
@protocol BMBookmarkablePublisher, BPSWindowAssigner, BPSPublisher;


#import "BMBookmarkablePublisher.h"

@interface BPSWindower : BMBookmarkablePublisher <BMBookmarkablePublisher>



@property (readonly, nonatomic) NSObject<BPSWindowAssigner> *assigner; // ivar: _assigner
@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *key; // ivar: _key
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(BOOL)canStorePassThroughValueInBookmark;
-(id)init;
// -(id)initWithUpstream:(id)arg0 key:(id)arg1 assigner:(unk)arg2  ;
-(void)subscribe:(id)arg0 ;


@end


#endif