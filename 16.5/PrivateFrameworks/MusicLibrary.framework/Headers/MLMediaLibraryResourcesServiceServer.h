// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMEDIALIBRARYRESOURCESSERVICESERVER_H
#define MLMEDIALIBRARYRESOURCESSERVICESERVER_H

@class NSString, NSMutableSet, NSXPCListener;
@protocol MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore; // ivar: _accountChangeSemaphore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain, nonatomic) NSXPCListener *xpcServiceListener; // ivar: _xpcServiceListener


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithAccountChangeObserver:(id)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_blockExecutionForOnGoingAccountChangeIfNeeded;
-(void)_removeObserver:(id)arg0 ;
-(void)_unblockExecutionForFutureAccountChange;
-(void)emergencyDisconnectWithCompletion:(id)arg0 ;
-(void)libraryContainerPathWithCompletion:(id)arg0 ;
-(void)performDatabasePathChange:(id)arg0 completion:(id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;


@end


#endif