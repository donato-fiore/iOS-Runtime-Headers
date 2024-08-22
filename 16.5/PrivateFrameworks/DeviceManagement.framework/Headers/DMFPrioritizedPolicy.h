// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFPRIORITIZEDPOLICY_H
#define DMFPRIORITIZEDPOLICY_H


#import <Foundation/Foundation.h>


@interface DMFPrioritizedPolicy : NSObject

@property (nonatomic) NSInteger policy; // ivar: _policy
@property (nonatomic) NSInteger priority; // ivar: _priority


+(NSInteger)arbitratePolicyForPrioritizedPolicies:(id)arg0 ;
+(id)prioritizedPoliciesForAppPolicy:(id)arg0 appCategoryPolicy:(id)arg1 bundleIdentifiers:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifiers:(id)arg4 webPolicy:(id)arg5 webCategoryPolicy:(id)arg6 webDomains:(id)arg7 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPrioritizedPolicy:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithEffectivePolicy:(id)arg0 identifier:(id)arg1 excludableIdentifiers:(id)arg2 ;


@end


#endif