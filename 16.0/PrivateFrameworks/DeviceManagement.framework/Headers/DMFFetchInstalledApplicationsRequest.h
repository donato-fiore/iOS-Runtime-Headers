// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHINSTALLEDAPPLICATIONSREQUEST_H
#define DMFFETCHINSTALLEDAPPLICATIONSREQUEST_H



#import "DMFFetchApplicationsRequest.h"

@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif