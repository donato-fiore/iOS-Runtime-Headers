// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTESERVERACCESSRESOURCE_H
#define WFREMOTESERVERACCESSRESOURCE_H



#import "WFAccessResource.h"

@interface WFRemoteServerAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)icon;
-(id)init;
-(id)name;


@end


#endif