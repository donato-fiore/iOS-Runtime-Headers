// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFUPDATEAPPREQUEST_H
#define DMFUPDATEAPPREQUEST_H



#import "DMFAppRequest.h"

@interface DMFUpdateAppRequest : DMFAppRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif