// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGDAEMONCONNECTION_H
#define KCSHARINGDAEMONCONNECTION_H

@class NSXPCConnection, NSHashTable, NSString;
@protocol KCSharingXPCClientProtocol, KCSharingXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface KCSharingDaemonConnection : NSObject <KCSharingXPCClientProtocol, KCSharingXPCServerProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSHashTable *connectionListeners; // ivar: _connectionListeners
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 ;
-(void)acceptInviteForGroupID:(id)arg0 completion:(id)arg1 ;
-(void)addConnectionListener:(id)arg0 ;
-(void)checkAvailabilityForHandles:(id)arg0 completion:(id)arg1 ;
-(void)createGroupWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)declineInviteForGroupID:(id)arg0 completion:(id)arg1 ;
-(void)deleteGroupWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchRemoteChangesWithReply:(id)arg0 ;
-(void)getGroupByGroupID:(id)arg0 completion:(id)arg1 ;
-(void)getGroupsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)groupsUpdated;
-(void)leaveGroupWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)ping;
-(void)pingWithReply:(id)arg0 ;
-(void)provisionWithReply:(id)arg0 ;
-(void)receivedGroupInvitation:(id)arg0 ;
-(void)removeConnectionListener:(id)arg0 ;
-(void)saveLocalChangesWithReply:(id)arg0 ;
-(void)setChangeTrackingEnabled:(BOOL)arg0 reply:(id)arg1 ;
-(void)updateGroupWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif