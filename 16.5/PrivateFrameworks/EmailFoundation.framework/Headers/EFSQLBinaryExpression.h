// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLBINARYEXPRESSION_H
#define EFSQLBINARYEXPRESSION_H

@class NSString;
@protocol EFSQLBitExpressable, EFSQLValueExpressable, EFSQLExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLBinaryExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable>



@property (readonly, nonatomic) NSUInteger binaryOperator; // ivar: _binaryOperator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *left; // ivar: _left
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *right; // ivar: _right
@property (readonly) Class superclass;


-(id)ef_SQLIsolatedExpression;
-(id)initWithLeft:(id)arg0 operator:(NSUInteger)arg1 right:(id)arg2 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)setColumnExpression:(id)arg0 ;


@end


#endif