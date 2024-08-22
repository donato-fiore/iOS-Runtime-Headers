// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMANAGERIMPL_H
#define IDSMANAGERIMPL_H

@class NSString, IDSService;
@protocol IDSServiceDelegatePrivate;

#import <Foundation/Foundation.h>


@interface IDSManagerImpl : NSObject <IDSServiceDelegatePrivate>

 {
    Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> m_receivedInvite;
    Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> m_acceptedInvite;
    Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> m_rejectedInvite;
    DynamicArray<re::IDSInvite *> m_invites;
    DynamicArray<re::IDSDiscoveryView *> m_views;
}


@property (nonatomic) Config config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isListeningForInvites; // ivar: _isListeningForInvites
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


-(*void)acceptedInviteEvent;
-(*void)discoveryViewWithGuid:(id)arg0 ;
-(*void)inviteWithGuid:(id)arg0 ;
-(*void)receivedInviteEvent;
-(*void)rejectedInviteEvent;
-(?)createInviteWithDiscoveryViewdestinations;
-(BOOL)isLoggedIn;
-(BOOL)isValidDestinationsArray:(id)arg0 ;
-(BOOL)isValidInviteResponse:(id)arg0 message:(id)arg1 ;
-(BOOL)isValidViewUpdate:(id)arg0 message:(id)arg1 ;
-(BOOL)parseMessage:(id)arg0 payload:(*id)arg1 objectGUID:(*id)arg2 type:(*id)arg3 ;
-(id)discoveryViewToNSArray:(*void)arg0 to:(id)arg1 ;
-(id)initWithConfig:(struct Config )arg0 ;
-(struct IDSSessionService *)idsSessionService;
-(struct SharedPtr<re::DiscoveryInvite> )createInviteWithDestinations:(struct Slice<re::DynamicString> )arg0 ;
-(struct SharedPtr<re::IDSDiscoveryIdentity> )createLocalIdentity;
-(struct SharedPtr<re::IDSDiscoveryView> )createDiscoveryViewWithDestinations:(id)arg0 destinations:(id)arg1 ;
-(void)acceptInvite:(*void)arg0 ;
-(void)broadcastViewUpdate:(*void)arg0 ;
-(void)dealloc;
-(void)incomingInviteMessage:(*void)arg0 type:(id)arg1 message:(id)arg2 from:(id)arg3 ;
-(void)incomingInviteRequest:(id)arg0 payload:(id)arg1 from:(id)arg2 ;
-(void)incomingViewMessage:(*void)arg0 type:(id)arg1 message:(id)arg2 from:(id)arg3 ;
-(void)inviteAcceptedFrom:(*void)arg0 from:(id)arg1 ;
-(void)sendInviteRequest:(*void)arg0 destinations:(id)arg1 ;
-(void)sendMessage:(id)arg0 type:(id)arg1 objectGUID:(id)arg2 to:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)setupService;
-(void)startListeningForInvites;
-(void)stopListeningForInvites;
-(void)willDestroyDiscoveryView:(*void)arg0 ;
-(void)willDestroyInvite:(*void)arg0 ;


@end


#endif