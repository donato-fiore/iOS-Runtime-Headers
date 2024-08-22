// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCSTORELIBRARYPERSONALIZATIONMIDDLEWAREOPERATION_H
#define MPCSTORELIBRARYPERSONALIZATIONMIDDLEWAREOPERATION_H

@class MPAsyncOperation, NSString, NSError, NSMapTable, NSArray;
@protocol MPMiddlewareAutomaticDependencyOperation;


#import "MPCStoreLibraryPersonalizationMiddleware.h"
#import "MPCPlayerRequest.h"

@interface MPCStoreLibraryPersonalizationMiddlewareOperation : MPAsyncOperation <MPMiddlewareAutomaticDependencyOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *inputOperations; // ivar: _inputOperations
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPCStoreLibraryPersonalizationMiddleware *middleware; // ivar: _middleware
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) MPCPlayerRequest *playerRequest; // ivar: _playerRequest
@property (readonly) Class superclass;


-(id)initWithMiddleware:(id)arg0 playerRequest:(id)arg1 ;
-(void)execute;


@end


#endif