// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSPROCESSEXECUTIONPOLICY_H
#define FBSPROCESSEXECUTIONPOLICY_H

@class NSString, NSArray;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSProcessExecutionStrategy.h"

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *provisions; // ivar: _provisions
@property (copy, nonatomic) FBSProcessExecutionStrategy *strategy; // ivar: _strategy
@property (readonly) Class superclass;


+(id)policyForStrategy:(id)arg0 withProvisions:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif