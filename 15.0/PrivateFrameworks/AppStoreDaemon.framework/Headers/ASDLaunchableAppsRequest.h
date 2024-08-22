// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDLAUNCHABLEAPPSREQUEST_H
#define ASDLAUNCHABLEAPPSREQUEST_H



#import "ASDEphemeralRequest.h"

@interface ASDLaunchableAppsRequest : ASDEphemeralRequest



+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif