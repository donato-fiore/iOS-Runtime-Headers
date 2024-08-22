// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFPARENTHESIZEDSQLEXPRESSION_H
#define EFPARENTHESIZEDSQLEXPRESSION_H


#import <Foundation/Foundation.h>


@interface EFParenthesizedSQLExpression : NSObject {
    id *_expressable;
}




+(id)parenthesizedValueCollectionExpressable:(id)arg0 ;
+(id)parenthesizedValueExpressable:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)ef_SQLExpression;
-(id)ef_SQLIsolatedExpression;
-(id)initWithExpressable:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 conjoiner:(id)arg1 ;


@end


#endif