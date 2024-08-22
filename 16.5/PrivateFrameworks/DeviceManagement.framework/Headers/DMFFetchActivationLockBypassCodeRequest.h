// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHACTIVATIONLOCKBYPASSCODEREQUEST_H
#define DMFFETCHACTIVATIONLOCKBYPASSCODEREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchActivationLockBypassCodeRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;


@end


#endif