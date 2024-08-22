// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBSHAREINVITATION_H
#define HMBSHAREINVITATION_H

@class HMFObject, NSDate, NSURL, CKDeviceToDeviceShareInvitationToken;
@protocol NSCopying, NSSecureCoding;


#import "HMBCloudZoneID.h"
#import "HMBShareInvitationContext.h"

@interface HMBShareInvitation : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID; // ivar: _cloudZoneID
@property (readonly, nonatomic) HMBShareInvitationContext *context; // ivar: _context
@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, nonatomic) CKDeviceToDeviceShareInvitationToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 token:(id)arg1 context:(id)arg2 cloudZoneID:(id)arg3 ;
-(id)initWithURL:(id)arg0 token:(id)arg1 context:(id)arg2 cloudZoneID:(id)arg3 dateCreated:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif