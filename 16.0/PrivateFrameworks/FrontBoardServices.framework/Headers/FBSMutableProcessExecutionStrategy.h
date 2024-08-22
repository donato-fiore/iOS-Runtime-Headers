// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSMUTABLEPROCESSEXECUTIONSTRATEGY_H
#define FBSMUTABLEPROCESSEXECUTIONSTRATEGY_H



#import "FBSProcessExecutionStrategy.h"

@interface FBSMutableProcessExecutionStrategy : FBSProcessExecutionStrategy

@property (nonatomic) unsigned int flags;
@property (nonatomic) NSInteger graphicsPolicy;
@property (nonatomic) NSInteger jetsamPolicy;
@property (nonatomic) unsigned int reason;
@property (nonatomic) NSInteger schedulingPolicy;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif