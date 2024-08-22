// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADSTATUSCONDITIONSIMPL_H
#define ADSTATUSCONDITIONSIMPL_H

@protocol ADStatusConditions_XPC;

#import <Foundation/Foundation.h>


@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>





-(BOOL)isConditionRateLimited:(id)arg0 onOperation:(NSInteger)arg1 ;
-(BOOL)operationWithCondition:(id)arg0 forType:(NSInteger)arg1 ;
-(id)capped:(id)arg0 to:(NSUInteger)arg1 ;
-(id)setupXPCConnection;
-(void)cleanupExpiredConditionsInBuffer;
-(void)clearStatusCondition:(id)arg0 completionHandler:(id)arg1 ;
-(void)initializeRateLimitingBuffer;
-(void)isStatusConditionRegistered:(id)arg0 bundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setStatusCondition:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif