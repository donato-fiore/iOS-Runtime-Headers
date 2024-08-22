// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDCONTEXTUALPREDICATE_H
#define _CDCONTEXTUALPREDICATE_H

@class NSSet, NSPredicate, NSOrderedSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSSet *circularLocationRegions; // ivar: _circularLocationRegions
@property (nonatomic) BOOL evaluateOnEveryKeyPathUpdate; // ivar: _evaluateOnEveryKeyPathUpdate
@property (readonly, nonatomic) BOOL firesOnAnyChange;
@property (copy, nonatomic) NSSet *keyPaths; // ivar: _keyPaths
@property (nonatomic) CGFloat minimumDurationInPreviousState; // ivar: _minimumDurationInPreviousState
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSPredicate *predicateForPreviousState; // ivar: _predicateForPreviousState
@property (retain, nonatomic) NSOrderedSet *timeBasedPredicateEvaluationIntervals; // ivar: _timeBasedPredicateEvaluationIntervals


+(BOOL)supportsSecureCoding;
+(id)andPredicateWithSubpredicates:(id)arg0 ;
+(id)contextualPredicateForKeyPaths:(id)arg0 withPredicate:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg0 ;
+(id)orPredicateWithSubpredicates:(id)arg0 ;
+(id)predicateForChangeAtKeyPath:(id)arg0 ;
+(id)predicateForChangeAtKeyPath:(id)arg0 withMinimumDurationInPreviousState:(CGFloat)arg1 ;
+(id)predicateForChangeAtKeyPaths:(id)arg0 ;
+(id)predicateForKeyPath:(id)arg0 equalToValue:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg0 equalToValue:(id)arg1 withMinimumDurationInPreviousState:(CGFloat)arg2 ;
+(id)predicateForKeyPath:(id)arg0 withFormat:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg0 withPredicate:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg0 withPredicate:(id)arg1 withPredicateForPreviousState:(id)arg2 withMinimumDurationInPreviousState:(CGFloat)arg3 ;
-(BOOL)evaluateWithObject:(id)arg0 ;
-(BOOL)evaluateWithState:(id)arg0 previousValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForChangeAtKeyPath:(id)arg0 ;
-(id)initForChangeAtKeyPath:(id)arg0 equalToValue:(id)arg1 ;
-(id)initForChangeAtKeyPaths:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif