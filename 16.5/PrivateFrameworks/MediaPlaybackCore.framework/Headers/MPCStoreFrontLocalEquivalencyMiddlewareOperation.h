// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSTOREFRONTLOCALEQUIVALENCYMIDDLEWAREOPERATION_H
#define MPCSTOREFRONTLOCALEQUIVALENCYMIDDLEWAREOPERATION_H

@class MPAsyncOperation, NSString, NSError, NSMapTable, NSArray, MPModelGenericObject, NSIndexPath;
@protocol MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation;


#import "MPCStoreFrontLocalEquivalencyMiddleware.h"
#import "MPCPlayerRequest.h"

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation>



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
@property (retain, nonatomic) MPCStoreFrontLocalEquivalencyMiddleware *middleware; // ivar: _middleware
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (readonly, nonatomic) MPModelGenericObject *overridePlayingItem;
@property (retain, nonatomic) MPCPlayerRequest *playerRequest; // ivar: _playerRequest
@property (readonly, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)initWithMiddleware:(id)arg0 playerRequest:(id)arg1 ;
-(void)execute;


@end


#endif