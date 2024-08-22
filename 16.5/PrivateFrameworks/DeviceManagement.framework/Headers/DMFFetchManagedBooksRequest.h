// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHMANAGEDBOOKSREQUEST_H
#define DMFFETCHMANAGEDBOOKSREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchManagedBooksRequest : DMFTaskRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;


@end


#endif