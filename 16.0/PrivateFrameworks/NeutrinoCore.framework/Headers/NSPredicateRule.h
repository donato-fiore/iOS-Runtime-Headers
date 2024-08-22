// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPREDICATERULE_H
#define NSPREDICATERULE_H

@class NSPredicate;


#import "NURule.h"

@interface NSPredicateRule : NURule

@property (readonly, retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


+(BOOL)supportsSecureCoding;
-(BOOL)evaluatePredicateWithSystem:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif