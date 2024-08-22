// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGGROUPMANAGER_H
#define KCSHARINGGROUPMANAGER_H


#import <Foundation/Foundation.h>

#import "KCSharingDaemonConnection.h"

@interface KCSharingGroupManager : NSObject

@property (retain, nonatomic) KCSharingDaemonConnection *daemonConnection; // ivar: _daemonConnection


+(id)sharedInstance;
-(id)initWithDaemonConnection:(id)arg0 ;
-(void)acceptInviteForGroupID:(id)arg0 completion:(id)arg1 ;
-(void)addSubscriber:(id)arg0 ;
-(void)checkAvailabilityForHandle:(id)arg0 completion:(id)arg1 ;
-(void)checkAvailabilityForHandles:(id)arg0 completion:(id)arg1 ;
-(void)createGroupWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)declineInviteForGroupID:(id)arg0 completion:(id)arg1 ;
-(void)deleteGroupWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)getGroupByGroupID:(id)arg0 completion:(id)arg1 ;
-(void)getGroupsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)leaveGroupWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)pingDaemonsWithReply:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;
-(void)test;
-(void)updateGroupWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif