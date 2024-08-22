// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGMESSAGINGDCONNECTION_H
#define KCSHARINGMESSAGINGDCONNECTION_H

@class NSXPCConnection, NSString;
@protocol KCSharingMessagingdXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface KCSharingMessagingdConnection : NSObject <KCSharingMessagingdXPCServerProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)initWithConnection:(id)arg0 interface:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)didAcceptInviteForGroupID:(id)arg0 completion:(id)arg1 ;
-(void)didDeclineInviteForGroupID:(id)arg0 completion:(id)arg1 ;
-(void)fetchReceivedInviteWithGroupID:(id)arg0 completion:(id)arg1 ;
-(void)fetchReceivedInvitesWithCompletion:(id)arg0 ;
-(void)ping;
-(void)pingWithReply:(id)arg0 ;
-(void)sendNewInvitesForGroup:(id)arg0 completion:(id)arg1 ;


@end


#endif