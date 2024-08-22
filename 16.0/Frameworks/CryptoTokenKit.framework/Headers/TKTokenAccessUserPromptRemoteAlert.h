// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENACCESSUSERPROMPTREMOTEALERT_H
#define TKTOKENACCESSUSERPROMPTREMOTEALERT_H

@class SBSRemoteAlertHandle, NSString;
@protocol NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, TKUIServerProtocol, TKTokenAccessUserPrompt, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "TKTokenAccessRequest.h"

@interface TKTokenAccessUserPromptRemoteAlert : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, TKUIServerProtocol, TKTokenAccessUserPrompt>

 {
    TKTokenAccessRequest *_accessRequest;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    NSObject<OS_dispatch_semaphore> *_remoteAlertSemaphore;
    NSInteger _grantedAccess;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)preflightStatus;
-(NSInteger)promptUserToEvaluateRequest:(id)arg0 error:(*id)arg1 ;
-(void)registerTokenAccessRequestCorrelationID:(id)arg0 granted:(BOOL)arg1 reply:(id)arg2 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif