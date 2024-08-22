// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEFLUSHCONTAINERCACHE_H
#define MCMXPCMESSAGEFLUSHCONTAINERCACHE_H

@protocol MCMParametersFlushContainerCache;


#import "MCMXPCMessageWithContainerClassBase.h"

@interface MCMXPCMessageFlushContainerCache : MCMXPCMessageWithContainerClassBase <MCMParametersFlushContainerCache>



@property (readonly, nonatomic) NSUInteger containerClass;
@property (readonly, nonatomic) BOOL transient; // ivar: _transient


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif