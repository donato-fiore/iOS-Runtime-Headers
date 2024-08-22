// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKOPERATIONFLOWCONTROLMANAGER_H
#define CKOPERATIONFLOWCONTROLMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKOperationFlowControlManager : NSObject {
    NSMutableDictionary *_flowControlledOperationKeys;
}




-(BOOL)isOperationLimited:(id)arg0 outLimitError:(*id)arg1 ;
-(CGFloat)secondsUntilUnlimited:(id)arg0 ;
-(id)CKStatusReportArray;
-(id)init;
-(void)limitOperation:(id)arg0 retryAfter:(id)arg1 error:(id)arg2 ;
-(void)unlimitAllOperations;


@end


#endif