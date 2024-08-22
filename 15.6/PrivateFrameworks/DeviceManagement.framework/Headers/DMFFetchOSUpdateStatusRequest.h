// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHOSUPDATESTATUSREQUEST_H
#define DMFFETCHOSUPDATESTATUSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchOSUpdateStatusRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;


@end


#endif