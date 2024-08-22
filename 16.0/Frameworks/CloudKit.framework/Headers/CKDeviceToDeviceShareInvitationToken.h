// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDEVICETODEVICESHAREINVITATIONTOKEN_H
#define CKDEVICETODEVICESHAREINVITATIONTOKEN_H

@class NSString, NSURL, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *participantID; // ivar: _participantID
@property (readonly, copy, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, copy, nonatomic) NSData *sharingInvitationData; // ivar: _sharingInvitationData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharingInvitationData:(id)arg0 shareURL:(id)arg1 ;
-(id)initWithSharingInvitationData:(id)arg0 shareURL:(id)arg1 participantID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif