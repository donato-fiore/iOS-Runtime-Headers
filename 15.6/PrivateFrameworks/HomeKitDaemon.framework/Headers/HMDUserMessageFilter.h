// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERMESSAGEFILTER_H
#define HMDUSERMESSAGEFILTER_H

@class HMFMessageFilter, NSString;
@protocol HMFLogging;



@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canInitWithMessage:(id)arg0 ;
+(id)logCategory;
-(BOOL)acceptWithPolicies:(id)arg0 error:(*id)arg1 ;


@end


#endif