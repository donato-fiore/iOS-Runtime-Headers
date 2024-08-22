// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFCREATECONFIGURATIONORGANIZATIONREQUEST_H
#define DMFCREATECONFIGURATIONORGANIZATIONREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationDisplayName; // ivar: _organizationDisplayName
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (copy, nonatomic) NSString *organizationType; // ivar: _organizationType


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif