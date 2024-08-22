// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFTRIGGERDIAGNOSTICSREQUEST_H
#define DMFTRIGGERDIAGNOSTICSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFTriggerDiagnosticsRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif