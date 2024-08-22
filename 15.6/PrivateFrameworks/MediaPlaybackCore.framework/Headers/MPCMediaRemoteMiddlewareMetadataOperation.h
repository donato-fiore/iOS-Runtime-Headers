// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMEDIAREMOTEMIDDLEWAREMETADATAOPERATION_H
#define MPCMEDIAREMOTEMIDDLEWAREMETADATAOPERATION_H

@class MPAsyncOperation, NSString, NSError, NSMapTable, NSArray, MPSectionedCollection, NSIndexPath, MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration>;
@protocol MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation;


#import "MPCMediaRemoteMiddleware.h"
#import "MPCFuture.h"

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation>



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
@property (readonly, nonatomic) MPSectionedCollection *modelObjects;
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) MPCFuture *playQueueIdentifiersFuture; // ivar: _playQueueIdentifiersFuture
@property (retain, nonatomic) MPCFuture *playingIdentifierFuture; // ivar: _playingIdentifierFuture
@property (readonly, copy, nonatomic) NSIndexPath *playingIndexPath;
@property (retain, nonatomic) MPCFuture *queueIdentifierFuture; // ivar: _queueIdentifierFuture
@property (retain, nonatomic) MPRequest<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> *request; // ivar: _request
@property (readonly, nonatomic) MPSectionedCollection *sourceContentItems;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)_genericObjectPropertySetForContentItem:(id)arg0 preferredRelationships:(id)arg1 propertySet:(id)arg2 ;
-(id)_itemGenericObjectPropertySetForContentItem:(id)arg0 propertySet:(id)arg1 ;
-(id)initWithMiddleware:(id)arg0 request:(id)arg1 ;
-(id)timeoutDescription;
-(struct _MSVSignedRange )rangeFromTracklistRange:(struct ? )arg0 ;
-(void)_loadItemsWithCompletion:(id)arg0 ;
-(void)_loadPlayingIdentifierWithCompletion:(id)arg0 ;
-(void)execute;


@end


#endif