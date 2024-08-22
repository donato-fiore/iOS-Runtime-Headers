// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEINVITATION_H
#define HMDHOMEINVITATION_H

@class HMFObject, NSString, NSDate, NSUUID, HMHomeInvitationData, NSArray, CKDeviceToDeviceShareInvitationToken, NSURL, HMFTimer;
@protocol HMFTimerDelegate, NSSecureCoding, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>



@property (readonly, nonatomic, getter=isAccepted) BOOL accepted;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeclined) BOOL declined;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) id *expirationHandler; // ivar: _expirationHandler
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSUUID *idsInvitationUUID; // ivar: _idsInvitationUUID
@property (retain, nonatomic) HMHomeInvitationData *invitationData; // ivar: _invitationData
@property (nonatomic) NSInteger invitationState; // ivar: _invitationState
@property (retain, nonatomic) NSArray *operations; // ivar: _operations
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (copy, nonatomic) id *resolutionHandler; // ivar: _resolutionHandler
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken; // ivar: _shareToken
@property (retain, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *timer; // ivar: _timer


+(BOOL)supportsSecureCoding;
-(BOOL)refreshDisplayName;
-(id)describeWithFormat;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 invitationData:(id)arg1 ;
-(id)initWithInvitationData:(id)arg0 forHome:(id)arg1 ;
-(void)_clearTimer;
-(void)_configureTimer;
-(void)_resolve:(BOOL)arg0 ;
-(void)accept;
-(void)decline;
-(void)encodeWithCoder:(id)arg0 ;
-(void)expire;
-(void)notifyStateChangedForMessage:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateInvitationState:(NSInteger)arg0 ;
-(void)updateTimer:(NSUInteger)arg0 clientQueue:(id)arg1 ;


@end


#endif