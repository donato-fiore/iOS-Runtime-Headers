// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHAPACCESSORYREMOTEWRITETASK_H
#define HMDHAPACCESSORYREMOTEWRITETASK_H



#import "HMDHAPAccessoryRemoteOperationTask.h"

@interface HMDHAPAccessoryRemoteWriteTask : HMDHAPAccessoryRemoteOperationTask



-(BOOL)_appendServiceListWithRequest:(id)arg0 serviceList:(id)arg1 ;
-(id)initWithContext:(id)arg0 requests:(id)arg1 completion:(id)arg2 ;
-(id)initWithContext:(id)arg0 requests:(id)arg1 delegateDevice:(id)arg2 timeout:(CGFloat)arg3 completion:(id)arg4 ;
-(id)initWithContext:(id)arg0 requests:(id)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif