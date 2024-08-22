// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPBEHAVIOROVERRIDEASSERTION_H
#define SBPIPBEHAVIOROVERRIDEASSERTION_H

@class BSSimpleAssertion, NSString;



@interface SBPIPBehaviorOverrideAssertion : BSSimpleAssertion

@property (readonly, copy, nonatomic) NSString *cameraSensorAttributionBundleIdentifier; // ivar: _cameraSensorAttributionBundleIdentifier


-(NSInteger)behaviorOverrideReason;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithReason:(NSInteger)arg0 identifier:(id)arg1 cameraSensorAttributionBundleIdentifier:(id)arg2 invalidationBlock:(id)arg3 ;
-(id)initWithReason:(NSInteger)arg0 identifier:(id)arg1 invalidationBlock:(id)arg2 ;
-(id)initWithReason:(NSInteger)arg0 invalidationBlock:(id)arg1 ;


@end


#endif