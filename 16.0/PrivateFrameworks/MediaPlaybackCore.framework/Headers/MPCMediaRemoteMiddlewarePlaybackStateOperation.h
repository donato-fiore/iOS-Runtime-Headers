// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMEDIAREMOTEMIDDLEWAREPLAYBACKSTATEOPERATION_H
#define MPCMEDIAREMOTEMIDDLEWAREPLAYBACKSTATEOPERATION_H

@class MPAsyncOperation, NSString, NSError, NSArray;
@protocol MPMiddlewareOperation;


#import "MPCMediaRemoteMiddleware.h"
#import "MPCFuture.h"

@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // ivar: _middleware
@property (retain, nonatomic) MPCFuture *playbackStateFuture; // ivar: _playbackStateFuture
@property (readonly) Class superclass;


-(id)initWithMiddleware:(id)arg0 ;
-(id)timeoutDescription;
-(void)execute;


@end


#endif