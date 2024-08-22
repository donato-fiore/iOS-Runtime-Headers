// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHSAFARIBOOKMARKSREQUEST_H
#define DMFFETCHSAFARIBOOKMARKSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchSafariBookmarksRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;


@end


#endif