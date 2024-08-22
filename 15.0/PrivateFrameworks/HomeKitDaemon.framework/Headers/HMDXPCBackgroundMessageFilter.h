// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCBACKGROUNDMESSAGEFILTER_H
#define HMDXPCBACKGROUNDMESSAGEFILTER_H



#import "HMDXPCMessageFilter.h"

@interface HMDXPCBackgroundMessageFilter : HMDXPCMessageFilter



+(BOOL)canInitWithMessage:(id)arg0 ;
+(id)policyClasses;
-(BOOL)acceptWithPolicies:(id)arg0 error:(*id)arg1 ;


@end


#endif