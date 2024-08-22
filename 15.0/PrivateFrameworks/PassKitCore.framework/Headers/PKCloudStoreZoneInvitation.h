// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCLOUDSTOREZONEINVITATION_H
#define PKCLOUDSTOREZONEINVITATION_H

@class NSString, NSDate, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudStoreZoneInvitation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (retain, nonatomic) NSData *shareInvitationToken; // ivar: _shareInvitationToken
@property (retain, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
+(id)cloudStoreZoneInvitationWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCloudStoreZoneInvitation:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif