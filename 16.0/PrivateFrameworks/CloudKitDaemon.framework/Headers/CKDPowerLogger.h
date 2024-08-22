// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPOWERLOGGER_H
#define CKDPOWERLOGGER_H


#import <Foundation/Foundation.h>


@interface CKDPowerLogger : NSObject



+(BOOL)isEnabled;
+(id)sharedLogger;
-(void)logOperationCombinedMetrics:(id)arg0 forOperationID:(id)arg1 operationType:(NSInteger)arg2 operationGroupID:(id)arg3 operationGroupName:(id)arg4 operationGroupQuantity:(NSUInteger)arg5 operationQualityOfService:(NSInteger)arg6 appContainerTuple:(id)arg7 ;


@end


#endif