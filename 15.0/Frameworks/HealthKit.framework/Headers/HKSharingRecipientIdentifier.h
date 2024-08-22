// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSHARINGRECIPIENTIDENTIFIER_H
#define HKSHARINGRECIPIENTIDENTIFIER_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSharingRecipientIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *clinicalAccountIdentifier; // ivar: _clinicalAccountIdentifier
@property (readonly, copy, nonatomic) NSUUID *invitationUUID; // ivar: _invitationUUID
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)sharingRecipientIdentifierFromStringRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithRecipientIdentifierType:(NSUInteger)arg0 invitationUUID:(id)arg1 clinicalAccountIdentifier:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForClinicalAccountIdentifier:(id)arg0 ;
-(id)initForInvitationUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif