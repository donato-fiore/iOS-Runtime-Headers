// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCLOUDSTOREZONESHAREPARTICIPANT_H
#define PKCLOUDSTOREZONESHAREPARTICIPANT_H

@class CKDeviceToDeviceShareInvitationToken, CKUserIdentityLookupInfo, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // ivar: _invitationToken
@property (retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // ivar: _lookupInfo
@property (copy, nonatomic) NSString *participantHandle; // ivar: _participantHandle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif