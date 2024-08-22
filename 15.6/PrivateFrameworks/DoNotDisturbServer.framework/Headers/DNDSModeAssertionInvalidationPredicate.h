// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODEASSERTIONINVALIDATIONPREDICATE_H
#define DNDSMODEASSERTIONINVALIDATIONPREDICATE_H

@class NSPredicate;



@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (readonly, nonatomic) NSUInteger predicateType;


+(id)predicateForAnyAssertion;
+(id)predicateForAssertionClientIdentifiers:(id)arg0 ;
+(id)predicateForAssertionUUIDs:(id)arg0 ;
+(id)predicateForAssertionsTakenBeforeDate:(id)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif