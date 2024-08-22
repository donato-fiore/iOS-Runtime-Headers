// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSKEYPATHEXPRESSION_H
#define NSKEYPATHEXPRESSION_H



#import "NSFunctionExpression.h"

@interface NSKeyPathExpression : NSFunctionExpression



-(id)initWithKeyPath:(id)arg0 ;
-(id)initWithOperand:(id)arg0 andKeyPath:(id)arg1 ;
-(id)keyPath;
-(id)pathExpression;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif