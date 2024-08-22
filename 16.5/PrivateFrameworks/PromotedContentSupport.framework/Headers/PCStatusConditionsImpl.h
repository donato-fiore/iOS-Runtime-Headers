// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSTATUSCONDITIONSIMPL_H
#define PCSTATUSCONDITIONSIMPL_H

@protocol APStatusConditions_XPC;

#import <Foundation/Foundation.h>


@interface PCStatusConditionsImpl : NSObject <APStatusConditions_XPC>





-(BOOL)isConditionRateLimited:(id)arg0 onOperation:(NSInteger)arg1 ;
-(BOOL)operationWithCondition:(id)arg0 forType:(NSInteger)arg1 ;
-(id)_setupXPCConnection;
-(void)cleanupExpiredConditionsInBuffer;
-(void)clearStatusCondition:(id)arg0 completionHandler:(id)arg1 ;
-(void)isStatusConditionRegistered:(id)arg0 bundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setStatusCondition:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif