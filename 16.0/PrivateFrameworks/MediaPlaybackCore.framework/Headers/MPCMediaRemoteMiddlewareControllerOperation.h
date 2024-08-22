// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMEDIAREMOTEMIDDLEWARECONTROLLEROPERATION_H
#define MPCMEDIAREMOTEMIDDLEWARECONTROLLEROPERATION_H

@class MPAsyncOperation, NSString, NSError, NSMapTable, NSArray;
@protocol MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation;


#import "MPCMediaRemoteController.h"
#import "MPCFuture.h"
#import "MPCMediaRemoteMiddleware.h"
#import "MPCPlayerPath.h"

@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation>



@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly, nonatomic) MPCFuture *controllerFuture;
@property (retain, nonatomic) MPCFuture *controllerFuture; // ivar: _controllerFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *inputOperations; // ivar: _inputOperations
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // ivar: _middleware
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) MPCPlayerPath *playerPath; // ivar: _playerPath
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)initWithMiddleware:(id)arg0 playerPath:(id)arg1 ;
-(id)timeoutDescription;
-(void)execute;


@end


#endif