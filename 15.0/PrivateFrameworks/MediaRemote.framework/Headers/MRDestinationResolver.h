// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRDESTINATIONRESOLVER_H
#define MRDESTINATIONRESOLVER_H

@class MSVVariableIntervalTimer, NSString;
@protocol MREndpointObserver, MRDestinationResolverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRAVEndpoint.h"
#import "MROrigin.h"
#import "MRPlayerPath.h"
#import "MRDestinationResolverDependencies.h"
#import "MRDestination.h"
#import "MRAVEndpointObserver.h"

@interface MRDestinationResolver : NSObject <MREndpointObserver>



@property (retain, nonatomic) MSVVariableIntervalTimer *connectionRetryTimer; // ivar: _connectionRetryTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRDestinationResolverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MRAVEndpoint *delegateEndpoint; // ivar: _delegateEndpoint
@property (retain, nonatomic) MROrigin *delegateOrigin; // ivar: _delegateOrigin
@property (retain, nonatomic) MRPlayerPath *delegatePlayerPath; // ivar: _delegatePlayerPath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) MRDestinationResolverDependencies *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) MRDestination *destination; // ivar: _destination
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver; // ivar: _endpointObserver
@property (retain, nonatomic) NSString *endpointObserverGroupUID; // ivar: _endpointObserverGroupUID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) MRDestination *originalDestination; // ivar: _originalDestination
@property (retain, nonatomic) id *playerPathInvalidationObserver; // ivar: _playerPathInvalidationObserver
@property (retain, nonatomic) MSVVariableIntervalTimer *reconRetryTimer; // ivar: _reconRetryTimer
@property (nonatomic) BOOL registeredForEndpointChanges; // ivar: _registeredForEndpointChanges
@property (nonatomic) BOOL registeredForEndpointInvalidations; // ivar: _registeredForEndpointInvalidations
@property (nonatomic) BOOL registeredForNotifications; // ivar: _registeredForNotifications
@property (nonatomic) BOOL registeredForPlayerPathInvalidations; // ivar: _registeredForPlayerPathInvalidations
@property (nonatomic) BOOL resolving; // ivar: _resolving
@property (retain, nonatomic) MRAVEndpoint *resolvingEndpoint; // ivar: _resolvingEndpoint
@property (retain, nonatomic) MRPlayerPath *resolvingPlayerPath; // ivar: _resolvingPlayerPath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(void)resolveDestination:(id)arg0 level:(NSInteger)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
+(void)resolveDestination:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
+(void)resolvePartialDestination:(id)arg0 level:(NSInteger)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
+(void)resolvePartialDestination:(id)arg0 level:(NSInteger)arg1 timeout:(CGFloat)arg2 dependencies:(id)arg3 completion:(id)arg4 ;
-(BOOL)isDynamicEndpoint;
-(BOOL)isProactiveEndpoint;
-(BOOL)isUserSelectedEndpoint;
-(id)initWithDestination:(id)arg0 label:(id)arg1 ;
-(id)initWithDestination:(id)arg0 label:(id)arg1 dependencies:(id)arg2 ;
-(void)beginResolving;
-(void)createPlayerPathForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)endpointDidDisconnect:(id)arg0 ;
-(void)handleActiveSystemEndpointChangedNotification:(id)arg0 ;
-(void)handleEndpointChanged;
-(void)handleEndpointInvalidated;
-(void)handlePlayerPathInvalidatedWithPlayerPath:(id)arg0 ;
-(void)notifyDelegateOfEndpointChange:(id)arg0 ;
-(void)notifyDelegateOfError:(id)arg0 ;
-(void)notifyDelegateOfInvalidation;
-(void)notifyDelegateOfOriginChange:(id)arg0 ;
-(void)notifyDelegateOfPlayerPathChange:(id)arg0 ;
-(void)onQueue_clearStateForEndpoint;
-(void)onQueue_clearStateForOutputDeviceUID;
-(void)onQueue_clearStateForPlayerPath;
-(void)onQueue_registerForEndpointInvalidations:(id)arg0 ;
-(void)onQueue_registerForPlayerPathInvalidationsForUnresolvedPlayerPath:(id)arg0 ;
-(void)onQueue_retrieveEndpointForUID:(id)arg0 completion:(id)arg1 ;
-(void)onQueue_setEndpoint:(id)arg0 ;
-(void)onQueue_setOrigin:(id)arg0 ;
-(void)onQueue_setResolvedPlayerPath:(id)arg0 ;
-(void)onQueue_setUnresolvedPlayerPath:(id)arg0 ;
-(void)registerForEndpointChangesForOutputDeviceUID:(id)arg0 ;
-(void)resolve;
-(void)resolveForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(void)resolveForOutputDeviceUID:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(void)resolveForResolvedPlayerPath:(id)arg0 ;
-(void)resolveForUnresolvedPlayerPath:(id)arg0 ;
-(void)resolvePlayerPath:(id)arg0 completion:(id)arg1 ;
-(void)unregisterForEndpointChanges;
-(void)unregisterForEndpointInvalidations;
-(void)unregisterForPlayerPathInvalidations;


@end


#endif