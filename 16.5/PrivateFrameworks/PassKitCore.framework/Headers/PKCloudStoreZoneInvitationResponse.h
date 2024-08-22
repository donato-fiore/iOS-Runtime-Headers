// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCLOUDSTOREZONEINVITATIONRESPONSE_H
#define PKCLOUDSTOREZONEINVITATIONRESPONSE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSharingDestination.h"
#import "PKCloudStoreZoneInvitation.h"

@interface PKCloudStoreZoneInvitationResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKSharingDestination *destination; // ivar: _destination
@property (retain, nonatomic) PKCloudStoreZoneInvitation *invitation; // ivar: _invitation
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)cloudStoreZoneInvitationResponseWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif