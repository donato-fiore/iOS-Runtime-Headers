// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBSHAREPARTICIPANT_H
#define HMBSHAREPARTICIPANT_H

@class HMFObject, CKShareParticipant, NSUUID, NSString;
@protocol HMBModelObjectStorage, NSCopying, NSSecureCoding;


#import "HMBShareUserID.h"
#import "HMBShareInvitation.h"

@interface HMBShareParticipant : HMFObject <HMBModelObjectStorage, NSCopying, NSSecureCoding>



@property (readonly, copy) CKShareParticipant *ckShareParticipant; // ivar: _ckShareParticipant
@property (readonly, copy) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) HMBShareUserID *cloudShareID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasAccepted;
@property (readonly) BOOL hasWriteAccess;
@property (readonly) NSUInteger hash;
@property (copy) HMBShareInvitation *pendingInvitation; // ivar: _pendingInvitation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCKShareParticipant:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif