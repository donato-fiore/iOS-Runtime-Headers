// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMXPCDAEMONCONTROLLER_H
#define REMXPCDAEMONCONTROLLER_H

@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol REMDaemonController, REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

#import <Foundation/Foundation.h>

#import "REMStoreContainerToken.h"

@interface REMXPCDaemonController : NSObject <REMDaemonController>



@property (weak, nonatomic) NSObject<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> *cloudKitNetworkActivityDelegate; // ivar: _cloudKitNetworkActivityDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) os_unfair_lock_s ivarLock; // ivar: _ivarLock
@property (retain, nonatomic) NSMutableDictionary *l_performersByName; // ivar: _l_performersByName
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) REMStoreContainerToken *storeContainerToken; // ivar: _storeContainerToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)userInteractiveDaemonController;
+(id)weakSharedInstance;
-(id)_resolveAndCachePerformerWithResolver:(id)arg0 reason:(id)arg1 errorHandler:(id)arg2 ;
-(id)_resolvePerformerWithResolver:(id)arg0 reason:(id)arg1 errorHandler:(id)arg2 ;
-(id)_syncPerformerWithResolver:(id)arg0 reason:(id)arg1 errorHandler:(id)arg2 ;
-(id)init;
-(id)initWithStoreContainerToken:(id)arg0 ;
-(id)initWithStoreContainerToken:(id)arg0 userInteractive:(BOOL)arg1 ;
-(id)syncChangeTrackingPerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)syncDebugPerformerWithErrorHandler:(id)arg0 ;
-(id)syncDebugPerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)syncIndexingPerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)syncStorePerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
-(id)syncSyncInterfacePerformerWithReason:(id)arg0 errorHandler:(id)arg1 ;
// -(void)_asyncPerformerWithResolver:(id)arg0 reason:(id)arg1 loadHandler:(id)arg2 errorHandler:(unk)arg3  ;
-(void)_asyncResolveAndCachePerformerWithResolver:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)_asyncResolvePerformerWithResolver:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
// -(void)asyncIndexingPerformerWithReason:(id)arg0 loadHandler:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)asyncStorePerformerWithReason:(id)arg0 loadHandler:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)asyncSyncInterfacePerformerWithReason:(id)arg0 loadHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(void)dealloc;
-(void)invalidate;


@end


#endif