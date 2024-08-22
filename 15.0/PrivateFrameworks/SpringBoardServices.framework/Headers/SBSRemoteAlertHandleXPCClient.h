// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSREMOTEALERTHANDLEXPCCLIENT_H
#define SBSREMOTEALERTHANDLEXPCCLIENT_H

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol SBSRemoteAlertHandleServiceClientInterface, SBSRemoteAlertHandleClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSRemoteAlertHandleXPCClient : NSObject <SBSRemoteAlertHandleServiceClientInterface, SBSRemoteAlertHandleClient>

 {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    BSServiceConnection *_connection;
    BOOL _connectionActivated;
    BOOL _connectionInvalidated;
    NSMutableDictionary *_handleIDToHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)createRemoteAlertHandleWithDefinition:(id)arg0 configurationContext:(id)arg1 ;
-(id)init;
-(id)remoteAlertHandlesForDefinition:(id)arg0 allowsCreation:(BOOL)arg1 configurationContext:(id)arg2 ;
-(void)_handleError:(id)arg0 ;
-(void)_invalidateHandleForHandleID:(id)arg0 withError:(id)arg1 ;
-(void)activateRemoteAlertHandle:(id)arg0 withContext:(id)arg1 ;
-(void)invalidateRemoteAlertHandle:(id)arg0 ;
-(void)remoteAlertHandleWithID:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleWithIDDidActivate:(id)arg0 ;
-(void)remoteAlertHandleWithIDDidDeactivate:(id)arg0 ;


@end


#endif