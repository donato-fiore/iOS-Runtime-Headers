// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXAPPINSTALLOBSERVER_H
#define IXAPPINSTALLOBSERVER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, IXAppInstallObserverProtocol, IXAppInstallObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IXAppInstallObserver : NSObject <NSXPCListenerDelegate, IXAppInstallObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<IXAppInstallObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_oncePerBootUniqueIdentifierForServiceName:(id)arg0 ;
-(id)initTransientForClients:(id)arg0 delegate:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 forClients:(id)arg1 delegate:(id)arg2 ;
-(void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg0 ;
-(void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg0 ;
-(void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg0 ;
-(void)_client_coordinatorShouldPauseWithSeed:(id)arg0 ;
-(void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg0 ;
-(void)_client_coordinatorShouldResumeWithSeed:(id)arg0 ;
-(void)_client_coordinatorWithSeed:(id)arg0 configuredPromiseDidBeginFulfillment:(NSUInteger)arg1 ;
-(void)_client_coordinatorWithSeed:(id)arg0 didCancelWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)_client_shouldPrioritizeAppWithBundleID:(id)arg0 ;
-(void)_internalInit;
-(void)dealloc;


@end


#endif