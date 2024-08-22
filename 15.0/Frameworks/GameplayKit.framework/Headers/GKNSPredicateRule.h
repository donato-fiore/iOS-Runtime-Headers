// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKNSPREDICATERULE_H
#define GKNSPREDICATERULE_H

@class NSPredicate;


#import "GKRule.h"

@interface GKNSPredicateRule : GKRule

@property (readonly, retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(BOOL)evaluatePredicateWithSystem:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif