// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISAPPLICATIONSUPPORTSERVICE_H
#define UISAPPLICATIONSUPPORTSERVICE_H

@class BSServiceConnectionListener, FBSSerialQueue, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface, UISApplicationSupportServiceDelegate;

#import <Foundation/Foundation.h>

#import "UISApplicationInitializationContext.h"

@interface UISApplicationSupportService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface>

 {
    os_unfair_lock_s _lock;
    BSServiceConnectionListener *_listener;
    FBSSerialQueue *_targetQueue;
    NSMutableArray *_lock_launchPendedRequests;
    BOOL _lock_started;
    BOOL _lock_finishedLaunching;
    ? _lock_delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (copy) UISApplicationInitializationContext *defaultContext; // ivar: _lock_defaultContext
@property (retain) NSObject<UISApplicationSupportServiceDelegate> *delegate; // ivar: _lock_delegate
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasFinishedLaunching;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_initWithDelegate:(id)arg0 targetQueue:(id)arg1 ;
-(id)init;
-(id)initWithCalloutQueue:(id)arg0 ;
-(void)_pendRequestUntilLaunch:(id)arg0 ;
-(void)dealloc;
-(void)destroyScenesPersistentIdentifiers:(id)arg0 animationType:(id)arg1 destroySessions:(id)arg2 completion:(id)arg3 ;
-(void)initializeClientWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)requestPasscodeUnlockUIWithCompletion:(id)arg0 ;
-(void)start;


@end


#endif