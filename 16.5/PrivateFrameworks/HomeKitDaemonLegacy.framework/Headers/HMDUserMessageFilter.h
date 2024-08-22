// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERMESSAGEFILTER_H
#define HMDUSERMESSAGEFILTER_H

@class HMFMessageFilter, NSString;
@protocol HMFLogging;



@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)filterMessage:(id)arg0 withPolicies:(id)arg1 error:(*id)arg2 ;
+(id)logCategory;


@end


#endif