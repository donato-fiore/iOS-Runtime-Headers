// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCANONICALCONTAINERREQUESTOPERATION_H
#define WLKCANONICALCONTAINERREQUESTOPERATION_H



#import "WLKCanonicalPlayablesRequestOperation.h"
#import "WLKCanonicalContainerResponse.h"

@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation

@property (readonly, nonatomic) WLKCanonicalContainerResponse *containerResponse; // ivar: _containerResponse


-(void)processResponse;


@end


#endif