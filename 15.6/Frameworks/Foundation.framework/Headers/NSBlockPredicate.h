// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSBLOCKPREDICATE_H
#define NSBLOCKPREDICATE_H



#import "NSPredicate.h"

@interface NSBlockPredicate : NSPredicate {
    id *_block;
}




+(BOOL)supportsSecureCoding;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)_predicateBlock:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(id)predicateWithSubstitutionVariables:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif