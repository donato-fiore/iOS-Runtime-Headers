// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSECUREREMOTEMESSAGEFILTER_H
#define HMDSECUREREMOTEMESSAGEFILTER_H



#import "HMDMessageFilter.h"

@interface HMDSecureRemoteMessageFilter : HMDMessageFilter



+(BOOL)isWhitelistedMessage:(id)arg0 ;
+(id)logCategory;
-(BOOL)acceptMessage:(id)arg0 target:(id)arg1 errorReason:(*id)arg2 ;
-(id)logIdentifier;


@end


#endif