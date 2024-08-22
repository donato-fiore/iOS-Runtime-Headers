// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKKSCONTROL_H
#define CKKSCONTROL_H

@class NSXPCConnection;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CKKSControl : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSObject<OS_xpc_object> *endpoint; // ivar: _endpoint
@property BOOL synchronous; // ivar: _synchronous


+(id)CKKSControlObject:(BOOL)arg0 error:(*id)arg1 ;
+(id)controlObject:(*id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)objectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteSEView:(id)arg0 reply:(id)arg1 ;
-(void)fetchSEViewKeyHierarchy:(id)arg0 forceFetch:(BOOL)arg1 reply:(id)arg2 ;
-(void)fetchSEViewKeyHierarchy:(id)arg0 reply:(id)arg1 ;
-(void)modifyTLKSharesForSEView:(id)arg0 adding:(id)arg1 deleting:(id)arg2 reply:(id)arg3 ;
-(void)pcsMirrorKeysForServices:(id)arg0 reply:(id)arg1 ;
-(void)proposeTLKForSEView:(id)arg0 proposedTLK:(id)arg1 wrappedOldTLK:(id)arg2 tlkShares:(id)arg3 reply:(id)arg4 ;
-(void)rpcCKMetric:(id)arg0 attributes:(id)arg1 reply:(id)arg2 ;
-(void)rpcFastStatus:(id)arg0 reply:(id)arg1 ;
-(void)rpcFetchAndProcessChanges:(id)arg0 classA:(BOOL)arg1 onlyIfNoRecentFetch:(BOOL)arg2 reply:(id)arg3 ;
-(void)rpcFetchAndProcessChanges:(id)arg0 reply:(id)arg1 ;
-(void)rpcFetchAndProcessChangesIfNoRecentFetch:(id)arg0 reply:(id)arg1 ;
-(void)rpcFetchAndProcessClassAChanges:(id)arg0 reply:(id)arg1 ;
-(void)rpcGetCKDeviceIDWithReply:(id)arg0 ;
-(void)rpcKnownBadState:(id)arg0 reply:(id)arg1 ;
-(void)rpcPerformanceCounters:(id)arg0 ;
-(void)rpcPushOutgoingChanges:(id)arg0 reply:(id)arg1 ;
-(void)rpcResetCloudKit:(id)arg0 reason:(id)arg1 reply:(id)arg2 ;
-(void)rpcResetLocal:(id)arg0 reply:(id)arg1 ;
-(void)rpcResync:(id)arg0 reply:(id)arg1 ;
-(void)rpcResyncLocal:(id)arg0 reply:(id)arg1 ;
-(void)rpcStatus:(id)arg0 fast:(BOOL)arg1 waitForNonTransientState:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)rpcStatus:(id)arg0 reply:(id)arg1 ;
-(void)rpcTLKMissing:(id)arg0 reply:(id)arg1 ;
-(void)toggleHavoc:(id)arg0 ;


@end


#endif