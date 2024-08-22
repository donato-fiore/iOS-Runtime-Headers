// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGINVITATIONREQUEST_H
#define PKAPPLETSUBCREDENTIALSHARINGINVITATIONREQUEST_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAppletSubcredentialSharingInvitationRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSString *sharedCredentialIdentifier; // ivar: _sharedCredentialIdentifier
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif