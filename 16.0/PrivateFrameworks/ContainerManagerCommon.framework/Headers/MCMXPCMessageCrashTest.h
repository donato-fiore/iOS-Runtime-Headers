// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGECRASHTEST_H
#define MCMXPCMESSAGECRASHTEST_H

@protocol MCMParametersCrashTest;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageCrashTest : MCMXPCMessageBase <MCMParametersCrashTest>



@property (readonly, nonatomic) NSUInteger crashCount; // ivar: _crashCount


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif