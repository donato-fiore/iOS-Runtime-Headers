// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFSTOPMANAGINGAPPREQUEST_H
#define DMFSTOPMANAGINGAPPREQUEST_H



#import "DMFAppRequest.h"

@interface DMFStopManagingAppRequest : DMFAppRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif