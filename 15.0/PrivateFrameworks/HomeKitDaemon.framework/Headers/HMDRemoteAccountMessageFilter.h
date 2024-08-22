// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEACCOUNTMESSAGEFILTER_H
#define HMDREMOTEACCOUNTMESSAGEFILTER_H

@class HMFMessageDestination, NSArray;


#import "HMDMessageFilter.h"

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (readonly) HMFMessageDestination *target; // ivar: _target
@property (readonly, copy) NSArray *whitelistedMessages; // ivar: _whitelistedMessages


+(id)logCategory;
-(BOOL)__shouldCheckMessage:(id)arg0 ;
-(BOOL)acceptMessage:(id)arg0 target:(id)arg1 errorReason:(*id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 whitelistedMessages:(id)arg1 ;
-(id)logIdentifier;


@end


#endif