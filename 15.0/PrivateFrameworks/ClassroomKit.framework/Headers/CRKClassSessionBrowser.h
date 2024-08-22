// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCLASSSESSIONBROWSER_H
#define CRKCLASSSESSIONBROWSER_H

@class NSMutableDictionary, NSMutableArray, CATNetworkReachability, NSString, NSSet;
@protocol CRKSessionDelegate, CRKClassSessionBeaconBrowserDelegate, CATNetworkReachabilityDelegate, CRKClassSessionBrowserDelegate, CRKInvitationSessionBrowserDelegate;

#import <Foundation/Foundation.h>

#import "CRKClassSessionBeaconBrowser.h"

@interface CRKClassSessionBrowser : NSObject <CRKSessionDelegate, CRKClassSessionBeaconBrowserDelegate, CATNetworkReachabilityDelegate>

 {
    NSMutableDictionary *mClassSessionsByIdentifier;
    NSMutableArray *mInRangeClassSessions;
    NSMutableDictionary *mInvitationSessionsByEndpoint;
    CRKClassSessionBeaconBrowser *mBeaconBrowser;
    CATNetworkReachability *mNetworkReachability;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountBySessionIdentifier;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountByInviteSessionEndpoint;
}


@property (nonatomic) BOOL allowInvitationSessions; // ivar: _allowInvitationSessions
@property (nonatomic) BOOL allowUnenrolledSessions; // ivar: _allowUnenrolledSessions
@property (readonly, nonatomic, getter=isBrowsing) BOOL browsing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKClassSessionBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *enrolledControlGroupIdentifiers; // ivar: _enrolledControlGroupIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *inRangeClassSessionIdentifiers;
@property (weak, nonatomic) NSObject<CRKInvitationSessionBrowserDelegate> *invitationSessionDelegate; // ivar: _invitationSessionDelegate
@property (copy, nonatomic) NSSet *organizationUUIDs; // ivar: _organizationUUIDs
@property (readonly) Class superclass;


-(BOOL)hasConnectionToClassWithIdentifier:(id)arg0 ;
-(id)browserStateDictionary;
-(id)clientIdentityForSession:(id)arg0 ;
-(id)delegateNeedsClientIdentityForGroup:(id)arg0 ;
-(id)delegateNeedsClientIdentityForInvitationSessionWithEndpoint:(id)arg0 ;
-(id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)arg0 ;
-(id)init;
-(id)stateDictionariesByClassSessionIdentifierString;
-(id)trustedAnchorCertificatesForSession:(id)arg0 ;
-(void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg0 ;
-(void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg0 ;
-(void)addInRangeClassSession:(id)arg0 ;
-(void)beaconBrowser:(id)arg0 didFailWithError:(id)arg1 ;
-(void)beaconBrowser:(id)arg0 didFindBeaconForClassSession:(id)arg1 flags:(unsigned short)arg2 ;
-(void)beaconBrowser:(id)arg0 didFindBeaconForInvitationSessionWithEndpoint:(id)arg1 ;
-(void)classSessionInvalidated:(id)arg0 ;
-(void)classSessionRejected:(id)arg0 ;
-(void)connectToClassSessionWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)delegateClassSessionDidBecomeConnectable:(id)arg0 ;
-(void)delegateClassSessionDidBecomeNotConnectable:(id)arg0 ;
-(void)delegateDidFailWithError:(id)arg0 ;
-(void)delegateDidFindClassSession:(id)arg0 transport:(id)arg1 ;
-(void)delegateDidFindInvitationSession:(id)arg0 transport:(id)arg1 ;
-(void)delegateDidRemoveClassSession:(id)arg0 ;
-(void)delegateDidRemoveInvitationSession:(id)arg0 ;
-(void)delegateLostConnectionToClassSession:(id)arg0 ;
-(void)delegateLostConnectionToInvitationSession:(id)arg0 ;
-(void)handleUntrustedClassSession:(id)arg0 decisionHandler:(id)arg1 ;
-(void)handleUntrustedInvitationSession:(id)arg0 decisionHandler:(id)arg1 ;
-(void)invitationSessionWithEndpointInvalidated:(id)arg0 ;
-(void)lostConnectionToClassSession:(id)arg0 ;
-(void)lostConnectionToInvitationSessionWithEndpoint:(id)arg0 ;
-(void)reachabilityDidChange:(id)arg0 ;
-(void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg0 ;
-(void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg0 ;
-(void)removeInRangeClassSession:(id)arg0 ;
-(void)session:(id)arg0 didConnectWithTransport:(id)arg1 ;
-(void)session:(id)arg0 encounteredUntrustedConnection:(id)arg1 ;
-(void)session:(id)arg0 willLoseBeaconAfterTimeInterval:(CGFloat)arg1 ;
-(void)sessionDidBecomeConnectable:(id)arg0 ;
-(void)sessionDidBecomeNotConnectable:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)sessionDidInvalidate:(id)arg0 ;
-(void)sessionDidLoseBeacon:(id)arg0 ;
-(void)startBrowsing;
-(void)stopBrowsing;
-(void)updateConnectedSessions;
-(void)updateRequiresBeaconFlagForSession:(id)arg0 ;


@end


#endif