// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDXPCENTITLEMENTMESSAGEFILTER_H
#define HMDXPCENTITLEMENTMESSAGEFILTER_H

@class NSString;
@protocol HMFLogging;


#import "HMDXPCMessageFilter.h"

@interface HMDXPCEntitlementMessageFilter : HMDXPCMessageFilter <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)acceptWithPolicies:(id)arg0 error:(*id)arg1 ;


@end


#endif