// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMEDIAREMOTEMIDDLEWARECOMMANDSOPERATION_H
#define MPCMEDIAREMOTEMIDDLEWARECOMMANDSOPERATION_H

@class MPAsyncOperation, NSString, NSError, NSArray;
@protocol MPMiddlewareOperation;


#import "MPCMediaRemoteMiddleware.h"
#import "MPCFuture.h"

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // ivar: _middleware
@property (readonly) Class superclass;
@property (retain, nonatomic) MPCFuture *supportedCommandsFuture; // ivar: _supportedCommandsFuture


-(id)initWithMiddleware:(id)arg0 ;
-(id)timeoutDescription;
-(void)execute;


@end


#endif