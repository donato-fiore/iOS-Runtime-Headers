// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMATCHINGPREDICATEOPERATOR_H
#define NSMATCHINGPREDICATEOPERATOR_H



#import "NSStringPredicateOperator.h"

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int _contextLock;
    *? _regexContext;
}




-(BOOL)_shouldEscapeForLike;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(SEL)selector;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 variant:(NSUInteger)arg2 ;
-(id)symbol;
-(void)_clearContext;
-(void)dealloc;


@end


#endif