// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CRANDCONJUNCTIONPREDICATE_H
#define _CRANDCONJUNCTIONPREDICATE_H

@class NSArray;


#import "CRSearchPredicate.h"

@interface _CRAndConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates; // ivar: _subpredicates


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asNSPredicate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubpredicates:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif