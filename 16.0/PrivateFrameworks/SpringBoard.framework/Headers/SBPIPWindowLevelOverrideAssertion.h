// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPWINDOWLEVELOVERRIDEASSERTION_H
#define SBPIPWINDOWLEVELOVERRIDEASSERTION_H



#import "SBPIPBehaviorOverrideAssertion.h"

@interface SBPIPWindowLevelOverrideAssertion : SBPIPBehaviorOverrideAssertion

@property (readonly, nonatomic) NSUInteger windowLevel; // ivar: _windowLevel


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithWindowLevel:(NSUInteger)arg0 reason:(NSInteger)arg1 identifier:(id)arg2 invalidationBlock:(id)arg3 ;


@end


#endif