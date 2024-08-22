// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLBITEXPRESSION_H
#define EFSQLBITEXPRESSION_H

@class NSString;
@protocol EFSQLBitExpressable, EFSQLValueExpressable, EFSQLExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLBitExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable>



@property (readonly, nonatomic) NSUInteger bitwiseOperator; // ivar: _bitwiseOperator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<EFSQLExpressable> *left; // ivar: _left
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *right; // ivar: _right
@property (readonly) Class superclass;


+(id)and:(id)arg0 with:(id)arg1 ;
+(id)leftShift:(id)arg0 by:(id)arg1 ;
+(id)or:(id)arg0 with:(id)arg1 ;
+(id)rightShift:(id)arg0 by:(id)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithLeft:(id)arg0 bitwiseOperator:(NSUInteger)arg1 right:(id)arg2 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)setColumnExpression:(id)arg0 ;


@end


#endif