// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFEFFECTIVEPOLICY_H
#define DMFEFFECTIVEPOLICY_H

@class NSDictionary, NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *currentPoliciesByIdentifier; // ivar: _currentPoliciesByIdentifier
@property (readonly, nonatomic) NSInteger defaultPolicy; // ivar: _defaultPolicy
@property (readonly, nonatomic) NSUInteger defaultPriority; // ivar: _defaultPriority
@property (readonly, nonatomic) BOOL downtimeEnforced;
@property (readonly, copy, nonatomic) NSSet *excludedIdentifiers; // ivar: _excludedIdentifiers
@property (readonly, copy, nonatomic) NSDictionary *prioritiesByIdentifier; // ivar: _prioritiesByIdentifier
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)downtimeCategoryIdentifiers;
+(id)systemCategoryIdentifiers;
+(id)unblockableBundleIdentifiers;
+(id)unblockableCategoryIdentifiers;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)policyForHostName:(id)arg0 ;
-(NSInteger)policyForIdentifier:(id)arg0 excludableIdentifiers:(id)arg1 ;
-(NSInteger)priorityForIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)priorityForHostName:(id)arg0 ;
-(id)_valueForMatchingHostName:(id)arg0 inRegisteredHostNames:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 defaultPolicy:(NSInteger)arg1 currentPoliciesByIdentifier:(id)arg2 defaultPriority:(NSUInteger)arg3 prioritiesByIdentifier:(id)arg4 excludedIdentifiers:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif