// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMDECOMPOSEDKEY_H
#define IAMDECOMPOSEDKEY_H

@class NSMutableArray, NSCompoundPredicate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}


@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers; // ivar: _ruleDestructuredIdentifiers


-(BOOL)hasPredicates;
-(BOOL)predicatesMatchFigaroEventProperties:(id)arg0 ;
-(id)init;
-(void)addPredicateCondition:(id)arg0 ;
-(void)constructCompoundPredicateIfNeeded;


@end


#endif