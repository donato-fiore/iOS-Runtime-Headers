// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFREMOVEPROTECTEDPROFILEREQUEST_H
#define DMFREMOVEPROTECTEDPROFILEREQUEST_H



#import "DMFRemoveProfileRequest.h"

@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif