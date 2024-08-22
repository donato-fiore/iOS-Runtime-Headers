// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHPROVISIONINGPROFILESREQUEST_H
#define DMFFETCHPROVISIONINGPROFILESREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly; // ivar: _managedOnly


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif