// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFAMILYMEMBER_H
#define PKFAMILYMEMBER_H

@class FAFamilyMember, NSString, NSSet, CNContact, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFamilyMember : NSObject <NSSecureCoding>

 {
    FAFamilyMember *_member;
}


@property (nonatomic) NSUInteger age; // ivar: _age
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSSet *appleIDAliases; // ivar: _appleIDAliases
@property (nonatomic) BOOL askToBuyEnabled; // ivar: _askToBuyEnabled
@property (nonatomic, getter=isChildAccount) BOOL childAccount; // ivar: _childAccount
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSDate *dateOfBirth; // ivar: _dateOfBirth
@property (copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSDate *invitationDate; // ivar: _invitationDate
@property (copy, nonatomic) NSString *inviteEmail; // ivar: _inviteEmail
@property (copy, nonatomic) NSDate *joinedDate; // ivar: _joinedDate
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic, getter=isMe) BOOL me; // ivar: _me
@property (nonatomic) NSInteger memberType; // ivar: _memberType
@property (nonatomic, getter=isOrganizer) BOOL organizer; // ivar: _organizer
@property (nonatomic, getter=isParent) BOOL parent; // ivar: _parent
@property (nonatomic) BOOL parentalControlsEnabled; // ivar: _parentalControlsEnabled
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)canSharePeerPaymentAccount;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFamilyMember:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFAFamilyMember:(id)arg0 ;
-(id)labelName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif