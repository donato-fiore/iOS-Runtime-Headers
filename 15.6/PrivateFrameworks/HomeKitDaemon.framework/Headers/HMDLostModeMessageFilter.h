// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOSTMODEMESSAGEFILTER_H
#define HMDLOSTMODEMESSAGEFILTER_H

@class HMFMessageFilter;



@interface HMDLostModeMessageFilter : HMFMessageFilter



+(BOOL)canInitWithMessage:(id)arg0 ;
+(id)policyClasses;
-(BOOL)acceptWithPolicies:(id)arg0 error:(*id)arg1 ;


@end


#endif