// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOTEALERTHANDLELOCALCLIENT_H
#define SBREMOTEALERTHANDLELOCALCLIENT_H

@class NSMutableDictionary, NSString;
@protocol SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBRemoteTransientOverlaySessionManager.h"

@interface SBRemoteAlertHandleLocalClient : NSObject <SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleClient>

 {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    SBRemoteTransientOverlaySessionManager *_sessionManager;
    NSMutableDictionary *_sessionIDToRemoteAlertHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createRemoteAlertHandleWithDefinition:(id)arg0 configurationContext:(id)arg1 ;
-(id)initWithSessionManager:(id)arg0 ;
-(id)remoteAlertHandlesForDefinition:(id)arg0 allowsCreation:(BOOL)arg1 configurationContext:(id)arg2 ;
-(void)_registerHandle:(id)arg0 forSession:(id)arg1 ;
-(void)_unregisterHandle:(id)arg0 ;
-(void)activateRemoteAlertHandle:(id)arg0 withContext:(id)arg1 ;
-(void)invalidateRemoteAlertHandle:(id)arg0 ;
-(void)remoteTransientOverlaySession:(id)arg0 didInvalidateWithReason:(NSInteger)arg1 error:(id)arg2 ;
-(void)remoteTransientOverlaySessionDidActivate:(id)arg0 ;
-(void)remoteTransientOverlaySessionDidDeactivate:(id)arg0 ;


@end


#endif