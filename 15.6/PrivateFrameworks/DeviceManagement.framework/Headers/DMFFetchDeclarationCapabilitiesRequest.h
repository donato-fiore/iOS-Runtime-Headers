// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHDECLARATIONCAPABILITIESREQUEST_H
#define DMFFETCHDECLARATIONCAPABILITIESREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchDeclarationCapabilitiesRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;


@end


#endif