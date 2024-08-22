// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCMESSAGEFILTER_H
#define HMDXPCMESSAGEFILTER_H

@class HMFMessageFilter;


#import "HMDXPCClientConnection.h"

@interface HMDXPCMessageFilter : HMFMessageFilter

@property (readonly) HMDXPCClientConnection *connection; // ivar: _connection


+(BOOL)canInitWithMessage:(id)arg0 ;
+(id)policyClasses;
-(id)initWithMessage:(id)arg0 ;


@end


#endif