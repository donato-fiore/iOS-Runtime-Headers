// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSXPCDAEMONCONTROLLER_H
#define IDSXPCDAEMONCONTROLLER_H

@class NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSXPCConnection.h"

@interface IDSXPCDaemonController : NSObject {
    BOOL _sync;
}


@property (retain, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary; // ivar: _collaboratorPromiseDictionary
@property (retain, nonatomic) IDSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSMapTable *interruptionHandlerByTarget; // ivar: _interruptionHandlerByTarget
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *syncCollaboratorDictionary; // ivar: _syncCollaboratorDictionary


+(id)weakSharedInstance;
+(void)performDaemonControllerTask:(id)arg0 ;
// -(id)_collaboratorWithIdentifier:(id)arg0 interface:(id)arg1 timeout:(CGFloat)arg2 errorHandler:(id)arg3 resolverBlock:(unk)arg4  ;
-(id)_daemonProxyWithErrorHandler:(id)arg0 ;
-(id)_initWithQueue:(id)arg0 isSync:(BOOL)arg1 ;
-(id)_initWithQueue:(id)arg0 isSync:(BOOL)arg1 connectionCreationBlock:(id)arg2 ;
// -(id)_sync_collaboratorWithIdentifier:(id)arg0 errorHandler:(id)arg1 resolverBlock:(unk)arg2  ;
-(id)_timingOutDaemonProxyWithTimeout:(CGFloat)arg0 errorHandler:(id)arg1 ;
-(id)activityMonitorCollaboratorWithErrorHandler:(id)arg0 ;
-(id)initSyncControllerWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 connectionCreationBlock:(id)arg1 ;
-(id)interalTestingCollaboratorWithErrorHandler:(id)arg0 ;
-(id)opportunisticCollaboratorWithErrorHandler:(id)arg0 ;
-(id)pairedDeviceManagerCollaboratorWithErrorHandler:(id)arg0 ;
-(id)pairingCollaboratorWithErrorHandler:(id)arg0 ;
-(id)pairingCollaboratorWithTimeout:(CGFloat)arg0 errorHandler:(id)arg1 ;
-(id)registrationCollaboratorWithErrorHandler:(id)arg0 ;
-(id)reunionSyncCollaboratorWithErrorHandler:(id)arg0 ;
-(id)serverMessagingCollaboratorWithErrorHandler:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
// -(void)addInterruptionHandler:(id)arg0 forTarget:(unk)arg1  ;
-(void)dealloc;
-(void)performTask:(id)arg0 ;
-(void)removeInterruptionHandlerForTarget:(id)arg0 ;


@end


#endif