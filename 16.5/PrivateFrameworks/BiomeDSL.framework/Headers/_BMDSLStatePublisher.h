// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMDSLSTATEPUBLISHER_H
#define _BMDSLSTATEPUBLISHER_H

@class BMBookmarkablePublisher;
@protocol BMDSLStateValue, BPSPublisher;


#import "BMDSLState.h"

@interface _BMDSLStatePublisher : BMBookmarkablePublisher

@property (readonly, nonatomic) BMDSLState *DSLState; // ivar: _DSLState
@property (retain, nonatomic) NSObject<BMDSLStateValue> *state; // ivar: _state
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream; // ivar: _upstream


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(BOOL)canStorePassThroughValueInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)initWithUpstream:(id)arg0 state:(id)arg1 DSLState:(id)arg2 ;
-(void)subscribe:(id)arg0 ;


@end


#endif