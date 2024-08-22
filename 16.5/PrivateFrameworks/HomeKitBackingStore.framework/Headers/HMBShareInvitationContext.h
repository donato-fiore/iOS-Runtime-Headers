// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBSHAREINVITATIONCONTEXT_H
#define HMBSHAREINVITATIONCONTEXT_H

@class HMFObject, CKUserIdentityLookupInfo, NSUUID;
@protocol NSCopying, NSSecureCoding;



@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding>



@property (readonly) CKUserIdentityLookupInfo *lookupInfo; // ivar: _lookupInfo
@property (readonly, copy) NSUUID *participantClientIdentifier; // ivar: _participantClientIdentifier
@property BOOL shouldGrantWriteAccess; // ivar: _shouldGrantWriteAccess


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParticipantClientIdentifier:(id)arg0 cloudShareID:(id)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg0 emailAddress:(id)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg0 lookupInfo:(id)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg0 phoneNumber:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif