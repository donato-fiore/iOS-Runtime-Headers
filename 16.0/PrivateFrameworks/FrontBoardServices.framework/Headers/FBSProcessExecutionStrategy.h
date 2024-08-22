// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSPROCESSEXECUTIONSTRATEGY_H
#define FBSPROCESSEXECUTIONSTRATEGY_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSProcessExecutionStrategy : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic, getter=isCustomPolicy) BOOL customPolicy; // ivar: _customPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags; // ivar: _bksFlags
@property (nonatomic) NSInteger graphicsPolicy; // ivar: _graphicsPolicy
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger jetsamPolicy; // ivar: _jetsamPolicy
@property (nonatomic) unsigned int reason; // ivar: _bksReason
@property (nonatomic) NSInteger schedulingPolicy; // ivar: _schedulingPolicy
@property (copy, nonatomic) NSString *strategyName; // ivar: _strategyName
@property (readonly) Class superclass;


+(id)background;
+(id)backgroundWithUI;
+(id)policyWithReason:(unsigned int)arg0 flags:(unsigned int)arg1 ;
+(id)strategyForSchedulingPolicy:(NSInteger)arg0 graphicsPolicy:(NSInteger)arg1 jetsamPolicy:(NSInteger)arg2 ;
+(id)userInteractive;
+(id)userInteractiveWithoutUI;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif