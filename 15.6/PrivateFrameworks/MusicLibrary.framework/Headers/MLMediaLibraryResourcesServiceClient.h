// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLMEDIALIBRARYRESOURCESSERVICECLIENT_H
#define MLMEDIALIBRARYRESOURCESSERVICECLIENT_H

@class NSOperationQueue, NSString, NSXPCConnection;
@protocol MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MLMediaLibraryResourcesServiceClient : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol>



@property (retain, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver; // ivar: _accountChangeObserver
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue; // ivar: _accountChangeOperationQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcClientConnection; // ivar: _xpcClientConnection


+(id)sharedService;
-(id)_initWithAccountChangeObserver:(id)arg0 ;
-(id)_libraryContainerPathWithError:(*id)arg0 ;
-(id)connectionWithListenerEndpoint:(id)arg0 ;
-(id)libraryContainerPathWithError:(*id)arg0 ;
-(void)emergencyDisconnectWithCompletion:(id)arg0 ;
-(void)performDatabasePathChange:(id)arg0 completion:(id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;


@end


#endif