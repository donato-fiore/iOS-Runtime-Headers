// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSPROCESSWATCHDOGPOLICY_H
#define FBSPROCESSWATCHDOGPOLICY_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface FBSProcessWatchdogPolicy : NSObject <BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *provisions; // ivar: _provisions
@property (readonly) Class superclass;


+(id)policyWithName:(id)arg0 forProvisions:(id)arg1 ;
+(id)policyWithProvisions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif