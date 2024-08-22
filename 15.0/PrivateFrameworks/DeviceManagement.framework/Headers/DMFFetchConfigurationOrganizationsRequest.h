// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHCONFIGURATIONORGANIZATIONSREQUEST_H
#define DMFFETCHCONFIGURATIONORGANIZATIONSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchConfigurationOrganizationsRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;


@end


#endif