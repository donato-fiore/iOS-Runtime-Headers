// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCADVERTISERASSISTANT_H
#define MCADVERTISERASSISTANT_H

@class NSString, NSDictionary, NSBundle, NSMutableArray;
@protocol MCNearbyServiceAdvertiserDelegate, MCAdvertiserAssistantDelegate;

#import <Foundation/Foundation.h>

#import "MCNearbyServiceAdvertiser.h"
#import "MCAlertController.h"
#import "MCPeerID.h"
#import "MCSession.h"

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate>

 {
    id<MCAdvertiserAssistantDelegate> *_delegate;
}


@property (retain, nonatomic) MCNearbyServiceAdvertiser *advertiser; // ivar: _advertiser
@property (retain, nonatomic) MCAlertController *alertController; // ivar: _alertController
@property (readonly, copy, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MCAdvertiserAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *discoveryInfo; // ivar: _discoveryInfo
@property (retain, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invitationHandlerForPresentedAlert; // ivar: _invitationHandlerForPresentedAlert
@property (retain, nonatomic) NSMutableArray *invitationsBuffer; // ivar: _invitationsBuffer
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (copy, nonatomic) MCPeerID *myPeerID; // ivar: _myPeerID
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (retain, nonatomic) MCSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasAdvertising; // ivar: _wasAdvertising


-(id)init;
-(id)initWithServiceType:(id)arg0 discoveryInfo:(id)arg1 session:(id)arg2 ;
-(void)advertiser:(id)arg0 didReceiveInvitationFromPeer:(id)arg1 withContext:(id)arg2 invitationHandler:(id)arg3 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillTerminateNotification:(id)arg0 ;
-(void)dealloc;
-(void)handleUserInvitationDecision:(BOOL)arg0 ;
-(void)presentNextInvitation;
-(void)start;
-(void)stop;


@end


#endif