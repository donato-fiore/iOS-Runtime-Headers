// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMBOOKMARKWRAPPER_H
#define BMBOOKMARKWRAPPER_H

@class NSArray, NSString;
@protocol BMBookmarkablePublisher;


#import "BPSPublisher.h"

@interface BMBookmarkWrapper : BPSPublisher <BMBookmarkablePublisher>



@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *initialState; // ivar: _initialState
@property (readonly) Class superclass;
@property (readonly, nonatomic) BPSPublisher *upstream; // ivar: _upstream


+(id)new;
+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(BOOL)canStorePassThroughValueInBookmark;
-(id)init;
-(id)initWithUpstream:(id)arg0 initialState:(id)arg1 ;
-(id)withBookmark:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif