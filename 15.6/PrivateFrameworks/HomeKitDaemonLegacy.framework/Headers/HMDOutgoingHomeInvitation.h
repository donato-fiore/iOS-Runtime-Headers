// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDOUTGOINGHOMEINVITATION_H
#define HMDOUTGOINGHOMEINVITATION_H

@class NSArray, NSString, NSUUID;
@protocol HMDBackingStoreObjectProtocol, HMFLocking;


#import "HMDHomeInvitation.h"
#import "HMDUser.h"

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, nonatomic) NSArray *accessoryInvitationsInformation;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *inviteeDestinationAddress; // ivar: _inviteeDestinationAddress
@property (readonly, nonatomic) NSUUID *messageIdentifier; // ivar: _messageIdentifier
@property (retain, nonatomic) NSArray *operationIdentifiers; // ivar: _operationIdentifiers
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) BOOL responseReceived;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDUser *user; // ivar: _user
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)refreshDisplayName;
-(id)describeWithFormat;
-(id)emptyModelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitee:(id)arg0 invitationState:(NSInteger)arg1 forHome:(id)arg2 expiryDate:(id)arg3 messageIdentifier:(id)arg4 ;
-(id)initWithUUID:(id)arg0 invitee:(id)arg1 invitationState:(NSInteger)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)shortDescription;
-(void)_transactionOutgoingInvitiationUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyStateChangedForMessage:(id)arg0 ;
-(void)processUserManagementOperationIdentifiers:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateInvitationState:(NSInteger)arg0 ;
-(void)updateUser:(id)arg0 ;
-(void)updateUserManagementOperations:(id)arg0 ;


@end


#endif